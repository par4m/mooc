from duckduckgo_search import ddg_images  # Function to search for Images
from fastcore.all import *  # L and itemgot etc
from fastdownload import download_url  # Download from url
from fastai.vision.all import *  # view images etc


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
im.to_thumb(256)
