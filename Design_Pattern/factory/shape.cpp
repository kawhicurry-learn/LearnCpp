#include <iostream>

class Shape {
  void draw();
};

class Rectangle : public Shape {
  void draw() { std::cout << "Rectangle" << std::endl; }
};

class Square : public Shape {
  void draw() { std::cout << "Square" << std::endl; }
};

class Circle : public Shape {
  void draw() { std::cout << "Circle" << std::endl; }
};