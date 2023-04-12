#include<stdio.h>
int main(){
    int num,i;
    int g,t=1;
    printf("Ingrese el numero del cual quiere calcular su tabla de multiplicar\n");
    scanf("%d",&num);
    for (i = 1; i<= 10; i++){
        g = (num*i);
        
        printf("\n%d x %d = %d ",num , i ,g);
    }
    return 0;
}