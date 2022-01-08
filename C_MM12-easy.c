#include<stdio.h>
#include<stdlib.h>

int main(){
    float   a;
    while(scanf("%f",&a)==1){
        a*=100;
        int b=(int)(a-1)/23.8+1;
        printf("%d\n",b);

    }
}