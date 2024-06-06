
#pragma once
#include <iostream>
using namespace std;


class Rectangle{
private:
float length;
float width;

public:
 Rectangle() : length(0), width(0) {};
  ~Rectangle() {};


  void setLength( float Length){
length=Length;
  }

void setWidth(float Width){
width=Width;
}

float getLength(){
    return length;
}
float getWidth(){
    return width;
}
float calculateArea(){
    return width*length;
}


};

