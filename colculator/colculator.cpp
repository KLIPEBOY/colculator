#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    char operation;
    double num1, num2, result;
    int numExamples = INT_MAX;


    for (int i = 0; i < numExamples; i++) {
        std::cout << "Введите операцию (+, -, *, /): ";
        std::cin >> operation;

        std::cout << "Введите первое число: ";
        std::cin >> num1;

        std::cout << "Введите второе число: ";
        std::cin >> num2;

        switch (operation) {
        case '+':
            result = num1 + num2;
            std::cout << "Результат: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Результат: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Результат: " << result << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Результат: " << result << std::endl;
            }
            else {
                std::cout << "Ошибка: деление на ноль!" << std::endl;
            }
            break;
        default:
            std::cout << "Ошибка: неверная операция!" << std::endl;
            break;
        }
    }

    return 0;
}
