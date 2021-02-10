#include<stdio.h>
#include<stdlib.h>  //to use rand() and srand()
#include<time.h>    //to use time()

int main()
{
  srand(time(0));                                   //seeding
  int arr[6][6],i,j,k,c=0,sum[6];
  printf("\n The matrix is : ");                    //initial output
  for(i=0;i<6;i++)
  {
    sum[i]=0;
    printf("\n");
    for(j=0;j<6;j++)
    {
      arr[i][j]=(rand()%(9))+1;                   //random allocation
      printf(" %d",arr[i][j]);                    //initial display
      sum[i]+=arr[i][j];                          //initialising the sum of each row as 0
    }
  }

  printf("\n\n Elements of the principal diagonal are : ");
  for(i=0;i<6;i++)
    printf("%d ",arr[i][i]);                      //task 1 to print the primary diagonal elements

  for(i=1;i<=7;i++)
    for(j=0;j<5;j++)
      for(k=0;k<5;k++)
        if((arr[j][k]==i)&&(arr[j+1][k]==i+1)&&(arr[j][k+1]==i+1)&&(arr[j+1][k+1]==i+2))    //implementing the given condition for task 2
        {
          if(!c)
            printf("\n\n Yes");
          printf("\n Value of i = %d at row = %d, column = %d",i,j,k);
          printf("\n  Submatrix:");
          printf("\n  %d %d\n  %d %d",arr[j][k],arr[j][k+1],arr[j+1][k],arr[j+1][k+1]);
          c++;
        }
  if(!c)
    printf("\n\n No");

  c=0;
  for(i=0;i<5;i++)
    for(j=i+1;j<6;j++)
      if(sum[i]==sum[j])        //task 3 to find the sums
      {
        if(!c)
          printf("\n\n Yes");
        printf("\n Sum of row %d = Sum of row %d = %d",i,j,sum[i]);
        printf("\n  Row %d\n ",i);
        for(k=0;k<6;k++)
          printf(" %d",arr[i][k]);
        printf("\n  Row %d\n ",j);
        for(k=0;k<6;k++)
          printf(" %d",arr[j][k]);
        c++;
      }
  if(!c)
    printf("\n\n No");

  printf("\n\n");           //formatting
  return 0;
}
