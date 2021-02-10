#include<stdio.h>
#include<stdlib.h>  //to use rand() and srand()
#include<time.h>    //to use time()

void get_union(int set1[],int set2[],int temp[])
{
  int i,f=0,j,c=1;
  for(i=0;i<40;i++)         //clearing temp[]
    temp[i]=0;
  for(i=0;i<20;i++)         //allocating set1[] completely to temp[]
    temp[i]=set1[i];
  for(i=0;i<20;i++)         //if any element of set2[] is already there in temp[]
  {                         //it is skipped, the other elements are copied
    f=0;                    //hence genrating the union
    for(j=0;j<20;j++)
      if(temp[j]==set2[i])
      {
        f=1;
        break;
      }
    if(!f)
    {
      temp[19+c]=set2[i];
      c++;
    }
  }
}

void get_intersection(int set1[],int set2[],int temp[])
{
  int i,j,l=0;
  for(i=0;i<40;i++)           //clearing temp[]
    temp[i]=0;
  for(i=0;i<20;i++)           //basic loop to traverse set1 and set2
    for(j=0;j<20;j++)         //if any common element found, it stores it in temp[]
      if(set1[i]==set2[j])    //hence creating the intersection
      {
        temp[l]=set1[i];
        l++;
        break;
      }
}

int main()
{
  srand(time(0));           //seeding for variable elements every program run
  int set1[20],set2[20],temp[40],i,c,j,l;
  for(i=0;i<31;i++)         //this is my way of randomising elements in the sets
    temp[i]=10+i;           //rather than having random elements directly stored in the sets
  for(i=0;i<20;i++)         //we create a temp array all the elements in the range [10,40]
  {                         //then we randomly access any index by using temp[rand(x)] and allocate it to set
    c=rand()%(31-i);        //once that element is used, we remove it from temp to avoid repetition
    set1[i]=temp[c];        //hence there are 2 loops: 1 for filling temp[] and another for randomising
    for(j=c;j<30;j++)
      temp[j]=temp[j+1];
  }
  for(i=0;i<31;i++)         //the same thing is done for set2
    temp[i]=10+i;
  for(i=0;i<20;i++)
  {
    c=rand()%(31-i);
    set2[i]=temp[c];
    for(j=c;j<30;j++)
      temp[j]=temp[j+1];
  }
  printf("\n set1 : ");     //initial output
  for(i=0;i<20;i++)
    printf("%d ",set1[i]);
  printf("\n set2 : ");
  for(i=0;i<20;i++)
    printf("%d ",set2[i]);
  printf("\n\n 1.Get the union of set1 and set2");        //menu display
  printf("\n 2.Get the intersection of set1 and set2");
  printf("\n 3.Exit");
  do
  {
    printf("\n Enter your choice : ");                    //prompting the user to enter their choice
    scanf("%d",&c);
    switch(c)
    {
      case 1: get_union(set1,set2,temp);                  //calling appropriate functions to do the job
              for(i=0;i<40;i++)                           //to find the size
                if(temp[i]==0)
                {
                  l=i;
                  break;
                }
              printf(" The Union is : ");                 //output to the user
              for(i=0;i<l;i++)
                printf("%d ",temp[i]);
              printf("\n");
              break;
      case 2: get_intersection(set1,set2,temp);
              for(i=0;i<40;i++)                           //to find the size
              if(temp[i]==0)
                {
                  l=i;
                  break;
                }
              printf(" The Intersection is : ");          //output to the user
              for(i=0;i<l;i++)
                printf("%d ",temp[i]);
              printf("\n");
              break;
      case 3: printf(" PROGRAM TERMINATED\n\n"); break;   //exit statement
      default: printf(" INVALID INPUT\n");                //corner case of invalid choice
    }
  }while(c!=3);
  return 0;
}
