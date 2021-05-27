#include<stdio.h>
#include<lcs50.h>
void main()
{
int option,rows,i,j;
printf("Enter the type of pattern  ");
gets("%d",&option);
if(option==1)
{
printf("enter the rows  ");
gets("%d",&rows);
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
printf("enter the rows  ");
gets("%d",&rows);
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
