#include "Quadrangle.hpp"
#include "Exception.hpp"

Quadrangle::Quadrangle(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(side_counts)
{
    try
    {
        if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное");
        if (A + B + C + D != 360) throw Exception("Ошибка создания фигуры. Причина: два угла не равны");
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        std::cout << "Произвольный треугольник (стороны " << a << ", " << 4 << ", " << c << "; " << "углы " << A << ", " << 60 << ", " << 90
            << ") создан";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }
}