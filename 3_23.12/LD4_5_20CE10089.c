//RollNo.: 20CE10089
//Name: Yash Saraswat

#include<stdio.h>

int main()
{
  int n,i;
  float x,sum;
  printf("\n Enter the value of x in radians : ");
  scanf("%f",&x);
  printf(" Enter the value of n : ");
  scanf("%d",&n);
  if(n<0)
    printf("\n n cannot be negative.\n\n");       //corner case check
  else if(n==0)
    printf("\n n cannot be zero.\n\n");
  else
  {
    for(i=0;i<n;i++)
      if(i!=0)
        sum=sum + sum*(-1*x*x)/((2*i+1)*(2*i));
      else
        sum=x;
    printf("\n The value of sine is : %0.3f\n\n",sum);
  }
  return 0;
}
