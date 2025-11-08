// Lab03_3.cpp
// <Красуляк Дмитро>
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 20
#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, R, y;
    cout << "Введіть R: ";
    cin >> R;
    cout << "Введіть x: ";
    cin >> x;

    // розгалуження в повній формі
    if (x <= -2)
        y = -R * x - R;
    else 
        if (-2 < x && x <= 0)
        y = sqrt(R * R - x * x);
    else 
         if (0 < x && x <= 2 * R)
        y = sqrt(R * R - pow(x - R, 2));
    else 
         if (2 * R < x && x <= 6)
        y = (-R / (6 - 2 * R)) * (x - 2 * R);
    else
        y = NAN; // поза межами визначення

    cout << "y = " << y << endl;
    return 0;
}
