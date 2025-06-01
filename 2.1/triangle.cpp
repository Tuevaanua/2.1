// triangle.cpp
#include "triangle.h"
#include <cmath>
#include <sstream>
#include <iomanip>

// ����������� ������ Triangle
Triangle::Triangle(double l1, double l2) : leg1(l1), leg2(l2) {
    // �������� �� ������������� �������� �������
    if (l1 <= 0 || l2 <= 0) {
        throw std::invalid_argument("������ ������ ���� �������������� �������");
    }
}

// ������� ������������ ������ � ����������� �� �������
std::string Triangle::getInfo() const {
    std::ostringstream oss;
    oss << "������������� ����������� � ��������: "
        << std::fixed << std::setprecision(2)
        << "a = " << leg1 << ", b = " << leg2;
    return oss.str();
}

// ������� ���������� ���������� �� ������� ��������
double Triangle::calculateHypotenuse() const {
    return sqrt(leg1 * leg1 + leg2 * leg2);
}