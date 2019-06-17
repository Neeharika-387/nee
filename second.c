#include<stdio.h>
#include<conio.h>
void main()
{
int n;
scanf("%d",&n);
  if(n%2==0)
    printf("EVEN");
  else if(n%2==1)
    printf("ODD");
  else
    printf("invalid");
getch();
return 0;
}
