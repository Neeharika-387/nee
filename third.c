#include<stdio.h>
#include<conio.h>
void main()
{
char n;
scanf("%c",&n);
if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
printf("VOWEL");
else if(n!='a'||n!='e'||n!='i'||n!='o'||n!='u')
printf("CONSTANT");
else
printf("Invalid");
getch();
return 0;
}

