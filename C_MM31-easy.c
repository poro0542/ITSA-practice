#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        while(a%6!=0)a--;
        int b=a;
        while(b%12!=0)b--;
        printf("%d\n",(a+6)*(a/6)/2-(b+12)*(b/12)/2);
    }
}