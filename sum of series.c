// program to find sum of series upto nth term
#include <stdio.h>
int main(){
    int a,n,i,ans=0;
    printf ("enter the number of terms in the series\n");
    scanf ("%d",&n);
    for(i=1;i<=n;i++){
        printf ("enter %d number of series \n",i);
        scanf("%d",&a);
        ans=ans+a;
    }
        printf ("the sum is %d",ans);
    return 0;
}