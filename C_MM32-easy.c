#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a;
    while(scanf("%d",&a)==1){
        int b=0,c=a;
        while(a!=0){
            int temp=a%10;
            b+=temp*temp*temp;
            a/=10;
        }
        if(b==c)printf("Yes\n");
        else printf("No\n");
    }
}