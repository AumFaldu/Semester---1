#include <stdio.h>
void main()
{
   int i,j,n,rows,columns,pos=0,neg=0,zero=0;
   printf("Enter total number of rows : ");
   scanf("%d",&rows);
   printf("Enter total number of columns : ");
   scanf("%d",&columns);
   int arr[rows][columns];
     for(i=0;i<rows;i++)
  {
    for(j=0;j<columns;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<rows;i++)
  {
      for(j=0;j<columns;j++)
      {
          if(arr[i][j] == 0)
          {
              zero = zero + 1;
          }
          if(arr[i][j]>0)
          {
              pos = pos + 1;
          }
          if(arr[i][j]<0)
          {
              neg = neg + 1;
          }
      }
  }
  printf("Positive elements = %d\n",pos);
  printf("Zero elements = %d\n",zero);
  printf("Negative elements = %d\n",neg);
}
