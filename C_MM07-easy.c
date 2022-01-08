#include<stdio.h>
#include<stdlib.h>

int main(){
    int  a;
    while(scanf("%d",&a)==1){
        long long b,c;
        b=a*a;
        c=a*b;
        printf("%d %lld %lld\n",a,b,c);
    }
}