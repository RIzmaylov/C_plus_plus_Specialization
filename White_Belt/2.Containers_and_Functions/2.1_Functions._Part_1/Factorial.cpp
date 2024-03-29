#include <iostream>

/*
Напишите функцию, которая:
- называется Factorial
- возвращает int
- принимает int и возвращает факториал своего аргумента. 
    Гарантируется, что аргумент функции по модулю не превышает 10. 
    Для отрицательных аргументов функция должна возвращать 1.

Аргумент функции    Результат

1                   1

1                   4

-2                  24

*/

/**
 * Функция принимает число и возвращает его факториал
*/
int Factorial(int num) {
    int res = 1;
    for(int i = 2; i <= num; i++) res *= i;
    return res;
}

int main() {
    std::cout << Factorial(5);
    return 0;
}