#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("%d\n",a);
printf("%d\n",b);
getch();
}
