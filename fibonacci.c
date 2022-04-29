#include<stdio.h>
int main()
{
int num1=0,num2=1,num3,i,a;
printf("enter the number for fibonaci series\n");
scanf("%d",&a);
printf("the fibonaci series is given by:\n");
printf("%d%d",num1,num2);
for(i=2;i<a;i++)
{
    num3=num1+num2;
    printf("%d",num3);
    num1=num2;
    num2=num3;
}
return 0;
}