// main_basic.cpp
#include <iostream>
#include <iomanip>
#include "triangle.h"

int main() {
    setlocale(LC_ALL, "Russian");
    try {
        double a, b;

        // Ввод данных от пользователя
        std::cout << "Введите длину первого катета: ";
        std::cin >> a;

        std::cout << "Введите длину второго катета: ";
        std::cin >> b;

        // Создание объекта треугольника
        Triangle triangle(a, b);

        // Вывод информации о треугольнике
        std::cout << triangle.getInfo() << std::endl;

        // Вычисление и вывод гипотенузы
        std::cout << "Длина гипотенузы: "
            << std::fixed << std::setprecision(2)
            << triangle.calculateHypotenuse() << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}