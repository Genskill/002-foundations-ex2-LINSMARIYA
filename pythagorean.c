#include<stdio.h>
#include<cs50.h>
void main()
{
int a,b,c,result,sum;
a=get_int("side1 ");
b=get_int("side2 ");
c=get_int("side3 ");
if(a>b)
{
if(a>c)
{
sum=(b*b)+(c*c);
result=a*a;
if(result==sum)
printf("Yes");
else
printf("No");
}
else
{
sum=(b*b)+(a*a);
result=c*c;
if(result==sum)
printf("Yes");
else
printf("No");
}
}
else 
{
if(b>c)
{
sum=(c*c)+(a*a);
result=b*b;
if(result==sum)
printf("Yes");
else
printf("No");
}
else{
sum=(b*b)+(a*a);
result=c*c;
if(result==sum)
printf("Yes");
else
printf("No");
}
}
}
