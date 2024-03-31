#include <iostream>
#include <math.h>
#include <Windows.h>
#include <string>

double Power1(double A, double B) {
    if (A < 1) {
        return 0;
    }
    else {
        return exp(B * log10(A));
    }
}

float Guard(const std::string str) {
    float N;
    while (true) {
        std::cout << str;
        if (std::cin >> N) {
            return N;
        }
        else {
            std::cin.clear();
            std::cin.ignore(2000, '\n');
            std::cout << "Введено не верное значение\n";
        }
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float A, B, C, P;
    A = Guard("Введите значние A\n");
    B = Guard("Введите значние B\n");
    C = Guard("Введите значние C\n");
    P = Guard("Введите значние P\n");

    std::cout << Power1(A, P) << "\n";
    std::cout << Power1(B, P) << "\n";
    std::cout << Power1(C, P) << "\n";
    
    return 0
}
