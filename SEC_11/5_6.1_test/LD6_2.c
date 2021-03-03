#include<stdio.h>
#include<stdlib.h>      //to use rand() and srand()
#include<time.h>        //to use time()

int main()
{
  srand(time(0));                           //generates seed everytime the program is run, to avoid the same set every run
  int arr[30],i,j,c=0,t;                    //c is odd position counter; t is a temporary variable for shift
  for(i=0;i<30;i++)
    arr[i]=(rand()%(100-10+1)) + 10;        //to calculate random numbers in the range (1-100)
  printf("\n Initial aray elements : ");
  for(i=0;i<30;i++)                         //initial output
    printf("%d ",arr[i]);
  for(i=0;i<30;i++)
    if(arr[i]%2!=0)                         //basically the loop runs, detecting odd numbers and
    {                                       //pushes it to the position of the last known odd digit
      t=arr[i];                             //thus shifting the entire array and maintaining
      if(i!=0)                              //the order of the even numbers
      {
        for(j=i-1;j>=c;j--)                 //loop for shifting the elements
          arr[j+1]=arr[j];
        arr[c]=t;
      }
      c++;
    }
  printf("\n Final array elements  : ");    //final output
  for(i=0;i<30;i++)
    printf("%d ",arr[i]);
  printf("\n\n");                           //output formatting
  return 0;
}
