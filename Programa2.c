#include<stdio.h>
#include<math.h>
int main(){
    int sum = 0;
    short int num = 0;
    short int i;
    printf("Ingrese el limite de la sumatoria gauss\n");
    scanf("%d",&num);
    for (i = 1; i <= num; i++){
        sum += i;
        printf("%d ",sum);
    }
    return 0;
}