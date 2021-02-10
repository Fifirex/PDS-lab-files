#include<stdio.h>

int main()
{
  int a=-1,b=-1,x,flag=1;
  while(flag)
  {
    printf("\n Enter the number : ");
    scanf("%d",&x);
    if(x>=0)
    {
      if(x>=a)
      {
        b=a;
        a=x;
      }
      else if(x>b)
        b=x;
      printf(" Largest number : %d\n",a);
      printf(" Second largest number : ");
      if(b==-1)
        printf("Value Not yet entered\n");
      else
        printf("%d\n",b);
    }
    else
    {
        printf(" Program Terminated\n\n");
        flag=0;
    }
  }
  return 0;
}
