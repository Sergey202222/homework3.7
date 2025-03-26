#include "EquilateralTriangle.hpp"
#include "Exception.hpp"

EquilateralTriangle::EquilateralTriangle(int side_counts, int a, int b, int c, int A, int B, int C) : Triangle(side_counts, a, b, c, A, B, C)
{
    if (side_counts != 3) throw Exception("������ �������� ������. �������: ���������� ������ ��������\n");
    if (A != 60 && B != 60 && C != 60) throw Exception("������ �������� ������. �������: ���� �� ����� 60 ��������\n");
    if (a != b && a != c) throw Exception("������ �������� ������. �������: ������� �� �����\n");
}