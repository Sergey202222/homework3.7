#include "Parallelogram.hpp"
#include "Exception.hpp"

Parallelogram::Parallelogram(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(side_counts, a, b, c, d, A, B, C, D)
{
    try
    {
        if (a !=  c && b != d) throw Exception("Ошибка создания фигуры. Соответствующие стороны не равны");
        if (A != C && B != D) throw Exception("Ошибка создания фигуры. Соответствующие углы не равны");
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