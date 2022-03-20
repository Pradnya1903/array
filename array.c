#include<stdio.h>
void main()
{
int arr1[3][3],i,j;
printf("\n\n read array of size 3x3 and print the matrix : \n");
printf("enter elements in the matrix : \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("element - [%d],[%d] :",i,j);
scanf("%d",&arr1[i][j]);
}
}
printf("\n the matrix is : \n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",arr1[i][j]);
}
printf("\n\n");
}
