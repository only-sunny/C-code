### 阶乘

N的阶乘就是 从1到N的累计，即是   6的阶乘等于

~~~c
1*1=1
1*2=2
2*3=6
6*4=24
24*5=120
120*6=720
~~~

简单方法

~~~c
#include "stdio.h"
int main(){
    int j=1;
    int n;
    printf("请输入阶乘数：");
    scanf("%d",&n);
    for (int i = 1; i <=n ; i++) {
        j=i*j;
        printf("%d\n",j);
    }
}
/*输出
1
2
6
24
120
720
*/
~~~

函数调用法：

~~~c
#include "stdio.h"
int jiecheng(int n);
int main(){
    int s;
    printf("输入阶乘数：");
    scanf("%d",&s);
    jiecheng(s);
    return 0;
}
int jiecheng(int n){
    int j=1;
    for (int i = 1; i <=n ; i++) {
        j=i*j;
        printf("%d\n",j);
    }
    return j;
}
/*输出
1
2
6
24
120
720
*/
~~~

##### 冒泡排序

比较相邻的元素。如果第一个比第二个大，就交换他们两个。

对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。这步做完后，最后的元素会是最大的数。

针对所有的元素重复以上的步骤，除了最后一个。

持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。

![](https://www.runoob.com/wp-content/uploads/2019/03/bubbleSort.gif)

~~~c
#include "stdio.h"
int main(){
    int t,i,j;
    int a[]={2,5,3,8,4};
    for (int k = 0; k <5-1 ; k++) {
        for (int l = 0; l <5-k ; l++) {
            if(a[l]>a[l+1]){
                t=a[l];
                a[l]=a[l+1];
                a[l+1]=t;
            }
        }
    }
    printf("输出排列好的数组:\n");
    for (int k = 0; k <5 ; ++k) {
        printf("a[%d]=%d\n",k,a[k]);
    }
    return 0;
}
/*
输出排列好的数组:
a[0]=2
a[1]=3
a[2]=4
a[3]=5
a[4]=8
*/
~~~



