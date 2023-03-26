# /bin/python3.8


import cv2 as cv
import numpy as np

# Original Image
img = cv.imread("resources/cards.jpg")
# img1 = cv.imread("resources/lambo.png")
# img2 = cv.imread("resources/dog.jpg")

# Joining Images
# ImageStack Function


def stackImages(scale, imgArray):

    rows = len(imgArray)
    cols = len(imgArray[0])

    # Check whether we have multilayers
    rowsAvailable = isinstance(imgArray[0], list)

    width = imgArray[0][0].shape[1]
    height = imgArray[0][0].shape[0]

    if rowsAvailable:
        for x in range(0, rows):
            for y in range(0, cols):
                if imgArray[x][y].shape[:2] == imgArray[0][0].shape[:2]:
                    imgArray[x][y] = cv.resize(
                        imgArray[x][y], (0, 0), None, scale, scale
                    )
                else:
                    imgArray[x][y] = cv.resize(
                        imgArray[x][y],
                        (imgArray[0][0].shape[1], imgArray[0][0].shape[0]),
                        None,
                        scale,
                        scale,
                    )

                if len(imgArray[x][y].shape) == 2:
                    imgArray[x][y] = cv.cvtColor(imgArray[x][y], cv.COLOR_GRAY2BGR)

    imageBlank = np.zeros((height, width, 3), np.uint8)

    hor = [imageBlank] * rows

    # First put each horizontal image to its horizontal place
    for x in range(0, rows):
        hor[x] = np.hstack(imgArray[x])

        # Stack each array to the vertical format
        ver = np.vstack(hor)
    else:
        for x in range(0, rows):
            if imgArray[x].shape[:2] == imgArray[0].shape[:2]:
                imgArray[x] = cv.resize(imgArray[x], (0, 0), None, scale, scale)
            else:
                imgArray[x] = cv.resize(
                    imgArray[x],
                    (imgArray[0].shape[1], imgArray[0].shape[0]),
                    None,
                    scale,
                    scale,
                )
            if len(imgArray[x].shape) == 2:
                imgArray[x] = cv.cvtColor(imgArray[x], cv.COLOR_GRAY2BGR)
        hor = np.hstack(imgArray)
        ver = hor
    return ver


imgStack = stackImages(1, ([[img, img, img]]))

while True:
    cv.imshow("Original", imgStack)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break