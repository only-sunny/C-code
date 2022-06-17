#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,t;
    int a[5]={5,4,3,2,1};
    for(j=1;j<5-1;j++){
        for(i=0;i<5-j-1;i++){
            if(a[i]<a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(t=0;t<5;t++){
        printf("number is %d\n",a[t]);
    }
    return 0;
}
