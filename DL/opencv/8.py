#!/bin/python3.8
import cv2 as cv
import numpy as np

## Original Image
img = cv.imread("resources/lambo.png")

## Resize and Crop
print(img.shape)

imgResize = cv.resize(img, (1000, 500))
while True:
    cv.imshow("Eroded Image", imgResize)
    print(img.shape)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
