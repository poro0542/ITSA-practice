#include<stdio.h>
#include<stdlib.h>

int main(){
    int   a;
    while(scanf("%d",&a)==1){
        printf("NT10=%d\n",(a-(a%10))/10);
        a%=10;
        printf("NT5=%d\n",(a-(a%5))/5);
        a%=5;
        printf("NT1=%d\n",a);
    }
}