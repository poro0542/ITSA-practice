#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a;
    while(scanf("%d",&a)==1){
        if(a%400==0){
            printf("Bissextile Year\n");
            continue;
        }
        if(a%100==0){
            printf("Common Year\n");
            continue;
        }
        if(a%4==0){
            printf("Bissextile Year\n");
            continue;
        }
        printf("Common Year\n");
    }
}