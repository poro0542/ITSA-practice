#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)==2){
        int times=0;
        while(b!=0){
            if(b%100==a)times++;
            b/=10;
        }
        printf("%d\n",times);
    }
}

