// program to find sum of n numbers
#include <stdio.h>
int main(){
    int a,n,i,ans=0;
    printf ("how many numbers you want to enter?\n");
    scanf ("%d",&n);
    for(i=1;i<=n;i++){
        printf ("enter %d number\n",i);
        scanf("%d",&a);
        ans=ans+a;
    }
        printf ("the sum is %d",ans);
    return 0;
}