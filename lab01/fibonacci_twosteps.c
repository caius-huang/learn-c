#include <stdio.h>
int main()
{
  int a,b;
  printf("输入两个数，中间用空格隔开，得出斐波那契数列中后两个数“）；
  scanf("%d %d",&a,&b);
  a=a+b;
  printf("%d",a);
  b=a+b;
  printf("%d\n",b);
  return 0;
}
