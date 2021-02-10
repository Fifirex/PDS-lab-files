//RollNo.: 20CE10089
//Name: Yash Saraswat

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int arr[30],n,i;
  printf("\n Enter the number of values to be stored in the array : ");
  scanf("%d",&n);                               //input of number of elements
  for(int i=0;i<n;i++)
    arr[i]=rand()%(30-10+1) + 10;               //randomising within the range given
  printf("\n Array Elements         : ");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);                       //initial ouput

  for(i=0;i<n/2;i++)
  {
    arr[i]=arr[i]+arr[n-i-1];                   //interchanging without using another array
    arr[n-i-1]=arr[i]-arr[n-i-1];
    arr[i]=arr[i]-arr[n-i-1];
  }
  printf("\n Altered Array Elements : ");      //final output
  for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
  printf("\n\n");

  return 0;
}
