// program to find the factorial of a given number
#include <stdio.h>
int main(){
    int n,i,fact=1;
    printf ("enter the number to calculate factorial\n");
    scanf ("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf ("factorial of number %d is %d",n,fact);
    return 0;
}