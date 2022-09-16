#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int mas[n];
    for(int i=0;i<n;i++){
        scanf("%d",&mas[i]);
    };
    int search,close,dif,dif_i;
    scanf("%d",&search);
    dif= abs(mas[0]-search);
    close=mas[0];
    for(int i=1;i<n;i++){
        dif_i=abs(mas[i]-search);
        if(dif>dif_i){
            close=mas[i];
            dif=dif_i;
        };
    };
    printf("%d",close);
}
