#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    struct fridge{
        int milk;
        int meat;
        int cheese;
        int big_tasty;
    };
    struct fridge fridges[2];
    for (int i=0; i<2;i++) {
        printf("Введите сколько литров молока содержит холодильник №%d: ",i+1);
        scanf("%d",&fridges [i].milk);
        printf("Введите сколько кг мяса содержит холодильник №%d: ",i+1);
        scanf("%d",&fridges [i].meat);
        printf("Введите сколько кусочков сыра содержит холодильник №%d: ",i+1);
        scanf("%d",&fridges [i].cheese);
        printf("Введите сколько биг тейсти содержит холодильник №%d: ",i+1);
        scanf("%d",&fridges [i].big_tasty);
    };
    bool check=true;
    while (check) {
        int action;
        printf("Варианты действий с холодильниками:\n   1)Редактировать содержимое холодильников\n   2)Показать содержимое холодильников\n   3)Завершить работу программы\n");
        printf("Выберете необходимый вариант: ");
        scanf("%d",&action);
        if (action==1) {
            int select;
            int num;
            int operation;
            int work;
            printf("Выберете номер необходимого холодильника:");
            scanf("%d",&num);
            printf("Количество какого продукта вы хотите изменить:\n    1)Молоко\n    2)Мясо\n    3)Сыр\n    4)Биг тейсти\n");
            printf("Выберете номер необходимого продукта: ");
            scanf("%d",&select);
            printf("Что сделать с количеством продукта (1)Увеличить или (2)Сократить: ");
            scanf("%d",&operation);
            printf("Введите на какое число изменить количество продукта: ");
            scanf("%d",&work);
            if(select==1){
                if(operation==1){
                  fridges[num-1].milk+=work;
                };
                if(operation==2){
                    if(fridges[num-1].milk>=work){
                        fridges[num-1].milk-=work;
                    } else {
                        printf("    !Количество продукта не может быть отрицательным!\n");
                    };
                };
            };
            if(select==2){
                if(operation==1){
                    fridges[num-1].meat+=work;
                };
                if(operation==2){
                    if(fridges[num-1].meat>=work){
                        fridges[num-1].meat-=work;
                    } else {
                        printf("    !Количество продукта не может быть отрицательным!\n");
                    };
                };
            };
            if(select==3){
                if(operation==1){
                    fridges[num-1].cheese+=work;
                };
                if(operation==2){
                    if(fridges[num-1].cheese>=work){
                        fridges[num-1].cheese-=work;
                    } else {
                        printf("    !Количество продукта не может быть отрицательным!\n");
                    };
                };
            };
            if(select==4){
                if(operation==1){
                    fridges[num-1].big_tasty+=work;
                };
                if(operation==2){
                    if(fridges[num-1].big_tasty>=work){
                        fridges[num-1].big_tasty-=work;
                    } else {
                        printf("    !Количество продукта не может быть отрицательным!\n");
                    };
                };
            };
        };
        if(action==2){
            for (int i=0; i<2;i++){
                printf("---------------------");
                printf("Холодильник №%d",i+1);
                printf(" молока:%d",fridges[i].milk);
                printf("л, мяса:%d",fridges[i].meat);
                printf("кг, сыра:%d",fridges[i].cheese);
                printf("кус., биг тейсти:%d",fridges[i].big_tasty);
                printf("---------------------\n");
            }
        }
        if(action==3){
            for (int i=0; i<2;i++){
                printf("---------------------");
                printf("Холодильник №%d",i+1);
                printf(" молока:%d",fridges[i].milk);
                printf("л, мяса:%d",fridges[i].meat);
                printf("кг, сыра:%d",fridges[i].cheese);
                printf("кус., биг тейсти:%d",fridges[i].big_tasty);
                printf("---------------------\n");
            }
            check=false;
        };

    };

    return 0;
}
