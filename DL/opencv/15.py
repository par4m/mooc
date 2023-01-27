#!/bin/python3.8
import cv2 as cv
import numpy as np


## Original Image
img = cv.imread("resources/cards.jpg")

## Full Black Image
img1 = np.zeros((512, 512, 3), np.uint8)


## Warp Perspective

while True:
    cv.imshow("Original Image", img)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
