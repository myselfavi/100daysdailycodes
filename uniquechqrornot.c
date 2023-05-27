#include<stdio.h>
#include<strings.h>
// Return 1 if string contains all unique characters, else return 0
int isUniqueChars(char *str){
 for(int i=0;str[i]!='\0';i++){
   for(int j=i+1;str[j]!='\0';j++){
     if(str[i]==str[j])
       return 0;
   }
   }
  return 1;
}
int main() 
{
  int t,i,j=0;
  char a[50], b[50];
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s", a);
    if(isUniqueChars(a)){
      printf("YES");
    }else{
      printf("NO");
    }
    printf("\n");
  }
}