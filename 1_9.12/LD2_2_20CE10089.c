//RollNo.: 20CE10089
//Name: Yash Saraswat

#include<stdio.h>
#include<math.h>

int main()
{
  float a1,b1,r1,a2,b2,r2,d;

  printf("Enter the coordinates of centre of C1 : ");
  scanf("%f %f",&a1,&b1);
  printf("Enter the radius of C1 : ");
  scanf("%f",&r1);

  printf("\nEnter the coordinates of centre of C2 : ");
  scanf("%f %f",&a2,&b2);
  printf("Enter the radius of C2 : ");
  scanf("%f",&r2);

  if((r1<=0)||(r2<=0))  //invalid radius check
      printf("\nInvalid radius (either point or negative)\n");
  else
  {
    d=sqrt(pow((a1-a2),2) + pow((b1-b2),2));
    printf("\nThe distance between the centres of the circles is : %f \n",d);
  }

  return 0;
}
