#include "Parallelogram.hpp"
#include "Exception.hpp"

Parallelogram::Parallelogram(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(side_counts, a, b, c, d, A, B, C, D)
{
    if (a != c || b != d) throw Exception("������ �������� ������. ��������������� ������� �� �����\n");
    if (A != C || B != D) throw Exception("������ �������� ������. ��������������� ���� �� �����\n");
}