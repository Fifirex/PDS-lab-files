#include<stdio.h>

int main()
{
  int a,b,m,c;
  printf(" Enter the value of slope (m)       : ");
  scanf("%d",&m);
  printf(" Enter the value of y-intercept (c) : ");
  scanf("%d",&c);
  printf("\n Enter the value of a : ");
  scanf("%d",&a);
  printf(" Enter the value of b : ");
  scanf("%d",&b);

  if(b==(m*a+c))
    printf("\n Yes\n\n");
  else
    printf("\n No\n\n");

  return 0;
}
//fuck u
