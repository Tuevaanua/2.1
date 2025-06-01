// triangle.cpp
#include "triangle.h"
#include <cmath>
#include <sstream>
#include <iomanip>

// Конструктор класса Triangle
Triangle::Triangle(double l1, double l2) : leg1(l1), leg2(l2) {
    // Проверка на положительные значения катетов
    if (l1 <= 0 || l2 <= 0) {
        throw std::invalid_argument("Катеты должны быть положительными числами");
    }
}

// Функция формирования строки с информацией об объекте
std::string Triangle::getInfo() const {
    std::ostringstream oss;
    oss << "Прямоугольный треугольник с катетами: "
        << std::fixed << std::setprecision(2)
        << "a = " << leg1 << ", b = " << leg2;
    return oss.str();
}

// Функция вычисления гипотенузы по теореме Пифагора
double Triangle::calculateHypotenuse() const {
    return sqrt(leg1 * leg1 + leg2 * leg2);
}