from duckduckgo_search import ddg_images  # Function to search for Images
from fastcore.all import *  # L and itemgot etc
from fastdownload import download_url  # Download from url
from fastai.vision.all import *  # view images etc
from time import sleep  # to pause between searches to avoid overloading the server


def search_images(term, max_images=30):
    print(f"Searching for '{term}'")
    print()
    return L(ddg_images(term, max_results=max_images)).itemgot("image")


## Searching for a Bird Photo
urls = search_images("Bird photos", max_images=1)
print(urls[0])

## Downloading the bird photo from list of urls
dest = "bird.jpg"  # name of the file to save the image as
download_url(urls[0], dest, None, show_progress=False)


# View the image
im = Image.open(dest)
im.to_thumb(256, 256)


## doing the same with forest photos


download_url(
    search_images("forest photos", max_images=2)[0], "forest.jpg", show_progress=False
)  # searching for forest photos then getting the image urls then downloading the image and saving it as forest.jpg

Image.open("forest.jpg").to_thumb(256, 256)  # opening and converting it to thumbnail


# Our searches seem to be giving reasonable results,
# #so let's grab a few examples of each of "bird" and "forest" photos, and save each group of photos to a different folder (I'm also trying to grab a range of lighting conditions here):


searches = "forest", "bird"  ## items to search for - forest and bird
print(searches)
path = Path("bird_or_not")
print(path)

for o in searches:
    dest = path / o
    print(dest)
    dest.mkdir(exist_ok=True, parents=True)
    download_images(dest, urls=search_images(f"{o} photo"))
    sleep(10)  # Pause between searches to avoid over-loading server
    download_images(dest, urls=search_images(f"{o} sun photo"))
    sleep(10)
    download_images(dest, urls=search_images(f"{o} shade photo"))
    sleep(10)
    resize_images(path / o, max_size=400, dest=path / o)


## Removing Images that failed to download

failed = verify_images(get_image_files(path))
failed.map(Path.unlink)
len(failed)
