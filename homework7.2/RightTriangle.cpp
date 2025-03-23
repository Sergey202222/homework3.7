#include "RightTriangle.hpp"
#include "Exception.hpp"
RightTriangle::RightTriangle(int side_counts, int a, int b, int c, int A, int B, int C) : Triangle(side_counts, a, b, c, A, B, C)
{
    try 
    {
        if (C != 90) throw Exception("Ошибка создания фигуры. Причина: угол C не равен 90 градусов");
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