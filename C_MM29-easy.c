#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        a--;
        for(a;a>0;a--){
            int key=0;
            for(int j=2;j*j<=a;j++){
                if(a%j==0){
                    key=1;
                    break;
                }
            }
            if(key)continue;
            else{
                printf("%d\n",a);
                break;
            }
        }
    }
}