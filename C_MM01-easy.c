#include<stdio.h>
#include<stdlib.h>

int main(){
    int  a,b,d;
    float c=2;
    while(scanf("%d %d %d",&a,&b,&d)==3){
        printf("Trapezoid area:%1.1f\n",(a+b)*d/c);
    }
}