#include "Rhombus.hpp"
#include "Exception.hpp"

Rhombus::Rhombus(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(side_counts, a, b, c, d, A, B, C, D)
{
    try
    {
        if (a != b) throw Exception("Ошибка создания фигуры. Стороны не равны");
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