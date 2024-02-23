// program to find hcf and lcm of given two numbers
#include<stdio.h>
int main(){
int x, y, hcf, lcm;

printf("Enter two integers: ");
scanf("%d%d", &x, &y);
 int a=x;
 int b=y;
while (y != 0) {
  int temp = y;
  y = x % y;
  x = temp;
}
hcf = x;
  if ( (a*b)/hcf==0)
  lcm=a*b;
  else 
  lcm=(a*b)/hcf;



printf("HCF: %d\n", hcf);
printf("LCM: %d\n", lcm);
}