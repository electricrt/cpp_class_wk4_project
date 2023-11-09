/**
 * @file main.cpp
 * A simple C++ program that manipulates an image.
 *
 * @author University of Illinois CS 225 Course Staff
 * @author Updated by University of Illinois CS 400 Course Staff
**/

#include "ImageTransform.h"
#include "uiuc/PNG.h"

int main() {
  uiuc::PNG png, png2, result;
  // Loads in the image alma.png
  // Calls each image modification function
  // Saves the modified images named as out-modification.png, where modification shows the function being tested (e.g. out-grayscale.png)

  // Loads in the image alma.png
  png.readFromFile("alma.png");

  // Add call to greyscale
  result = grayscale(png);
  result.writeToFile("out-grayscale.png");

  // Add call to spotlight
  result = createSpotlight(png, 450, 150);
  result.writeToFile("out-spotlight.png");

  // Add call to illinify
  result = illinify(png);
  result.writeToFile("out-illinify.png");


  // Add call to watermark
  png2.readFromFile("overlay.png");
  result = watermark(png, png2);
  result.writeToFile("out-watermark.png");
  
  return 0;
}
