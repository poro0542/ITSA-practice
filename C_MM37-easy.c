#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)==2){
        if(a>0 && b>0)printf("1st Quadrant\n");
        if(a>0 && b<0)printf("4th Quadrant\n");
        if(a<0 && b>0)printf("2nd Quadrant\n");
        if(a<0 && b<0)printf("3rd Quadrant\n");
        if(a==0 && b==0)printf("Origin\n");
        if(a==0 && b!=0)printf("y-axis\n");
        if(a!=0 && b==0)printf("x-axis\n");
    }
}