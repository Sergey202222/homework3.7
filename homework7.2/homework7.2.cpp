#include "Triangle.hpp"
#include "RightTriangle.hpp"
#include "IsoscelesTriangle.hpp"
#include "EquilateralTriangle.hpp"
#include "Quadrangle.hpp"
#include "Parallelogram.hpp"
#include "Rectangle.hpp"
#include "Rhombus.hpp"
#include "Square.hpp"
#include "Exception.hpp"
#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int side_counts{ 3 }, a{ 3 }, b{ 4 }, c{ 5 }, d{ 6 }, A{ 30 }, B{ 50 }, C{ 100 }, D{ 110 };
    try
    {
        Triangle triangle1(side_counts, a, b, c, A, B, C);
        std::cout << "Произвольный треугольник (стороны " << a << ", " << b << ", " << c << "; " << "углы " << A << ", " << B << ", " << C
            << ") создан\n"; 
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        C = 80;
        Triangle triangle2(side_counts, a, b, c, A, B, C);
        std::cout << "Произвольный треугольник (стороны " << a << ", " << b << ", " << c << "; " << "углы " << A << ", " << B << ", " << C
            << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        A = 40;
        C = 90;
        RightTriangle rightTriangle1(side_counts, a, b, c, A, B, C);
        std::cout << "Прямоугольный треугольник (стороны " << a << ", " << b << ", " << c << "; " << "углы " << A << ", " << B << ", " << C
            << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        A = 40;
        C = 100;
        RightTriangle rightTriangle2(side_counts, a, b, c, A, B, C);
        std::cout << "Прямоугольный треугольник (стороны " << a << ", " << b << ", " << c << "; " << "углы " << A << ", " << B << ", " << C
            << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        c = 3;
        A = 40;
        B = 100;
        C = 40;       
        IsoscelesTriangle isoscelesTriangle1(side_counts, a, b, c, A, B, C);
        std::cout << "Равнобедренный треугольник (стороны " << a << ", " << b << ", " << c << "; " << "углы " << A << ", " << B << ", " << C
            << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        A = 40;
        B = 100;
        C = 80;
        IsoscelesTriangle isoscelesTriangle2(side_counts, a, b, c, A, B, C);
        std::cout << "Равнобедренный треугольник (стороны " << a << ", " << b << ", " << c << "; " << "углы " << A << ", " << B << ", " << C
            << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        a = 3;
        b = 3;
        c = 3;
        A = 60;
        B = 60;
        C = 60;
        EquilateralTriangle equilateralTriangle1(side_counts, a, b, c, A, B, C);
        std::cout << "Равносторонний треугольник (стороны " << a << ", " << b << ", " << c << "; " << "углы " << A << ", " << B << ", " << C
            << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        a = 3;
        b = 3;
        c = 3;
        A = 50;
        B = 50;
        C = 50;
        EquilateralTriangle equilateralTriangle2(side_counts, a, b, c, A, B, C);
        std::cout << "Равносторонний треугольник (стороны " << a << ", " << b << ", " << c << "; " << "углы " << A << ", " << B << ", " << C
            << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        side_counts = 4;
        a = 10;
        b = 11;
        c = 12;
        A = 80;
        B = 100;
        C = 70;
        Quadrangle quadrangle1(side_counts, a, b, c, d, A, B, C, D);
        std::cout << "Четырёхугольник (стороны " << a << ", " << b << ", " << c << ", " << d << " углы " << A << ", " << B << ", " << C
            << ", " << D << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        a = 10;
        b = 11;
        c = 12;
        A = 80;
        B = 100;
        C = 80;
        Quadrangle quadrangle2(side_counts, a, b, c, d, A, B, C, D);
        std::cout << "Четырёхугольник (стороны " << a << ", " << b << ", " << c << ", " << d << " углы " << A << ", " << B << ", " << C
            << ", " << D << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }
    
    try
    {
        c = 10;
        d = 11;
        A = 110;
        B = 70;
        C = 70;
        Parallelogram parallelogram1(side_counts, a, b, c, d, A, B, C, D);
        std::cout << "Параллелограм (стороны " << a << ", " << b << ", " << c << ", " << d << " углы " << A << ", " << B << ", " << C
            << ", " << D << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        c = 10;
        d = 11;
        A = 110;
        B = 80;
        Parallelogram parallelogram2(side_counts, a, b, c, d, A, B, C, D);
        std::cout << "Параллелограм (стороны " << a << ", " << b << ", " << c << ", " << d << " углы " << A << ", " << B << ", " << C
            << ", " << D << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        c = 10;
        d = 11;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
        Rectangle rectangle1(side_counts, a, b, c, d, A, B, C, D);
        std::cout << "Прямоугольник (стороны " << a << ", " << b << ", " << c << ", " << d << " углы " << A << ", " << B << ", " << C
            << ", " << D << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        c = 10;
        d = 12;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
        Rectangle rectangle2(side_counts, a, b, c, d, A, B, C, D);
        std::cout << "Прямоугольник (стороны " << a << ", " << b << ", " << c << ", " << d << " углы " << A << ", " << B << ", " << C
            << ", " << D << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        a = 11;
        b = 11;
        c = 11;
        d = 11;
        A = 60;
        B = 120;
        C = 60;
        D = 120;
        Rhombus rhombus1(side_counts, a, b, c, d, A, B, C, D);
        std::cout << "Ромб (стороны " << a << ", " << b << ", " << c << ", " << d << " углы " << A << ", " << B << ", " << C
            << ", " << D << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        c = 10;
        d = 11;
        Rhombus rhombus2(side_counts, a, b, c, d, A, B, C, D);
        std::cout << "Ромб (стороны " << a << ", " << b << ", " << c << ", " << d << " углы " << A << ", " << B << ", " << C
            << ", " << D << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }
    
    try
    {
        a = 10;
        b = 10;
        c = 10;
        d = 10;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
        Square square1(side_counts, a, b, c, d, A, B, C, D);
        std::cout << "Квадрат (стороны " << a << ", " << b << ", " << c << ", " << d << " углы " << A << ", " << B << ", " << C
            << ", " << D << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }

    try
    {
        a = 10;
        b = 10;
        c = 20;
        d = 10;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
        Square square2(side_counts, a, b, c, d, A, B, C, D);
        std::cout << "Квадрат (стороны " << a << ", " << b << ", " << c << ", " << d << " углы " << A << ", " << B << ", " << C
            << ", " << D << ") создан\n";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }
    return EXIT_SUCCESS;
}