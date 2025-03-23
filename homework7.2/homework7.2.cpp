#include "Triangle.hpp"
#include "RightTriangle.hpp"
#include "IsoscelesTriangle.hpp"
#include "EquilateralTriangle.hpp"
#include "Quadrangle.hpp"
#include "Parallelogram.hpp"
#include "Rectangle.hpp"
#include "Rhombus.hpp"
#include "Square.hpp"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    Triangle triangle1(3, 3, 4, 5, 30, 50, 60);
    Triangle triangle2(3, 3, 4, 5, 30, 50, 100);
    /*RightTriangle rightTriangle1(3, 3, 4, 5, 30, 50, 60);
    RightTriangle rightTriangle2(3, 3, 4, 5, 40, 50, 90);
    IsoscelesTriangle isoscelesTriangle1(4, 3, 4, 3, 40, 100, 80);
    IsoscelesTriangle isoscelesTriangle2(3, 3, 4, 3, 40, 100, 40);
    EquilateralTriangle equilateralTriangle1(3, 12, 12, 12, 60, 70, 50);
    EquilateralTriangle equilateralTriangle2(3, 12, 12, 12, 60, 60, 60);
    Quadrangle quadrangle1(4, 12, 13, 14, 15, 60, 60, 60, 60);
    Quadrangle quadrangle2(4, 12, 13, 14, 15, 60, 80, 90, 150);
    Parallelogram parallelogram1(4, 12, 14, 12, 14, 100, 80, 100, 80);
    Parallelogram parallelogram2(4, 12, 14, 12, 14, 100, 90, 100, 80);
    Rectangle rectangle1(4, 5, 12, 5, 12, 90, 90, 90, 90);
    Rectangle rectangle2(4, 5, 12, 5, 12, 100, 90, 90, 80);
    Rhombus rhombus1(4, 6, 6, 6, 6, 60, 120, 60, 120);
    Rhombus rhombus2(4, 6, 6, 6, 5, 60, 120, 60, 120);*/
    return EXIT_SUCCESS;
}