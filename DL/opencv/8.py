#!/bin/python3.8
import cv2 as cv
import numpy as np

## Original Image
img = cv.imread("resources/lambo.png")

## Resize and Crop
print(img.shape)

imgResize = cv.resize(img, ())
while True:
    cv.imshow("Eroded Image", img)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
