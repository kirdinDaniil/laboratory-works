#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int mas[n];
    for(int i=0;i<n;i++){
        scanf("%d",&mas[i]);
    };
    int mas2[n];
    mas2[0]=mas[n-1];
    for(int i=1;i<n; i++){
        mas2[i]=mas[i-1];
    }
    for(int i=0;i<n; i++){
        printf("%d",mas2[i]);
        printf(" ");
    }
}
