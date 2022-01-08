#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a;
    while(scanf("%d",&a)==1){
        if(a<=800){
            printf("%1.1f\n",a*0.9);
            continue;
        }
        if(a<1500){
            printf("%1.1f\n",a*0.81);
            continue;
        }
        printf("%1.1f\n",a*0.9*0.79);
    }
}

