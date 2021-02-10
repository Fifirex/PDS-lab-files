//RollNo.: 20CE10089
//Name: Yash Saraswat

#include<stdio.h>
#include<math.h>

int main()
{
  int l,r;
  float root2=sqrt(2);

  printf("Enter the length of square side : ");
  scanf("%d",&l);
  printf("Enter the radius of the circle  : ");
  scanf("%d",&r);

  if((l<=0)||(r<=0))   //invalid values check
  {
    printf("\nInvalid radius or length (either point or negative)\n");
  }
  else
  {
    if((2*r)<=l)
      printf("\nCIRINSQ\n");
    else if((2*r)>=(l*root2))
      printf("\nSQINCIR\n");
    else
      printf("\nNONE\n");
  }

  return 0;
}
