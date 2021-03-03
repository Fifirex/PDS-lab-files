#include<stdio.h>
#include<string.h>

int main()
{
  char str[26],noun[26];
  int l;
  printf("\n Enter the noun : ");
  scanf("%s",str);                        //input of the string
  l=strlen(str);                          //calculating the length of the string
  strcpy(noun,str);                       //making a duplicate for later display
  if(str[l-1]=='y')
  {
    str[l-1]='i';
    str[l]='e';
    str[l+1]='s';
    str[l+2]='\0';                       //ending the string with NULL manually
  }
  else if(str[l-1]=='s')
  {
    str[l]='e';
    str[l+1]='s';
    str[l+2]='\0';                       //ending the string with NULL manually
  }
  else if((str[l-1]=='h')&&(str[l-2]=='c'||str[l-2]=='s'))
  {
    str[l]='e';
    str[l+1]='s';
    str[l+2]='\0';                       //ending the string with NULL manually
  }
  else
  {
    str[l]='s';
    str[l+1]='\0';                       //ending the string with NULL manually
  }

  printf("\n Noun   : %s",noun);        //final output
  printf("\n Plural : %s\n\n",str);
  return 0;
}
