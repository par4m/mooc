#!/bin/python3.8
import cv2 as cv
import numpy as np


## Original Image
img = cv.imread("resources/cards.jpg")

## Full Black Image
# img1 = np.zeros((512, 512, 3), np.uint8)


## Warp Perspective
# Playing card is usually 2.5 x 3.5 inches
width, height = 250, 350

pts1 = np.float32(
    [
        [256, 42],
        [358, 103],
        [177, 185],
        [279, 243],
    ]
)
pts2 = np.float32([[0, 0], [width, 0], [0, height], [width, height]])

# transformation matrix required for the Perspective itself

matrix = cv.getPerspectiveTransform(pts1, pts2)

imgOutput = cv.warpPerspective(img, matrix, (width, height))

while True:
    cv.imshow("Original Image", imgOutput)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
