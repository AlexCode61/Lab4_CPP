#include <iostream>
#include <Windows.h>
#include <math.h>

float Guard(const std::string str) {
    float N;
    while (true) {
        std::cout << str;
        if ((std::cin >> N) && (N > 0)) {
            return N;
        }
        else {
            std::cin.clear();
            std::cin.ignore(2000, '\n');
            std::cout << "Введен неверный параметр\n";
        }
    }
}

double RootK(double X, double K, int N=6)  {
    if (N == 0) {
        return 1;
    }
    return RootK(X, K, N - 1) - (RootK(X, K, N - 1) - X / pow(RootK(X, K, N - 1), (K - 1))) / K;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float X, K;
    X = Guard("Введите параметр X\n");
    K = Guard("Введите параметр K\n");
    std::cout << RootK(X, K);
    return 0
}
