import cv2 as cv
import numpy as np

cap = cv.VideoCapture(0)

cap.set(3, 640)
cap.set(4, 480)
cap.set(10, 150)

while True:
    # Capture frame-by-frame
    ret, frame = cap.read()

    # Our operations on the frame come here
    # gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Display the resulting frame
    cv.imshow("window", frame)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
