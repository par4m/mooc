#!/bin/python3.8
import cv2 as cv
import numpy as np

## Original Image
img = cv.imread("resources/lambo.png")

## Crop
print(img.shape)

imgCropped = img[0:200, 200:500]

while True:
    cv.imshow("Original Image", img)
    cv.imshow("Cropped Image", imgCropped)
    # print(img.shape)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
