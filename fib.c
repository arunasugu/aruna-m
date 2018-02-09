#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,f=-1,g=1,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
a=f+g;
printf("%d\t",a);
f=g;
g=a;
}
getch();
}
