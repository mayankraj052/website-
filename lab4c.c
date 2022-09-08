#include<stdio.h>
int main(){
    int n;
    int i=1;      //print even or odd in pattern.
    printf("enter a number:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0)
            printf("\n%d:even",i);
        else
            printf("\n%d:odd",i);
            i++;
    }
    return 0;
}
