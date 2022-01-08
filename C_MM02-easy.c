#include<stdio.h>
#include<stdlib.h>

int main(){
    int  a,b;
    float c=2;
    while(scanf("%d %d",&a,&b)==2){
        printf("%1.1f\n",a*b/c);
    }
}