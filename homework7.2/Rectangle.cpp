#include "Rectangle.hpp"
#include "Exception.hpp"

Rectangle::Rectangle(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(side_counts, a, b, c, d, A, B, C, D)
{
    if (A != 90 || B != 90 || C != 90 || D != 90) throw Exception("������ �������� ������. ���� �� ����� 90 ��������\n");
    if (a != c || b != d) throw Exception("������ �������� ������. ��������������� ������� �� �����\n");
}