#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int mas[n];
    for(int i=0;i<n;i++){
        scanf("%d",&mas[i]);
    };
    int min_i;
    int min1=2147483647;
    for(int i=0;i<n;i++){
        if (mas[i]<min1){
            min1=mas[i];
            min_i=i;
        };
    };
    int min2=2147483647;
    for(int i=0;i<n;i++){
        if ((mas[i]<min2) && (min_i!=i)){
            min2=mas[i];
        };
    };
    printf("%d",min1);
    printf(" %d",min2);

}
