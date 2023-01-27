#!/bin/python3.8
import cv2 as cv
import numpy as np


## Original Image
img = cv.imread("resources/lambo.png")

## Full Black Image
img1 = np.zeros((512, 512, 3), np.uint8)


cv.line(img1, (0, 0), (512, 512), (0, 255, 0), 3)
cv.line(img1, (0, 0), (img1.shape[1], img1.shape[0]), (0, 255, 0), 3)
# starting point , ending point , color , thickness

while True:
    cv.imshow("Original Image", img1)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
