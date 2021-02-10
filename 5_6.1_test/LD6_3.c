#include<stdio.h>

int main()
{
  int i,j,s,n,c;                            //c is the main counter
  i=1;
  printf("\n Enter the value of s : ");
  scanf("%d",&s);
  printf("\n Enter the value of n : ");
  scanf("%d",&n);
  if(s<1||s>6)                              //corner case check for s
  {
    printf("\n Invalid value of s (should be between 1-6)");
    i=0;
  }
  if(n<1||n>10)                             //corner case check for n
  {
    printf("\n Invalid value of n (should be between 1-10)");
    i=0;
  }
  if(i)                                     //indicates that both the corner cases are checked
  {
    printf("\n ");                          //output formatting
    c=1;                                    //initialising the counter
    for(i=1;i<=n;i++)                       //line loop
    {
      for(j=1;j<=2+s;j++)                   //to restrict the number of elements in each line
      {
        printf("%d",c);                     //printing the pattern
        c++;                                //incrementation
        if(c==4+s)                          //upper limit over c is 4+s
          c=1;                              //resetting the value of c if upper limit is crossed
      }
      printf("\n ");                        //going to the next line
    }
  }
  printf("\n\n");                           //output formatting
  return 0;
}
