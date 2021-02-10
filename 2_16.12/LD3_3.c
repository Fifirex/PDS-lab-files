#include<stdio.h>
#include<math.h>

int main()
{
  int t;
  float f1,f2,f3,d,te;
  printf("\nEnter f1, f2 and f3 : ");
  scanf("%f %f %f",&f1,&f2,&f3);
  printf("Enter the value of t  : ");
  scanf("%d",&t);
  switch(t)
  {
    case 1: te=f2;
            f2=f1;
            f1=te;
            te=f1;
            f1=f3;
            f3=te;
            printf("\nNew f1 : %0.2f",f1);
            printf("\nNew f2 : %0.2f",f2);
            printf("\nNew f3 : %0.2f\n\n",f3);
            break;
    case 2: if(f1==0&&f2==0)
              printf("\nQuadratic not possible\n\n");
            else
            {
              d=f2*f2-4*f1*f3;
              if(d>0)
                printf("\nThe roots are : %0.2f and %0.2f \n\n",(-1*f2+sqrt(d))/(2.0*f1),(-1*f2-sqrt(d))/(2.0*f1));
              else if(d==0)
                printf("\nThe repeated root is : %0.2f \n\n",(-1*f2)/(2.0*f1));
              else
              {
                d*=-1;
                if(f1>0)
                  printf("\nThe roots are : %0.2f + j%0.2f and %0.2f - j%0.2f \n\n",-1*f2/(2.0*f1),sqrt(d)/(2.0*f1),-1*f2/(2.0*f1),sqrt(d)/(2.0*f1));
                else
                  printf("\nThe roots are : %0.2f + j%0.2f and %0.2f - j%0.2f \n\n",-1*f2/(2.0*f1),-1*sqrt(d)/(2.0*f1),-1*f2/(2.0*f1),-1*sqrt(d)/(2.0*f1));
              }
            }
            break;
    case 3: d=f1*f1+f2*f2-f3*f3;
            if(d<0)
              printf("\nINSIDE\n\n");
            else if(d==0)
              printf("\nON THE CIRCLE\n\n");
            else
              printf("\nOUTSIDE\n\n");
            break;
    case 4: if(f1<0)                  //creating abslute values
              f1*=-1;
            if(f2<0)
              f2*=-1;
            if(f3<0)
              f3*=-1;
            if(f1<(f2+f3)&&f2<(f1+f3)&&f3<(f1+f2))
              printf("\nYES\n\n");
            else
              printf("\nNO\n\n");
            break;
    default: printf("NO SUCH TASK\n\n");
  };
  return 0;
}
