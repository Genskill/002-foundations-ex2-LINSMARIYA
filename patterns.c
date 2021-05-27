#include<stdio.h>
#include<cs50.h>
void main()
{
int option,rows,i,j;
option=get_int("");
if(option==1)
{
rows=get_int("");
printf("\n");
for(i=rows;i>0;i--)
{
for(j=0;j<i;j++)
{
printf("#");
}
printf("\n");
}
}
else if(option==2)
{
rows=get_int("");
  printf("\n");
for(i=1;i<=rows;i++)
{
for(j=0;j<i;j++)
{
printf("#");
}
printf("\n");
}
}
else
printf("Invalid entry");
}
