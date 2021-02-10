#include<stdio.h>
#include<stdlib.h>  //to use rand() and srand()
#include<time.h>    //to use time()
#include<math.h>    //to use pow()

int n,c1=0,c2=0,c3=0,c4=0;
/*
n - size of the array to be used accross functions
c1 - number of additions in nonRecb2d()
c2 - number of multiplications in nonRecb2d()
c3 - number of additions in recb2d()
c4 - number of multiplications in recb2d()
*/

int nonRecb2d(int arr[],int s)
{
  int i,n=0;
  for(i=0;i<s;i++,c1++)         //i+=1 is counted as an addition
  {
    n+=arr[i]*pow(2,(s-1-i));   //there is one addition and one multiplication here
    c1++;
    c2++;
  }
  return n;                     //returning the final decimal value
}

int recb2d(int arr[], int s)
{
  if(s==1)                      //terminal value
  {
    c4++;                       //there is only one multiplication here
    return arr[0]*pow(2,n-1);   //final return
  }
  else
  {
    c3++;                       //there is one multiplication and one addition here
    c4++;
    return (pow(2,n-s)*arr[s-1]+recb2d(arr,s-1));   //recursion : decimal(arr, s) = decimalequivalent(arr[s-1]) + decimal(arr, s-1)
  }
}

int main()
{
  srand(time(0));             //seeding
  int binNum[16],i,s=16;      //s = bit size of the binary number, set to 16
  n=s;
  printf("\n The Binary number is : ");
  for(i=0;i<s;i++)
  {
    binNum[i]=rand()%2;       //initial output and allocation using rand()
    printf("%d",binNum[i]);
  }
  printf("\n\n Non recursive case (nonRecb2d())");
  printf("\n Decimal equivalent using is                : %d",nonRecb2d(binNum,s));   //final outputs from the functions
  printf("\n The number of additions performed is       : %d",c1);                      //and the global counters
  printf("\n The number of multiplications performed is : %d\n",c2);
  printf("\n Recursive case (recb2d())");
  printf("\n Decimal equivalent using is                : %d",recb2d(binNum,s));
  printf("\n The number of additions performed is       : %d",c3);
  printf("\n The number of multiplications performed is : %d\n\n",c4);
  return 0;
}
