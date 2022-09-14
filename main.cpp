#include <iostream> // файл с классами, функциями и переменными
 
int main(){ // функция, которая вернет в качестве значения целое число
    int a = 0;
    int b = 0;
    char operation;
    std::cout << "Enter first number: "; // выберите первое число
    std::cin >> a;
    std::cout << "Enter second number: "; // выберите второе число
    std::cin >> b;
    std::cout << "Enter operation: "; // выберите операцию с числами
    std::cin >> operation;
  
    switch (operation){
    case '-':
        std::cout << "a - b = " << a - b <<'\n'; // вычитание 
        break;
    case '+':
        std::cout << "a + b = " << a + b << '\n'; // прибавление
        break;
    case '*':
        std::cout << "a * b = " << a * b << '\n'; // умножение
        break;
    case '/':
        std::cout << "a / b = " << a / b << '\n'; // деление
        break;
    default:
        std::cout << "Error\n";
    }
    return 0;
}
// break - это завершение выполонения ближающего оператора.
