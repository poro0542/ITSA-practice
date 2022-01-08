#include<stdio.h>
#include<stdlib.h>

int main(){
    int max,min;
    while(scanf("%d %d",&max,&min)==2){
        while(min!=0 && max!=0){
            if(max<min){
                int temp=max;
                max=min;
                min=temp;
            }
            max-=min;
        }
        printf("%d\n",min);
    }
}