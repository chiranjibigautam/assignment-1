// program to check if number is greater than n1,less than n2, and divisible by 7.
#include <stdio.h>
int main(){
    int n,n1,n2;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Enter the value of n1 and n2\n");
    scanf("%d %d",&n1,&n2);
    if(n>n1){
        if(n<n2){
            if(n%7==0){
                printf ("number is greater than %d, less than %d and divisible by 7",n1,n2);
            }
        }
    }
    else{
        printf ("number you entered doesnot satisfies the given condition");
    }
    return 0;
}