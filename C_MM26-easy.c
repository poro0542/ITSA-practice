#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        for(int i=1;i<=a;i++){
            printf("%d*%d=%d\n",i,i,i*i);
        }
    }
}