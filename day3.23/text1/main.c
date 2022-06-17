#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j,t;
    char ch;
    int a[] ={};
    while(1){
        printf("Enter number:");
        scanf("%d",a[i]);
        printf("y/n?\n");
        scanf("%c",&ch);
        if((ch=='y')||(ch=='Y')){
            i++;
            continue;
        }
        else
            break;
    }
    for(int j=0;j<sizeof(a);j++){
        printf("%d",a[j]);
    }
}
