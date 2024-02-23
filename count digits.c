// program to count a number of digits in a given number.
#include <stdio.h>
int main(){
    int n,count=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    while(n!=0){
        count=count+1;
        n=n/10;
    }
    printf ("total number of digits is %d",count);
    return 0;
}