// Main.cpp
#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;
    
    // Creating an instance of Rectangle using default constructor
    Rectangle rectangle1;
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;
    rectangle1.setLength(length);
    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;
    rectangle1.setWidth(width);
    std::cout << "Area of the rectangle: " << rectangle1.calculateArea() << std::endl;
    
    // Creating another instance of Rectangle using overloaded constructor
    std::cout << "Enter length of the second rectangle: ";
    std::cin >> length;
    std::cout << "Enter width of the second rectangle: ";
    std::cin >> width;
    Rectangle rectangle2(length, width);
    std::cout << "Area of the second rectangle: " << rectangle2.calculateArea() << std::endl;
    
    return 0;
}
