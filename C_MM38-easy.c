#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3){
        int max=a,s=a+b+c;
        if(max<b)max=b;
        if(max<c)max=c;
        if(s>max*2)printf("fit\n");
        else printf("unfit\n");

    }
}