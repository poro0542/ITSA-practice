#include<stdio.h>
#include<stdlib.h>

int main(){
    int  a1,b1,a2,b2;
    while(scanf("%d %d %d %d",&a1,&b1,&a2,&b2)==4){
        a1=a1*60+b1;
        a2=a2*60+b2;
        int m=a2-a1;
        if(m<=120){
            printf("%d\n",(m/30)*30);
            continue;
        }
        if(m<=240){
            m-=120;
            printf("%d\n",(m/30)*40+120);
            continue;
        }
        m-=240;
        printf("%d\n",(m/30)*60+280);

        
    }
}