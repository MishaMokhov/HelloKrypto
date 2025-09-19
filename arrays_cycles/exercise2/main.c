#include <stdio.h>

#define MAX_SIZE ...

int main() {
    int N;
    printf("Введите размер массива (не более %d): ", MAX_SIZE);
    // TODO: считать N, проверить что 1 <= N <= MAX_SIZE

    int arr[MAX_SIZE];
    printf("Введите %d целых чисел (через пробел): ", N);
    // TODO: с помощью цикла for считать элементы массива arr

    int K;
    printf("Сдвиг вправо на: ");
    // TODO: считать K (может быть отрицательным)

    // TODO: нормализовать K по формуле ((K % N) + N) % N

    int result[MAX_SIZE];
    // TODO: циклом перенести элементы из arr в result
    //       так, чтобы массив был сдвинут на K позиций вправо

    printf("Результат: ");
    // TODO: вывести result в одну строку

    return 0;
}