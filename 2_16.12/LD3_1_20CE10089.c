//RollNo.: 20CE10089
//Name: Yash Saraswat

#include<stdio.h>
#include<math.h>

int main()
{
  float a1,b1,r1,a2,b2,r2,d,c1,c2,d1,d2,dif;

  printf("Enter the coordinates of centre of C1 : ");
  scanf("%f %f",&a1,&b1);
  printf("Enter the radius of C1 : ");
  scanf("%f",&r1);

  printf("\nEnter the coordinates of centre of C2 : ");
  scanf("%f %f",&a2,&b2);
  printf("Enter the radius of C2 : ");
  scanf("%f",&r2);

  if(r1<=0||r2<=0)   //invalid radius check
    printf("\nInvalid value for radius (either negative or zero)\n\n");
  else
  {
    dif=fabs(r1-r2);
    d=sqrt(pow((a1-a2),2) + pow((b1-b2),2));   //disctance b/w centres

    if((d>(r1+r2))||(d<dif))       //either not touching exterbally or internally
      printf("\nNO INTERSECTION\n\n");
    else if(d==(r1+r2))
    {
      c1=0.5*((a1+a2)+(r1*r1-r2*r2)*(a2-a1)/(d*d));
      d1=0.5*((b1+b2)+(r1*r1-r2*r2)*(b2-b1)/(d*d));
      printf("\nThe point (1) of intersection is: (%0.2f , %0.2f)\n\n",c1,d1);
    }
    else
    {
      c1=0.5*((a1+a2)+(r1*r1-r2*r2)*(a2-a1)/(d*d)+sqrt(2*(r1*r1+r2*r2)/(d*d)-pow(r1*r1-r2*r2,2)/(d*d*d*d)-1)*(b2-b1));   //after solving the
      c2=0.5*((a1+a2)+(r1*r1-r2*r2)*(a2-a1)/(d*d)-sqrt(2*(r1*r1+r2*r2)/(d*d)-pow(r1*r1-r2*r2,2)/(d*d*d*d)-1)*(b2-b1));   //equations of the 2 circles
      d1=0.5*((b1+b2)+(r1*r1-r2*r2)*(b2-b1)/(d*d)+sqrt(2*(r1*r1+r2*r2)/(d*d)-pow(r1*r1-r2*r2,2)/(d*d*d*d)-1)*(a1-a2));   //we get this quadratic
      d2=0.5*((b1+b2)+(r1*r1-r2*r2)*(b2-b1)/(d*d)-sqrt(2*(r1*r1+r2*r2)/(d*d)-pow(r1*r1-r2*r2,2)/(d*d*d*d)-1)*(a1-a2));
      printf("\nThe points (2) of intersections are: (%0.2f , %0.2f) and (%0.2f , %0.2f)\n\n",c1,d1,c2,d2);
    }
  }
  return 0;
}
