#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Rus");
    int argument1,argument2;
    printf("Введите первый и второй аргумент через пробел: ");
    scanf("%d",&argument1);
    scanf("%d",&argument2);
    printf("Значение функции z1=(1-2*sin(α1))/(1+sin(2*α1)) с аргументом %d равно: %f\n",argument1,(1-2*pow(sin(argument1),2))/(1+sin(2*argument1)));
    printf("Значение функции z2=((1-tg(α2))/(1+tg(α2)) с аргументом %d равно: %f",argument2,(1- tan(argument2))/(1+tan(argument2)));
}