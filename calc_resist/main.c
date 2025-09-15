#include <stdio.h>

int main() {
    double cur;
    double volt;
    double res;

    printf("Insert voltage (V): ");
    // Здесь пользователь должен ввести свои значения 
    //...

    printf("Insert current (I): ");
    // Здесь пользователь должен ввести свои значения
    //...

    // Напишите проверку деления на 0
    // if ...

    res = volt / cur;
    printf("Resistance: %.2f  Ohms\n", res);

    return 0;
}