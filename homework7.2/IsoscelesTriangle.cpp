#include "IsoscelesTriangle.hpp"
#include "Exception.hpp"

IsoscelesTriangle::IsoscelesTriangle(int side_counts, int a, int b, int c, int A, int B, int C) : Triangle(side_counts, a, b, c, A, B, C)
{
    try
    {
        if (a!= c) throw Exception("������ �������� ������. �������: ��� ������� �� �����");
        if (A != C) throw Exception("������ �������� ������. �������: ��� ���� �� �����");
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        std::cout << "������������ ����������� (������� " << a << ", " << 4 << ", " << c << "; " << "���� " << A << ", " << 60 << ", " << 90
            << ") ������";
    }
    catch (Exception& exp)
    {
        std::cerr << exp.what();
    }
}