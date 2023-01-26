#!/bin/python3.8
import cv2 as cv
import numpy as np


img = cv.imread("resources/dog.jpg")

## Canny
imgCanny = cv.Canny(img, 100, 100)


## Kernel
kernel = np.ones((5, 5), np.uint8)

## Dialation
imgDialation = cv.dilate(imgCanny, kernel, iterations=1)


## Erosion
imgEroded = cv.erode(imgDialation, kernel, iterations=1)

while True:
    cv.imshow("Eroded Image", imgEroded)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
