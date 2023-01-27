#!/bin/python3.8
import cv2 as cv
import numpy as np


## Original Image
img = cv.imread("resources/lambo.png")

## Full Black Image
img1 = np.zeros((512, 512, 3), np.uint8)

## Rectangle
# starting point , ending point , color , thickness
cv.rectangle(img1, (0, 0), (250, 350), (0, 0, 255), cv.FILLED)

while True:
    cv.imshow("Original Image", img1)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
