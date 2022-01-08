#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        int key=0;
        for(int i=2;i*i<=a;i++){
            if(a%i==0){
                key=1;
                break;
            }
        }
        if(key)printf("NO\n");
        else printf("YES\n");
    }
}