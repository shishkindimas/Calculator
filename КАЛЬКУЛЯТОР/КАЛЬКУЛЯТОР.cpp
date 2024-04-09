#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "rus");
    char operation;
    float num1, num2;
    std::string flag = "y";
    std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
    std::cout << "Здравствуйте! Добро пожаловать в мою программу, которую я решил назвать Калькулятором,\nтак как данная программа будет совершать действия калькулирования над всевозможными числами" << std::endl;
    std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;
    do {
        std::cout << "Введите операцию (+, -, *, /): ";
        std::cin >> operation;

        std::cout << "Введите два числа: ";
        std::cin >> num1 >> num2;

        switch (operation) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                std::cout << "Деление на ноль невозможно" << std::endl;
            break;
        default:
            std::cout << "Ошибка! Неправильная операция" << std::endl; 
        }
        std::cout << std::endl << "---------------------------------------------------------" << std::endl;
        std::cout << "Продолжить? - y" << std::endl;
        std::cout << "---------------------------------------------------------" << std::endl;
        std::cin >> flag;
    } while (flag == "y" or flag == "Y");
    return 0;
}
