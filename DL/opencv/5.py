#!/bin/python3.8
import cv2 as cv

cap = cv.imread("resources/dog.jpg")

imgBlur = cv.GaussianBlur(cap, (7, 7), 0)


while True:
    cv.imshow("Blur Image", imgBlur)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
