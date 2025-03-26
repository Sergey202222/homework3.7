#include "Quadrangle.hpp"
#include "Exception.hpp"

Quadrangle::Quadrangle(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(side_counts)
{
    if (side_counts != 4) throw Exception("������ �������� ������. �������: ���������� ������ ��������\n");
    if (A + B + C + D != 360) throw Exception("������ �������� ������. �������: ����� ����� �� ����� 360 ��������\n");
}