#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 
int prime(int);
int main(void){
    int a,b;
    scanf("%d",&a);
    for (int i=a-1;i>1;i--){
        if (prime(i)==1){
            printf("%d",i);
            break;
        }
    }
}
int prime(int x){
    for(int i=2;i<x;i++){
        if (x%i==0) return 0;
    }
    return 1;
}