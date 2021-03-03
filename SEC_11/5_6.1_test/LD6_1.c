#include<stdio.h>

int sumof(int n)                        //function that returns the sum of digits of the integer passed
{
  int i=0;
  while(n>0)                            //algorithm to find the sum of digits of a given integer
  {
    i+=n%10;
    n/=10;
  }
  return i;
}

int main()
{
  int i,j;
  printf("\n All the pairs are : ");
  for(i=13;i<=22;i++)                       //primary loop that traverses all the elements
    for(j=i+1;j<=23;j++)                    //secondary loop to traverse the remaining pair
      if(sumof(i)+sumof(j)==sumof(i+j))     //condition for  "sum  of  digit  preserving  pair"
        printf("\n %d and %d",i,j);         //output of the pairs
  printf("\n\n");                           //formatting
  return 0;
}
