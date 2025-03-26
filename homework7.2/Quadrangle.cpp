#include "Quadrangle.hpp"
#include "Exception.hpp"

Quadrangle::Quadrangle(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(side_counts)
{
    if (side_counts != 4) throw Exception("Ошибка создания фигуры. Причина: количество сторон неверное\n");
    if (A + B + C + D != 360) throw Exception("Ошибка создания фигуры. Причина: сумма углов не равна 360 градусов\n");
}