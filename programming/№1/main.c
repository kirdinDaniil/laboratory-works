#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    char str[21];
    float flt;
    printf("Введите строку размером максимум 20 символов: ");
    scanf("%s",&str);
    printf("Введите вещественное число: ");
    scanf("%f",&flt);
    printf("Строка: \"%s\";\nВещественное число: %f;",str,flt);
}
