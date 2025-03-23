#include "Triangle.hpp"
#include "Exception.hpp"
Triangle::Triangle(int side_counts, int a, int b, int c, int A, int B, int C) : Figure(side_counts)
{
    try
    {
        if (side_counts != 3) throw Exception("������ �������� ������. �������: ���������� ������ ��������");
        if (A + B + C == 0) throw Exception("������ �������� ������. �������: ����� ����� �� ����� 180");
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