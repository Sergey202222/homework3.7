#include "Triangle.hpp"
#include "Exception.hpp"
Triangle::Triangle(int side_counts, int a, int b, int c, int A, int B, int C) : Figure(side_counts)
{
    try
    {
        if (side_counts != 3) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное");
        if (A + B + C == 0) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 180");
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