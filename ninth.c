#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i,k;
scanf("%d",&n);
scanf("%d",&k);
int a[n];
for(i=0;i<n;i++)
{
  scanf("%d",a[i]);
}
  if(n>=k){
for(i=0;i<k;i++)
{
  sum=sum+a[i];
}
  }
  else{
    return 0;
  }
printf("%d",sum);
getch();
return 0;
}
