#!/bin/python3.8
import cv2 as cv
import numpy as np


img = cv.imread("resources/dog.jpg")
imgCanny = cv.Canny(img, 100, 100)


##
kernel = np.ones((5, 5), np.uint8)
imgDilation = cv.dilate(imgCanny, kernel)

while True:
    cv.imshow("Blur Image", imgCanny)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
