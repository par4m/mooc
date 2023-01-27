#!/bin/python3.8
import cv2 as cv
import numpy as np


## Original Image
img = cv.imread("resources/lambo.png")

## Full Black Image
img1 = np.zeros((512, 512, 3), np.uint8)

cv.putText(
    img1, "OpenCv Test ", (200, 100), cv.FONT_HERSHEY_COMPLEX, 0.5, (0, 150, 0), 2
)

while True:
    cv.imshow("Original Image", img1)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
