#include<stdio.h>
#include<conio.h>
void main()
{
int n;
scanf("%d",&n);
if(n>0)
{
printf("%d,n is a positive number");
}
else if(n<0)
{
printf("%d,n is a negative number");
}
else
{
printf("%d, n is zero");
}
getch();
return 0;
}
