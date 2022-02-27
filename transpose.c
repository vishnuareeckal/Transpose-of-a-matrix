#include <stdio.h>
void main ()
{
  int a[10][10],b[10][10],i,j,row,col;
  int d=0;
  printf("DETERMINANT AND TRANSPOSE OF A 2x2 MATRIX\n\n");
  printf ("Enter the no. of row and column of matrix\n");
  scanf("%d%d",&row,&col);
  printf("Enter the elements of matrix\n");
  
  //reading 2x2 matrix
  for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    scanf("%d",&a[i][j]);
    
  //printing first matrix
  printf("Entered matrix is:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("\t%d",a[i][j]);
    }
    printf("\n");
  }
  
  //transpose
  for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    {
      b[i][j]=a[j][i];
    }
    
  //printing transpose
   printf("Transpose matrix is:\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      printf("\t%d",b[i][j]);
    }
    printf("\n");
  }
   printf("Thank you");
  getchar();
}
