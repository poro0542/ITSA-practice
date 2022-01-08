#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        int b=(a+1)*a/2;
        for(int i=1;i<a;i++){
            printf("%d + ",i);
        }
        printf("%d = %d\n",a,b);
    }
}

