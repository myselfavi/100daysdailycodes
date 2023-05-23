#include<stdio.h>
#include<math.h>
void strcatCode(char* str1, char* str2) {
int i=0;
  while(str1[i]!='\0')
    i++;
  int j=0;
  while(str2[j]!='\0'){
    str1[i]=str2[j];
    i++;
    j++;
  }
  str1[i]='\0';
  return str1;
}
int main() 
{
  int t,i,j=0;
  char a[50],b[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s %s", a, b);
    strcatCode(a,b);
    printf("%s\n", a);
  }
}