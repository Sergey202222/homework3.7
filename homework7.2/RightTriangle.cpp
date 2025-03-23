#include "RightTriangle.hpp"
#include "Exception.hpp"
RightTriangle::RightTriangle(int side_counts, int a, int b, int c, int A, int B, int C) : Triangle(side_counts, a, b, c, A, B, C)
{
    try 
    {
        if (C != 90) throw Exception("������ �������� ������. �������: ���� C �� ����� 90 ��������");
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