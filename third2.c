#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,flag=0;
  scanf("%d",&n);
    for(i=0;i<=n/2;i++)
    {
      if(n%i==0)
      {
        flag=1;
        count++;
       }
     }
     if(n==1)
     {
       printf(" 1 is neither prime nor composite");
     }
     else if(flag==0)
     {
       printf("yes");
     }
     else
     {
       printf("no");
     }
    getch();
    return 0;
   }
