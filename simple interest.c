// program to find simple interest
#include <stdio.h>
int main(){
    int p,t,r,si;
    printf ("enter principle,rate and time\n");
    scanf ("%d %d %d",&p,&t,&r);
    si=(p*t*r)/100;
    printf ("the simple interest is %d",si);
    return 0;
}