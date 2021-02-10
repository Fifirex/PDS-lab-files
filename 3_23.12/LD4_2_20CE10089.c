#include<stdio.h>

int main()
{
  int n,i;
  printf("\n Enter the number : ");   //input
  scanf("%d",&n);
  for(i=1;i<=10;i++)
    printf("\n %dX%d=%d",n,i,n*i);   //running the loop from 1 to 10
  printf("\n\n");
  return 0;
}
