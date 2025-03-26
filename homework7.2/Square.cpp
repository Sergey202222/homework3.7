#include "Square.hpp"
#include "Exception.hpp"

Square::Square(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D) : Rectangle(side_counts, a, b, c, d, A, B, C, D)
{
	if (a != c || a != d || a != b) throw Exception("Ошибка создания фигуры. Cтороны не равны\n");
}