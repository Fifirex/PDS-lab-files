#include<stdio.h>

int c=0;                                                            //costumer count

struct cust                                                         //costumer data structure
{                                                                   //name[]-stores the name of costumer
  char name[11], address[11], pnum[11];                             //address[]-stores the address of the costumer
}c_list[10];                                                        //pnum[]-stores the phone nmber of the costumer

struct sales                                                        //costumer sale structure
{                                                                   //sold[]-stores the purchases made by a customer
  int sold[30],num,sum;                                             //num-stores the number of purchases made by the costumer
}s_list[10];                                                        //sum-stores the sum of all the purchases made

void regis()                                                        //function to register
{
  if(c<10)                                                          //to check if number of costumers hasn't exceeded 10
  {
    printf(" Enter Name         : ");                               //input of costumer data
    scanf("%s",c_list[c].name);
    printf(" Enter Address      : ");
    scanf("%s",c_list[c].address);
    printf(" Enter Phone Number : ");
    scanf("%s",c_list[c].pnum);
    printf(" The registered customer details are : ");              //output of the entered data
    printf("\n Customer Number (CN) : %d",c);
    printf("\n Customer Name        : %s",c_list[c].name);
    printf("\n Customer Address     : %s",c_list[c].address);
    printf("\n Customer Mob. number : %s",c_list[c].pnum);
    s_list[c].num=0;                                                //initialising the struct data members
    s_list[c].sum=0;
    c++;                                                            //updating the number of costumers
  }
  else
    printf(" MAXIMUM LIMIT REACHED (10 customers)");                //if the number of costumers has exceeded 10
}

void list()                                                         //function to display all the costumers
{
  if(c)
  {
    printf(" The detailed list of all customers is : ");              //output of the costumer data
    printf("\n CN\t\tName\t\tAddress\t\tMob. Number");
    for(int i=0;i<c;i++)
      printf("\n %d\t\t%s\t\t%s\t\t%s",i,c_list[i].name,c_list[i].address,c_list[i].pnum);
  }
  else
    printf(" No registered customers");
}

void sale()                                                         //function to make sale for a costumer
{
  int n,amt;
  printf(" Enter CN              : ");
  scanf("%d",&n);
  if(n<0||n>=c)                                                     //corner case of out of bound costumer number entered
    printf(" INVALID CN");
  else
  {
    printf(" Enter purchase amount : ");
    scanf("%d",&amt);
    if(amt<0)                                                       //corner case of invalid amount entered
      printf("\n NEGATIVE AMOUNT ENTERED");
    else
    {
      s_list[n].sold[s_list[n].num]=amt;                            //storing and updating all the values
      s_list[n].num++;
      s_list[n].sum+=amt;
    }
  }
}

void display()                                                      //function to display the purchases made by a particular costumer
{
  int n,i;
  printf(" Enter CN : ");
  scanf("%d",&n);
  if(n<0||n>=c)
    printf(" INVALID CN");                                          //corner case of out of bound costumer number entered
  else
  {
    printf(" The list of all the purchases made by this customer is : ");
    if(s_list[n].num==0)
      printf("\n NIL");
    else
      for(i=0;i<s_list[n].num;i++)
        printf("\n %d",s_list[n].sold[i]);                          //output
  }
}

void award()
{
  int i,max1,max2;
  if(c>=2)                                                            //to chek if the number of customers cross 2
  {
    printf(" Congratulations to the following two winners!");
    max1=0;
    for(i=1;i<c;i++)                                                //to calculate the 2 costumers who have made the maximum purchases
      if(s_list[i].sum>s_list[max1].sum)
      {
        max2=max1;
        max1=i;
      }
    if(max1==0)                                                       //if the first element is max1, then max2 will be ignored
    {                                                                 //hence a new loop to find max2
      max2=1;
      for(i=2;i<c;i++)
        if(s_list[i].sum>s_list[max2].sum)
          max2=i;
    }
    printf("\n Name\t\tMob. Number\t\tTotal Purchase Amount");     //output
    printf("\n %s\t\t%s\t\t\t%d",c_list[max1].name,c_list[max1].pnum,s_list[max1].sum);
    printf("\n %s\t\t%s\t\t\t%d",c_list[max2].name,c_list[max2].pnum,s_list[max2].sum);
  }
  else if(c==1)
    printf(" Only one customer is registered");
  else
    printf(" No customer is registered");
}

int main()
{
  char ch;
  printf("\n MENU");                                            //menu display
  printf("\n Register customer....(r)");
  printf("\n List customers.......(l)");
  printf("\n Sale.................(s)");
  printf("\n Display sale.........(d)");
  printf("\n Award surprise gift..(a)");
  printf("\n Exit.................(e)");
  do
  {
    printf("\n\n Enter your choice : ");
    scanf(" %c",&ch);                                           //space given to handle the danling new line every iteration
    switch(ch)                                                  //switch to call appropriate functions
    {
      case 'r':regis(); break;
      case 'l':list(); break;
      case 's':sale(); break;
      case 'd':display(); break;
      case 'a':award(); break;
      case 'e':printf(" PROGRAM TERMINATED\n\n"); break;        //exit statement
      default: printf(" INAVALID INPUT");                       //corner case of another character taken as input
    }
  } while(ch!='e');                                             //loop ends at Exit (e)
  return 0;
}
