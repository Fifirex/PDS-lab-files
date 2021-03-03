#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
  char name[11][16];
  int age[11],n,i,j,flag1[11],flag2[11],c=1,c2=0;
  printf("\n Enter the number of students : ");
  scanf("%d",&n);                                                             //Input for the number of students
  printf("\n Enter the Name and then the age of \n");
  for(i=0;i<n;i++)
  {
    printf(" Student %d : ",i+1);
    scanf("%s %d",name[i],&age[i]);                                           //Input for each student
    flag1[i]=0;                                                     //utility arrays initialisation
    flag2[i]=0;
    for(j=0;j<strlen(name[i]);j++)
      name[i][j]=tolower(name[i][j]);                               //standardising the case to avoid confusion
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      if(i!=j)
        if(age[i]==age[j])                          //if there is any hit encountered, the flag value will be marked
        {                                           //with a number which changes for every group of same age
          flag1[i]=c;                               //this is done to avoid repetition in the groups
          flag1[j]=c;
        }
    c++;
  }
  c=1;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)                                //same logic for name as above
      if(i!=j)
        if(!strcmp(name[i],name[j]))
        {
          flag2[i]=c;
          flag2[j]=c;
        }
    c++;
  }
  printf("\n\n Groups of students having the same AGE : \n");
  for(i=0;i<n;i++)
    if(flag1[i])                                    //groupwise display of the entries with same age
    {
      c2++;
      printf("\n Group %d (age = %d)",c2,age[i]);
      c=flag1[i];
      for(j=i;j<n;j++)
        if(flag1[j]==c)
        {
          printf("\n Name : %s \t\tAge : %d",name[j],age[j]);
          flag1[j]=0;                               //lowering of flag to avoid repetative display of the same group
        }
    }
  if(!c2)
    printf(" No 2 students have the same age");     //case handling where there is no group found
  c2=0;
  printf("\n\n Groups of students having the same NAME : \n");
  for(i=0;i<n;i++)
    if(flag2[i])                                    //groupwise display of the entries with same name
    {
      c2++;
      printf("\n Group %d (name = %s)",c2,name[i]);
      c=flag2[i];
      for(j=i;j<n;j++)
        if(flag2[j]==c)
        {
          printf("\n Name : %s \t\tAge : %d",name[j],age[j]);
          flag2[j]=0;                               //lowering of flag to avoid repetative display of the same group
        }
    }
  if(!c2)
    printf(" No 2 students have the same name\n\n"); //case handling where there is no group found
  else
    printf("\n\n");                                 //formatting
  return 0;
}
