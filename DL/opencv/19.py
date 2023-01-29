# /bin/python3.8


import cv2 as cv
import numpy as np

# Original Image
img = cv.imread("resources/lambo.png")


# TrackBars
def empty(a):
    pass


cv.namedWindow("TrackBars")
cv.resizeWindow("TrackBars", 640, 240)
cv.createTrackbar("Hue Min", "TrackBars", 0, 179, empty)
cv.createTrackbar("Hue Max", "TrackBars", 179, 179, empty)
cv.createTrackbar("Sat Min", "TrackBars", 0, 255, empty)
cv.createTrackbar("Sat Max", "TrackBars", 255, 255, empty)
cv.createTrackbar("Val Min", "TrackBars", 0, 255, empty)
cv.createTrackbar("Val Max", "TrackBars", 255, 255, empty)

# Get values using Get TrackBars position function
while True:
    img = cv.imread("resources/lambo.png")
    # Color Detection
    imgHSV = cv.cvtColor(img, cv.COLOR_BGR2HSV)
    h_min = cv.getTrackbarPos("Hue Min", "TrackBars")
    print(h_min)
    cv.imshow("Original", imgHSV)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
