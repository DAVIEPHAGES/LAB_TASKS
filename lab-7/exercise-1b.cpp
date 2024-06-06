#include <iostream>
#include "execise-1.h"

int main() {
    // Create an instance of a rectangle using the Rectangle class
    Rectangle rect;

    // Use the accessor methods to assign values for the length and width of the rectangle object
    float length, width;

    // Prompt user for length and width
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Assign values using accessor methods
    rect.setLength(length);
    rect.setWidth(width);

    // Output the area of the rectangle object
    std::cout << "Area of the rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}