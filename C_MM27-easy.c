#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)==2){
        if(b<a){
            int temp=b;
            b=a;
            a=temp;
        }
        printf("%d\n",(a+b)*(b-a+1)/2);
    }
}