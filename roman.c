#include<stdio.h>
#include <conio.h>
void main(void)
{
  int a,b,temp;
  scanf("%d %d",&a,&b);
  temp=a;
  a=b;
  b=temp;
  printf("%d %d",a,b);
  
return 0;
}
