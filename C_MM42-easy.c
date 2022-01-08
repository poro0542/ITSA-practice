#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        double s=0,x=1,y=-1;
        for(int i=1;i<=a;i++){
            if(i%2==1)s+=x/(2*i-1);
            else s+=y/(2*i-1);
        }
        printf("%1.3lf\n",s);
    }
}

