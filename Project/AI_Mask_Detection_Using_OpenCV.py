import cv2
import matplotlib.pyplot as plt
# It Reads the image data and convert it into a list which contains the rgb values
img = cv2.imread('D:\CODING DEVELOPMENT SKILLS\Project\images.jpeg')
# print(img.shape)  # The shape function lets us know the shape of the image by specifying the row column and the rgb containing in it
# print(img[0])  # Gives us the data of the first row
# print()
# print(img)  # The pixel in the form of 2-D list matrix
plt.imshow(img)
