// program to print fibonacci series upto n terms.
#include <stdio.h>
int main(){
    int n,a=0,b= 1,c;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i=0;i<n;i++) {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}