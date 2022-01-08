#include<stdio.h>
#include<stdlib.h>

int main(){
    int  a,b;
    while(scanf("%d %d",&a,&b)==2){
        long long c=a+b;
        c*=c;
        printf("%lld\n",c);
    }
}