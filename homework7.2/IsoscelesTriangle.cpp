#include "IsoscelesTriangle.hpp"
#include "Exception.hpp"

IsoscelesTriangle::IsoscelesTriangle(int side_counts, int a, int b, int c, int A, int B, int C) : Triangle(side_counts, a, b, c, A, B, C)
{
    try
    {
        if (a!= c) throw Exception("Ошибка создания фигуры. Причина: две стороны не равны");
        if (A != C) throw Exception("Ошибка создания фигуры. Причина: два угла не равны");
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