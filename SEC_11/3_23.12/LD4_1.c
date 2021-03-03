#include<stdio.h>

void output(long int a)   //function to give the numbers in words
{
  switch(a)
  {
    case 0:printf("zero ");break;
    case 1:printf("one "); break;
    case 2:printf("two "); break;
    case 3:printf("three "); break;
    case 4:printf("four "); break;
    case 5:printf("five "); break;
    case 6:printf("six "); break;
    case 7:printf("seven "); break;
    case 8:printf("eight "); break;
    case 9:printf("nine "); break;
  }
}

int main()
{
  long int n;
  printf("\n Enter the number : ");
  scanf("%ld",&n);
  printf(" ");
  while(n!=0)
  {
    output(n%10);    //traversing the number and passing it digit by digit to the function
    n/=10;           //going to the next digit
  }
  printf("\n\n");
  return 0;
}
