#include<stdio.h>

long pyn=535225;
long e=521;
long a[15];
long b[15];
long c[15];

int main(){
    long x,y,z;
    long count;
    b[0]=pyn;
    b[1]=e;

    for(int i=0;;i++){
        y=b[i];
        count=0;
        while((y-b[i+1])>=0){
            count++;
            y=y-b[i+1];
        }
        a[i+1]=count;
        b[i+2]=y;

        printf("%ld = %ld*%ld+%ld\n",b[i],a[i+1],b[i+1],b[i+2]);
        if(b[i+2]==1)break;
    }

    
    return 0;
}