#include<stdio.h>
#include<math.h>

int main()
{
  unsigned int roll[11];
  float cgpa[11],cgpa2[11],sum=0;
  int n,i,j,flag[11],c=1,c2=0;
  printf("\n Enter the number of students : ");
  scanf("%d",&n);                                                     //Input for the number of students
  printf("\n Enter the roll number and then the CGPA of \n");
  for(i=0;i<n;i++)
  {
    printf(" Student %d : ",i+1);
    scanf("%u %f",&roll[i],&cgpa[i]);                                 //Input for each entry
    sum+=cgpa[i];                                                     //sum for calculating the average
    cgpa2[i]=floor(100*cgpa[i])/100;                                  //secondary array for considering only 2 digits of the CGPA
    flag[i]=0;                                                        //utility array initialisation for comparing
  }
  printf("\n Details of entered students : ");
  for(i=0;i<n;i++)
  {
    printf("\n %d : ",i+1);
    printf(" roll no. : %u \t\t\tCGPA : %f",roll[i],cgpa[i]);           //initial output
  }
  printf("\n\n Average CGPA : %f\n",sum/n);                              //average CGPA display
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      if(i!=j)
        if(cgpa2[i]==cgpa2[j])                                        //if there is any hit encountered, the flag value will be marked
        {                                                             //with a number which changes for every group of "same" CGPA
          flag[i]=c;                                                  //this is done to avoid repetition in the groups
          flag[j]=c;
        }
    c++;                                                              //changing value of c for the next group
  }
  printf("\n The Groups of students having the same CGPA are : ");
  for(i=0;i<n;i++)
    if(flag[i])                                                      //groupwise display of the entries
    {
      c2++;
      printf("\n Group %d (rounded cgpa = %0.2f)",c2,cgpa2[i]);
      c=flag[i];
      for(j=i;j<n;j++)
        if(flag[j]==c)
        {
          printf("\n roll no. : %u \t\t\tCGPA : %f",roll[j],cgpa[j]);
          flag[j]=0;                                                //lowering of flag to avoid repetative display of the same group
        }
    }
  if(!c2)
    printf("\n No 2 students have the same CGPA \n\n");
  else
    printf("\n\n");                                                 //formatting
  return 0;
}
