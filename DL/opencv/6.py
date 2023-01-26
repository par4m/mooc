#!/bin/python3.8
import cv2 as cv
import numpy as np


img = cv.imread("resources/dog.jpg")
imgCanny = cv.Canny(img, 100, 100)


##
kernel = np.ones((5, 5), np.uint8)
imgDialation = cv.dilate(imgCanny, kernel, iterations=0)

while True:
    cv.imshow("Dialation Image", imgDialation)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break