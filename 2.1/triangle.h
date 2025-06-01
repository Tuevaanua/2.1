// triangle.h
#pragma once
#include <iostream>

class Triangle {
private:
    double leg1;  // ������ �����
    double leg2;  // ������ �����

public:
    // ����������� ��� ������������� �������
    Triangle(double l1, double l2);

    // ������� ������������ ������ � ����������� �� �������
    std::string getInfo() const;

    // ������� ��������� �������� ����� - ���������� ����������
    double calculateHypotenuse() const;
};