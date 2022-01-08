#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        long long ans=1;
        while(a>1){
            ans*=a;
            a--;
        }
        printf("%lld\n",ans);
    }
}