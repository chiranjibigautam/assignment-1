// calculate the electricity  bill as per following formula; Rs 80 for first 20 units, Rs 8 for next 100 units, Rs 10 per unit for anything more.
#include <stdio.h>
int main(){
    int units,total;
    printf ("enter the  total units consumed\n");
    scanf ("%d",&units);
    if (units<=20){
        printf("total bill amount is Rs. 80"); 
    }
    else if(units>20 && units<=120){
        total=80+(units-20)*8;
        printf ("total amount is Rs. %d",total);
    }
    else if(units>120) {
        total=units*10;
         printf ("total amount is Rs. %d",total);
    }
    return 0;
}