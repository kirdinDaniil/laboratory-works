#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int mas[n];
    for(int i=0;i<n;i++){
        scanf("%d",&mas[i]);
    };
    int count=0;
    for(int i=1;i<n-1;i++){
        if ((mas[i-1]<mas[i]) && (mas[i+1]<mas[i])){
            count++;
        }
    };
    printf("%d",count);

}
