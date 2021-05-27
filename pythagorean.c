#include<stdio.h>
void main()
{
int a,b,c,result,sum;
printf("side1  ");
scanf("%d",&a);
printf("side2  ");
scanf("%d",&b);
printf("side3  ");
scanf("%d",&c);
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