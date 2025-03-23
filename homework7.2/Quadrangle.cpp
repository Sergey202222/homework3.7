#include "Quadrangle.hpp"
#include "Exception.hpp"

Quadrangle::Quadrangle(int side_counts, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(side_counts)
{
    try
    {
        if (side_counts != 4) throw Exception("������ �������� ������. �������: ���������� ������ ��������");
        if (A + B + C + D != 360) throw Exception("������ �������� ������. �������: ��� ���� �� �����");
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        std::cout << "������������ ����������� (������� " << a << ", " << 4 << ", " << c << "; " << "���� " << A << ", " << 60 << ", " << 90
            << ") ������";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }
}