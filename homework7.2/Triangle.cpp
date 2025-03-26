#include "Triangle.hpp"
#include "Exception.hpp"
Triangle::Triangle(int side_counts, int a, int b, int c, int A, int B, int C) : Figure(side_counts)
{
    if (side_counts != 3) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
    if (A + B + C != 180) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 180 градусов\n");
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
}