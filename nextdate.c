#include <stdio.h>
/* Include other headers as needed */
int isleapyear(int year){
  if((year%400==0)|| ((year%4==0) && (year%100!=0)))
    return 1;
  else
    return 0;
}
int getdaysinmonth(int month, int year){
  if(month==2){
    if(isleapyear(year))
      return 29;
    else
      return 28;
  }
  else if(month==4 || month==6 || month==9 || month==11)
    return 30;
  else 
    return 31;
}
void getnextdate(int date,int month,int year){
  int daysinmonth=getdaysinmonth(month,year);
  if(date>daysinmonth || month>12){
    printf("Invalid input\n");
    return;
  }
  date++;
  if(date >daysinmonth){
    date=1;
    month++;
  }
  if(month>12){
    month=1;
    year++;
  }
  printf("%02d-%02d-%04d\n",date,month,year);
  
}

int main()
{
int t,d,m,y;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d %d",&d,&m,&y);
    getnextdate(d, m, y);
  }
    return 0;
}