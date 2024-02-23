// program to reverse a number of digits in a given number.
#include <stdio.h>
int main(){
    int n,ldigit,rev=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    while(n!=0){
        ldigit=n%10;
        rev=rev*10+ldigit;
        n=n/10;
    }
    printf ("reverse of given number is %d",rev);
    return 0;
}