import cv2 as cv

img = cv.imread("resources/dog.jpg")

imgGray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)

while True:
    cv.imshow("Gray Image", imgGray)
    if cv.waitKey(1) & 0xFF == ord("q"):
        break
