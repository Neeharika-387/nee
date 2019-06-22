#include<stdio.h>
#include<conio.h>
void main()
{
 int n,q;
 scanf("%d",&n,&q);
 if((n&&q)<=10,000)
 {
   while(n==q)
   {
    if(n%2!=0)
    {
     printf("%d",n);
     n++;
    }
 }
 getch();
 return 0;
}
