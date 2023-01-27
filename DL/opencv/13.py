#!/bin/python3.8
import cv2 as cv
import numpy as np


## Original Image
img = cv.imread("resources/lambo.png")

## Full Black Image
img1 = np.zeros((512, 512, 3), np.uint8)

# Circle
# source , starting point, radius, color, thickness
cv.circle(img1, (400, 50), 30, (255, 255, 0), 5)

while True:
    cv.imshow("Original Image", img1)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
