#include<stdio.h>
#include<conio.h>
void main()
{
  int n,rev=0,r,i;
  scanf("%d",&n);
  i=n;
  while(n!=0)
  {
     r=n%10;
     rev=rev*10+r;
     n=n/10;
  }
  if(rev==i)
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
