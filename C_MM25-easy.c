#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        while(a%3!=0)a--;
        printf("%d\n",(a+3)*(a/3)/2);
    }
}