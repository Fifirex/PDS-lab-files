//RollNo.: 20CE10089
//Name: Yash Saraswat

#include<stdio.h>
#include<stdlib.h>  //to use rand() and srand()
#include<time.h>    //to use time()
#include<math.h>    //to use pow()

void b2d(int arr[])   //function to convert to decimal
{
  int i;
  long int n=0;
  for(i=0;i<16;i++)
    n+=arr[i]*pow(2,(15-i));                            //takes the base 2 with each element's index and adds it up
  printf(" The number in decimal base is : %ld",n);     //output
}

void b2h(int arr[])
{
  int arr2[4],i,j;
  for(i=0;i<4;i++)                        //dividing the array into groups of four, because each
  {                                       //hexadecimal can store only 16 (2^4) values
    arr2[i]=0;
    for(j=0;j<4;j++)                      //dealing with each group and converting to decimal
      arr2[i]+=arr[4*i+j]*pow(2,(3-j));
  }
  printf(" The number in hexadecimal base is : ");
  for(i=0;i<4;i++)
    if(arr2[i]<10)                        //if else ladder to mark each each element to hexa
      printf("%d",arr2[i]);
    else if(arr2[i]==10)
      printf("A");
    else if(arr2[i]==11)
      printf("B");
    else if(arr2[i]==12)
      printf("C");
    else if(arr2[i]==13)
      printf("D");
    else if(arr2[i]==14)
      printf("E");
    else
      printf("F");
}

void b2o(int arr[])
{
  int arr2[6],i,j;
  for(i=0;i<5;i++)          //same logic as hexa, just stores in groups of 3 this time
  {
    arr2[i+1]=0;
    for(j=0;j<3;j++)
      arr2[i+1]+=arr[3*i+j+1]*pow(2,(2-j));
  }
  if(arr[0])
    arr2[0]=2;
  else
    arr2[0]=0;
  printf(" The number in octal base is : ");    //output
  for(i=0;i<6;i++)
    printf("%d",arr2[i]);
}

void multiply(int arr[])
{
  int i,arr2[16];
  for(i=1;i<16;i++)         //left shifting the array, discarding the left bit and adding a 0 at the end
    arr2[i-1]=arr[i];
  arr2[15]=0;
  if(arr[0]!=1)             //to preserve the most significant digit of the array
    printf(" Output after multiplying by 2 is : ");
  else
    printf(" Output after multiplying by 2 is : 1");
  for(int i=0;i<16;i++)
    printf("%d",arr2[i]);
}
void divide(int arr[])
{
  int i,arr2[16];
  for(i=0;i<15;i++)         //right shifting the array, discarding the right bit and adding a 0 at the start
    arr2[i+1]=arr[i];
  arr2[0]=0;
  printf(" Output after dividing by 2 is : ");
  for(int i=0;i<15;i++)
    printf("%d",arr2[i]);
}

int main()
{
  srand(time(0));     //seeding every function run
  int arr[16],i,j,ch;
  for(i=0;i<16;i++)
    arr[i]=rand()%2;      //allots number between 1 and 0
  printf("\n THE BINARY NUMBER IS : ");
  for(i=0;i<16;i++)         //initial output
    printf("%d",arr[i]);
  printf("\n 1. Display the above number in decimal format");     //menu display
  printf("\n 2. Display the above number in Hexadecimal format");
  printf("\n 3. Display the above number in Octal format");
  printf("\n 4. Multiply the original binary number by 2 and display the result");
  printf("\n 5. Divide the original binary number by 2 and display the result");
  printf("\n 6. Exit");
  do
  {
    printf("\n\n Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:b2d(arr); break;
      case 2:b2h(arr); break;
      case 3:b2o(arr); break;
      case 4:multiply(arr); break;
      case 5:divide(arr); break;
      case 6:printf(" PROGRAM TERMINATED\n\n"); break;
      default: printf(" INAVALID INPUT");   //corner case of anyother number taken as input
    }
  } while(ch!=6);       //loop ends at 6.Exit
  return 0;
}
