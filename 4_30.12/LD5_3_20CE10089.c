#include<stdio.h>
#include<stdlib.h>

int main()
{
  int arr[30],n,i,j,k,c=0;
  printf("\n Enter the number of values to be stored in the array : ");
  scanf("%d",&n);                                     //input of number of elements
  for(int i=0;i<n;i++)
    arr[i]=rand()%(40-10+1) + 10;                     //randomising within the range given
  printf("\n Array Elements : ");
  for(i=0;i<n;i++)                                    //initial ouput
    printf("%d ",arr[i]);

  printf("\n\n The triplets are : \n");
  for (i=0;i<n-2;i++)                                 //traversing through the array with 3 loops and initialising each loop in order
    for (j=i+1;j<n-1;j++)                             //to avoid repetation in the triplets
      for (k=j+1;k<n;k++)
        if (arr[i]+arr[j]+arr[k]==60)
        {
            c++;
            printf("\n Triplet %d",c);                //output formatting and final output
            printf("\n array[%d]=%d",i,arr[i]);
            printf("\n array[%d]=%d",j,arr[j]);
            printf("\n array[%d]=%d\n",k,arr[k]);
        }
  if(!c)
    printf(" No such triplet found\n\n");             //case handling where no triplet is found
  else
    printf("\n\n");
  return 0;
}
