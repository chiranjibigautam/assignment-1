// program to get prime factors of a number
#include <stdio.h>
int main(){
    int i,j,n,c=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf ("prime factors of %d is given as\n",n);
    for (i=2;i<=(n-2);i++){
        if (n%i==0){
            j=2;
            for(j=2;j<=i-1;j++){
                if(i%j==0){
                    c=c+1;
                }
            }
            if (c==0){
                printf ("%d\n",i);
            }
        }
    }
    return 0;
}