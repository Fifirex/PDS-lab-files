//RollNo.: 20CE10089
//Name: Yash Saraswat

#include<stdio.h>

int main()
{
  int n,i,a,b,t;
  a=0;
  b=1;
  printf("\n Enter the value of n : ");
  scanf("%d",&n);
  if(n<0)                   //corner cases check for negative
    printf("\n n cannot be negative.\n\n");
  else if(n==0)             //corner cases check for zero
    printf("\n n cannot be zero.\n\n");
  else
  {
    for(i=1;i<=n;i++)
    {
      if(i==1)
        printf(" 1, ");     //initialising the series
      else
      {
        if(i!=n)           //to check for the last digit as there is no need of ',' in the last place
          if(i%2!=0)       //to give the series alternating negative signs
            printf("%d, ",(a+b));
          else
            printf("%d, ",-1*(a+b));
        else
          if(i%2!=0)
            printf("%d\n\n",(a+b));
          else
            printf("%d\n\n",-1*(a+b));
        t=b;
        b+=a;
        a=t;
      }
    }
  }
  return 0;
}
