// triangle.h
#pragma once
#include <iostream>

class Triangle {
private:
    double leg1;  // Первый катет
    double leg2;  // Второй катет

public:
    // Конструктор для инициализации объекта
    Triangle(double l1, double l2);

    // Функция формирования строки с информацией об объекте
    std::string getInfo() const;

    // Функция обработки значений полей - вычисление гипотенузы
    double calculateHypotenuse() const;
};