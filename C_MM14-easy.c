#include<stdio.h>
#include<stdlib.h>

int main(){
    int  a;
    while(scanf("%d",&a)==1){
        int h,m,s;
        s=a%60;
        a/=60;
        m=a%60;
        a/=60;
        h=a%24;
        a/=24;
        printf("%d days\n%d hours\n%d minutes\n%d seconds\n",a,h,m,s);
    }
}