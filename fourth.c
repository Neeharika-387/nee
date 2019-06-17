#include<stdio.h>
#include<conio.h>
void main()
{
char n;
scanf("%c",&n);
if((n==65||n==90)&&(n==97||n==122))
printf("ALPHABET");
else
printf("Invalid");
getch();
return 0;
}
