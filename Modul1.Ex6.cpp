#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <clocale>

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double x, y, z, b;
    char choice;

    do {
        // Ввід значень
        printf("Введiть x: ");
        scanf("%lf", &x);
        printf("Введiть y: ");
        scanf("%lf", &y);
        printf("Введiть z: ");
        scanf("%lf", &z);

        // Обчислення b за формулою:
        // b = (1 + cos(y - 2)) / (x^4 / 2 + sin^2(z))
        double numerator = 1 + cos(y - 2);
        double denominator = pow(x, 4) / 2.0 + pow(sin(z), 2);
        b = numerator / denominator;

        // Виведення результату
        printf("Результат: b = %.6lf\n", b);

        // Запит на повтор
        printf("Бажаєте виконати ще раз? (т/н): ");
        // Пропускаємо символ нового рядка перед зчитуванням
        while ((choice = getchar()) == '\n'); 
    } while (choice == 'y' || choice == 'y');

    printf("Програма завершена.\n");
    return 0;
}
