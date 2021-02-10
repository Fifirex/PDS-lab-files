#include<stdio.h>
#include<math.h>

int main()
{
  int a,b;
  float r,asimp,acomp;

  printf("Enter the Principal amount       : ");
  scanf("%d",&a);
  printf("Enter the time period (in years) : ");
  scanf("%d",&b);
  printf("Enter the rate of interset value : ");
  scanf("%f",&r);

  if((a<0)||(b<0)||(r<0))   //invalid values check
     printf("\nOne of the values entered is invalid (negative)\n");
  else
  {
    r*=0.01;
    asimp=a*(1.0+b*r);
    acomp=a*(pow((1.0+r),b));
    printf("\nAmount payable calculated using: \nA)Simple Interest : %f \nB)Compound Interset : %f \n",asimp,acomp);
  }

  return 0;
}
