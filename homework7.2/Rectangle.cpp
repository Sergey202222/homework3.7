#include "Rectangle.hpp"
#include "Exception.hpp"

Rectangle::Rectangle(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(side_counts, a, b, c, d, A, B, C, D)
{
    try
    {
        if (A != 90 && B != 90 && C != 90 && D != 90) throw Exception("Ошибка создания фигуры. Соответствующие углы не равны");
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