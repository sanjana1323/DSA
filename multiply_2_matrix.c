#include<stdio.h>
#include<stdlib.h>
void read_matrix( float a[100][100],int row,int col);
void display_matrix( float a[100][100],int row,int col);
void multiply_matrix(float a[100][100],float b[100][100],int row1,int
col1,int row2,int col2);
main()
{
float a[100][100];
float b[100][100];
int row1;
int col1;
int row2;
int col2;
int test;
printf("Enter number of rows and columns for matrix1\n");
test = scanf("%d%d",&row1,&col1);
if(test!=2)
{
printf("Enter valid data\n");
exit(0);
}
printf("Enter number of rows and columns for matrix2\n");
test = scanf("%d%d",&row2,&col2);
if(test!=2)
{
printf("Enter valid data\n");
exit(0);
}
if(row1<=0 || col1<=0 || row2<=0 || col2<=0)
{
printf("Order of matrix should be greater than Zero\n");
}
else if(row1>100 || col1>100 || row2>100 || col2>100)
{
 printf("Order of matrix should be less than %d X %d\n",100,100);
}
else if(col1!=row2)
{
 printf("Column of matrix1 should be equal to row of matrix 2\n");
}
else
{
printf("Enter elements of matrix 1\n");
read_matrix(a,row1,col1);
printf("Enter elements of matrix 2\n");
read_matrix(b,row2,col2);
multiply_matrix(a,b,row1,col1,row2,col2);
}
}

void read_matrix( float a[100][100],int row, int col)
{
int i;
int j;
int test;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
test = scanf("%f",&a[i][j]);
if(test!=1)
{
printf("Enter valid data\n");
exit(0);
}
}
}
}

void display_matrix( float a[100][100],int row, int col)
{
int i;
int j;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%f\t",a[i][j]);
}
printf("\n");
}
}

void multiply_matrix(float a[100][100],float b[100][100],int row1,int
col1,int row2,int col2)
{
int i,j,k;
float c[100][100]={0};
for(i=0;i<row1;i++)
{
for(j=0;j<col2;j++)
{
for(k=0;k<row2;k++)
{
c[i][j] = c[i][j] + a[i][k] * b[k][j];
}
}
}
//Display the resultant matrix
display_matrix(a,row1,col1);
printf("\t\t*\n");
display_matrix(b,row2,col2);
printf("\t=\n");
display_matrix(c,row1,col2);
}

