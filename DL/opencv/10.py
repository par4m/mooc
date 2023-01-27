#!/bin/python3.8
import cv2 as cv
import numpy as np


## Original Image
img = cv.imread("resources/lambo.png")

img1 = np.zeros((512, 512, 3), np.uint8)

# print(img1.shape)

img1[200:300, 100:300] = 255, 0, 0

print(img1)

while True:
    cv.imshow("Original Image", img1)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
