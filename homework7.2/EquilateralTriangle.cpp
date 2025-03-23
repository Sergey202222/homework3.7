#include "EquilateralTriangle.hpp"
#include "Exception.hpp"

EquilateralTriangle::EquilateralTriangle(int side_counts, int a, int b, int c, int A, int B, int C) : Triangle(side_counts, a, b, c, A, B, C)
{
    try
    {
        if (a != c && a != b) throw Exception("Ошибка создания фигуры. Причина: стороны не равны");
        if (A != 60 && B != 60 && C != 60) throw Exception("Ошибка создания фигуры. Причина: углы не равны 60 градусов");
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        std::cout << "Произвольный треугольник (стороны " << a << ", " << 4 << ", " << c << "; " << "углы " << A << ", " << 60 << ", " << 90
            << ") создан";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }
}