#include <stdio.h>
int main () {
  int num1,num2;
  printf ("nhập 2 số nguyên dương\n");
  scanf ("%d%d",&num1,&num2);
  int sum = num1+num2;
  printf ("Tổng của %d + %d là %d",num1,num2,sum);
}