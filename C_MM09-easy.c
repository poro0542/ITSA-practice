#include<stdio.h>
#include<stdlib.h>

int main(){
    int  i;
    while(scanf("%d",&i)==1){
        if(i>=31){
            printf("Value of more than 31\n");
            continue;
        }
        long long c=2;
        for(int j=0;j<i-1;j++){
            c*=2;
        }
        printf("%lld\n",c);
    }
}