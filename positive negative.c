// program to find whether a given numbe is positive negative or neutral
#include <stdio.h>
int main(){
    int num;
    printf ("enter a number\n");
    scanf ("%d",&num);
    if(num>0){
        printf ("%d is positive number",num);
    }
    else if(num<0){
        printf ("%d is negative number",num);
    }
    else{
        printf ("%d is neutral number",num);
    }
    return 0;
}