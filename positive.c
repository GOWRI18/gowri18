#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n>0)
{
printf("the entered number is positive");
}
else if(n<0)
{
printf("the entered number is negative");
}
else
{
printf("the entered number is zero");
}
getch();
}
