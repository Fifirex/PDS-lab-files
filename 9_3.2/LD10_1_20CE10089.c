#include<stdio.h>

int findSum(int n)
{
  if(n==1)
    return 1;
  else
    return n+findSum(n-1);
}

int main()
{
  int n,sum;
  printf("\n Enter the values of n : ");
  scanf("%d",&n);
  sum=findSum(n);
}
