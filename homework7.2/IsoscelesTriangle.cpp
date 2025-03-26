#include "IsoscelesTriangle.hpp"
#include "Exception.hpp"

IsoscelesTriangle::IsoscelesTriangle(int side_counts, int a, int b, int c, int A, int B, int C) : Triangle(side_counts, a, b, c, A, B, C)
{
    if (A != C) throw Exception("Ошибка создания фигуры. Причина: угол A не равен углу C\n");
    if (a != c) throw Exception("Ошибка создания фигуры. Причина: сторона a не равна стороне c\n");
}