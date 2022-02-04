#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void input()
{
 char str1[100];
 char str2[100];
 printf("Enter the first string\n");
 scanf("%s", str1);
 printf("Enter the second string\n");
 scanf("%s", str2);
}
int compute(char str1[100], char str2[100])
{
 int value;
  if(&str1>&str2)
  {
    value=1;
  }
  if(&str2>&str1)
  {
    value=2;
  }
 return value;
}
void output(char str1[100], char str2[100], int value)
{
  if(value==1)
  {
      printf("%s is greater than %s\n", str1, str2);
  }
  else if(value==2)
  {
      printf("%s is greater than %s\n", str2, str1);
  }
  else
  {
    printf("the strings are equal");
  }
}
 int main()
 {
   char str1[100], str2[100];
   int value;
  input();
  value=compute(str1,str2);
  output(str1,str2,value);
  return 0;
 }
