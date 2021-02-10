#include<stdio.h>

int main()
{
  int a,b,m,c;
  printf("Enter the value of slope (m)       : ");
  scanf("%d",&m);
  printf("Enter the value of y-intercept (c) : ");
  scanf("%d",&c);
  printf("\nEnter the value of a : ");
  scanf("%d",&a);
  printf("Enter the value of b : ");
  scanf("%d",&b);

  if(b==(m*a+c))
    printf("\nThe point lies on the line\n");
  else
    printf("\nThe point does not lie on the line\n");

  return 0;
}
