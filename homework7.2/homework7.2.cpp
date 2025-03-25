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
        if (side_counts != 3) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A + B + C != 180) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 180 градусов\n");
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
        if (side_counts != 3) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A + B + C != 180) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 180 градусов\n");
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
        if (side_counts != 3) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A + B + C != 180) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 180 градусов\n");
        if (C != 90) throw Exception("Ошибка создания фигуры. Причина: угол C не равен 90 градусов\n");
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
        if (side_counts != 3) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A + B + C != 180) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 180 градусов\n");
        if (C != 90) throw Exception("Ошибка создания фигуры. Причина: угол C не равен 90 градусов\n");
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
        if (side_counts != 3) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A + B + C != 180) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 180 градусов\n");
        if (A != C) throw Exception("Ошибка создания фигуры. Причина: угол A не равен углу C\n");
        if (a != c) throw Exception("Ошибка создания фигуры. Причина: сторона a не равна стороне c\n");
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
        if (side_counts != 3) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A + B + C != 180) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 180 градусов\n");
        if (A != C) throw Exception("Ошибка создания фигуры. Причина: угол A не равен углу C\n");
        if (a != c) throw Exception("Ошибка создания фигуры. Причина: сторона a не равна стороне c\n");
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
        if (side_counts != 3) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A != 60 && B != 60 && C != 60) throw Exception("Ошибка создания фигуры. Причина: углы не равны 60 градусов\n");
        if (a != b && a != c) throw Exception("Ошибка создания фигуры. Причина: стороны не равны\n");
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
        if (side_counts != 3) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A == 60 && B == 60 && C == 60) throw Exception("Ошибка создания фигуры. Причина: углы не равны 60 градусов\n");
        if (a == b && a == c) throw Exception("Ошибка создания фигуры. Причина: стороны не равны\n");
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
        if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A == 60 && B == 60 && C == 60) throw Exception("Ошибка создания фигуры. Причина: углы не равны 60 градусов\n");
        if (a == b && a == c) throw Exception("Ошибка создания фигуры. Причина: стороны не равны\n");
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
        if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A + B + C + D != 360) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 360 градусов\n");
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
        if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A + B + C + D != 360) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 360 градусов\n");
        if (a != c || b != d) throw Exception("Ошибка создания фигуры. Соответствующие стороны не равны\n");
        if (A != D || B != C) throw Exception("Ошибка создания фигуры. Соответствующие углы не равны\n");
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
        if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A + B + C + D != 360) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 360 градусов\n");
        if (a != d || b != c) throw Exception("Ошибка создания фигуры. Соответствующие стороны не равны\n");
        if (A != D || B != C) throw Exception("Ошибка создания фигуры. Соответствующие углы не равны\n");
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
        if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A != 90 || B != 90 || C != 90 || D != 90) throw Exception("Ошибка создания фигуры. Углы не равны 90 градусов\n");
        if (a != c || b != d) throw Exception("Ошибка создания фигуры. Соответствующие стороны не равны\n");
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
        if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A != 90 || B != 90 || C != 90 || D != 90) throw Exception("Ошибка создания фигуры. Углы не равны 90 градусов\n");
        if (a != c || b != d) throw Exception("Ошибка создания фигуры. Соответствующие стороны не равны\n");
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
        if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A != C || B != D) throw Exception("Ошибка создания фигуры. Соответствующие углы не равны\n");
        if (a != c || a != d || a != b) throw Exception("Ошибка создания фигуры. Cтороны не равны\n");
        if (A + B + C + D != 360) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 360 градусов\n");
        Rectangle rhombus1(side_counts, a, b, c, d, A, B, C, D);
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
        if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A != C || B != D) throw Exception("Ошибка создания фигуры. Соответствующие углы не равны\n");
        if (a != c || a != d || a != b) throw Exception("Ошибка создания фигуры. Cтороны не равны\n");
        if (A + B + C + D != 360) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 360 градусов\n");
        Rectangle rhombus2(side_counts, a, b, c, d, A, B, C, D);
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
        if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A != 90 || B != 90 || C != 90 || D != 90) throw Exception("Ошибка создания фигуры. Углы не равны 90 градусов\n");
        if (a != c || a != d || a != b) throw Exception("Ошибка создания фигуры. Cтороны не равны\n");
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
        if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
        if (A != 90 && B != 90 && C != 90 && D != 90) throw Exception("Ошибка создания фигуры. Углы не равны 90 градусов\n");
        if (a != c || a != d || a != b) throw Exception("Ошибка создания фигуры. Cтороны не равны\n");
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