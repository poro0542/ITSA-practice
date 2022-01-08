#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        for(int i=1;i<a;i++){
            if(a%i==0)printf("%d ",i);
        }
        printf("%d\n",a);
    }
}

