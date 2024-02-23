// program to take input of three numbers from user and find the larget among those three numbers
#include <stdio.h>
int main(){
    int a,b,c;
    printf ("enter three numbers\n");
    scanf ("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf ("largest number is %d",a);
    }
    else if(b>a && b>c){
        printf ("largest number is %d",b);
    }
    else {
        printf ("largest number is %d",c);
    }
    return 0;
}