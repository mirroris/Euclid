#include<stdio.h>
#include <stdlib.h>

long pyn=535225;
long e=521;
long a[30];
long b[30];
long c1[30];
long c2[30];

#define MAX 29

int main(){
    int N;
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
        if(b[i+2]==1){
            N=i+2;
            break;
        }
        if(i==MAX){
            printf("something wrong!\n");
            exit(1);
        }
    }

    c1[0]=-a[N-1];
    c2[0]=1;
    printf("1\t=");
    printf("%ld*%ld + %ld*%ld\n",c1[0],b[N-1],c2[0],b[N-2]);
    for(int i=1;i<(N-1);i++){
        c1[i]=-c1[i-1]*a[N-i-1]+c2[i-1];
        c2[i]=c1[i-1];
        printf("\t=%ld*%ld + %ld*%ld\n",c1[i],b[N-i-1],c2[i],b[N-i-2]);
    }

    return 0;
}