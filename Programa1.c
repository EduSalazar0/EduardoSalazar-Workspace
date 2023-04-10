#include<stdio.h>
int main(){
    int a,b,c;
    printf("Ingrese el primer numero\n");
    scanf("%d",&a);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&b);
    printf("Ingrese el tercer numero\n");
    scanf("%d",&c);
    a = a+1;
    b = 2*b;
    c = c*c;
    printf("\nEl resultado del primer numero es: %d",a);
    printf("\nEl resultado del segundo numero es: %d",b);
    printf("\nEl resultado del tercer numero es: %d",c);
    return 0;
}