#include<stdio.h>
#include<string.h>
int strcmp(const char* str1, const char* str2) {
 for(int i=0;str1[i]!='\0';i++)
  if(str1[i]!=str2[i])
    return(str1[i]-str2[i]);
}

int main() 
{
  int t,i,j=0;
  char a[50],b[50];
  scanf("%d",&t);
  while(t--)
  
  {
    scanf("%s %s", a, b);
    j=strcmp(a,b);
    printf("%d\n",j);
  }
}
