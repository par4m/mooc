# /bin/python3.8


import cv2 as cv
import numpy as np

# Original Image
img = cv.imread("resources/cards.jpg")
img1 = cv.imread("resources/lambo.png")
img2 = cv.imread("resources/dog.jpg")

# Joining Images
## Vertical Stack

imgVer = np.vstack((img, img, img))

while True:
    cv.imshow("Original", imgVer)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
