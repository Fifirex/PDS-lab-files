#include<stdio.h>
#include<string.h>        //to use strlen()
#include<ctype.h>         //to use tolower()

void check(char str[])
{
  int c=0,i;
  for(i=0;i<(strlen(str)-2);i++)        //traversal through the array and a
    if((str[i]=='a')&&(str[i+3]=='b'))  //counter to count all such "aXXb" occurances
      c++;
  printf(" %d ",c);                     //output
}

void encode1(char str[])
{
  char str2[21];
  int i;
  for(i=0;i<strlen(str);i++)
    if(str[i]=='y')                     //'y' and 'z' are special cases hence dealt separately
      str2[i]='a';
    else if(str[i]=='z')
      str2[i]='b';
    else
      str2[i]=(char)(str[i]+2);         //doing a '+2' to get the code
  str2[strlen(str)]='\0';               //terminating the string
  printf("%s ",str2);                   //output
}

void encode2(char str[])
{
  char str2[41];
  int i;
  for(i=0;i<((strlen(str))*2);i+=2)     //to create a string with the same elements of str[] but
  {                                     //'a' before each element
    str2[i]='a';
    str2[i+1]=str[i/2];
  }
  str2[(strlen(str))*2]='\0';           //terminating the string
  printf("%s",str2);                    //output
}

int main()
{
  char str[21];
  int i,c=0;
  printf("\n Enter the string : ");     //prompting the user to input string
  scanf("%s",str);
  for(i=0;i<strlen(str);i++)            //to filter out all the non-alphabets in the
    if(isalpha(str[i]))                 //entered string
    {
      str[c]=str[i];
      c++;
    }
  str[c]='\0';                          //terminating the string
  for(i=0;i<strlen(str);i++)            //converting all elements to the lower case
    str[i]=tolower(str[i]);
  printf(" Entered string : %s\n",str); //initial output
  check(str);                           //calling all the functions in sequence
  encode1(str);
  encode2(str);
  printf("\n\n");
  return 0;
}
