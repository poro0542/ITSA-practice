#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        if(a>=35)printf("%d",35);
        for(int i=70;i<=a;i+=35){
            printf(" %d",i);
        }
        printf("\n");
    }
}