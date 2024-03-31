#include <iostream>
#include <Windows.h>
#include <math.h>

float RectP(float x1, float y1, float x2, float y2, float& p) {
    p = (abs(x2 - x1) + abs(y2 - y1)) * 2;
    return p;
}

float RectS(float x1, float y1, float x2, float y2, float& s) {
    s = abs(x2 - x1) * abs(y2 - y1);
    return s;
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
    
    std::cout << "Введите координаты прямоугольника";
    float x1, x2, y1, y2, P, S;
    for (int i = 0; i < 3; ++i){

        x1 = Guard("Введите значние для x1\n");
        x2 = Guard("Введите значние для x2\n");
        y1 = Guard("Введите значние для y1\n");
        y2 = Guard("Введите значние для y2\n");
        
        RectP(x1, y1, x2, y2, P);
        RectS(x1, y1, x2, y2, S);

        std::cout << "Периметр прямоугольника " << P << '\n';
        std::cout << "Площадь прямоугольника " <<S << '\n';
        std::cout << "Введите координаты нового прямоугольника";
    }
    return 0
}
