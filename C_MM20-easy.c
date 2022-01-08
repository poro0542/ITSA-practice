#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        char array[20];
        int i=0;
        for(i;a!=0;i++){
            int temp=a%16;
            if(temp==0)array[i]='0';
            if(temp==1)array[i]='1';
            if(temp==2)array[i]='2';
            if(temp==3)array[i]='3';
            if(temp==4)array[i]='4';
            if(temp==5)array[i]='5';
            if(temp==6)array[i]='6';
            if(temp==7)array[i]='7';
            if(temp==8)array[i]='8';
            if(temp==9)array[i]='9';
            if(temp==10)array[i]='A';
            if(temp==11)array[i]='B';
            if(temp==12)array[i]='C';
            if(temp==13)array[i]='D';
            if(temp==14)array[i]='E';
            if(temp==15)array[i]='F';
            a/=16;
        }
        for(int j=i-1;j>=0;j--){
            printf("%c",array[j]);
        }
        printf("\n");
    }
}

