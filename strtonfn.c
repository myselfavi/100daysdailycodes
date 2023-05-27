#include <stdio.h>
#include <strings.h>
char* strtok_code(char *str, char *ch){
  // Complete the function
  int c = strlen(str);
  int i=0;
  while(str[i]!='\0'){
    if(str[i]==ch[0])
      printf("\n");
    else
      printf("%c",str[i]);
    i++;
  }
  printf("\n");
  return ;
}
int main()
{
  int t,i,j=0;
  char str[50];
  char ch[2];
  scanf("%d", &t);
  while(t--)
  {
    scanf("%s %c", str, ch);
    // Write your code here...
    strtok_code(str, ch);
  }
  return 0;
}