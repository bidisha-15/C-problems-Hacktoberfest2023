#include<stdio.h>
void main(){
int num,prod=1;
printf("Enter a number to print its table: ");
scanf("%d", &num);
printf("The multiplication table of %d is \n",num);
for(int i=0;i<=12;i++){
    prod=num*i;
    printf("%d x %d\t= %d \n", num,i,prod);
}
printf("\n");
}