#include<stdio.h>

int main()
{
  float t=3.0,u=100.0,a1=-1.0,a2=-5.0;
  float l1,l2,ts,v;

  l1=u*t+0.5*a1*t*t;
  v=u+a1*t;
  l2=(-v*v)/(2*a2);
  ts=t-v/a2;

  printf("\nLength of the runway : %0.2f",(10.0*(l1+l2))/7.0);
  printf("\nTotal stoppage time  : %0.2f\n\n",ts);

  return 0;
}
