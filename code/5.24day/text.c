#include <stdio.h>
 

 /*第二章  顺序结构*/
 /*printf函数中  如出现 %% 这种情况 直接输出
 printf("%%d\n",a);
输出:%d
%d对应整型，%f对应单精度实型，
%c对应字符型，%o对应八进制无符号整型，
%x对应无符号十六进制整型，%u对应无符号整型，
%e对应指数型，%s对应字符串型。
可在%和格式字符之间加一个数来控制数据所占的宽度和小数位数。
*/

/*第三章  选择结构*/
/*①关系运算符   
    非0为逻辑真   0为逻辑假。
②逻辑运算符
    与（&&  同真为真）、或（||  一真即真）、非（！ 反向操作）
    注意短路现象，例a++||b++，如果表达式a++的值非零，则表达式b++不再执行。
③if语句
    if语句可以嵌套，这时else总是与离它最近的且没有与else匹配的if匹配。
④条件运算
    三目运算符：表达式1?表达式2:表达式3
    表达式 非0  等于表达式2的值
    表达式 为0  等于表达式3的值
⑤Switch语句
    Switch后小括号里面的表达式不能为实型，case后表达式不能有变量
*/

/*第四章   循环结构！！！！*/
/*①三种循环结构
    while   
    do-whil() 最后的while();   后面一定要有分号
    for()
②break与continue    
    break是终止所在的整个循环，continue是提前结束本轮玄幻
    break可出现在循环结构与Switch中，continue只出现在循环结构中。
③循环的嵌套
    循环里面还有循环，计算要一层一层的分析，通常是处理二维数组
④循环结构比较复杂，应用性比较强，
*/

/*第五章   字符型数据  位计算*/
/*①字符常量
    字符常量只能包括一个字符，并用一对单引号括起来，例  'a'
    ASCII码：'0'=48
             'A'=65
             'a'=97
             '(Space)=32'
②转义字符
    '\n'
    '\101'表示 8进制（最高位不超过8）的 101  转换为十进制65  字符A
    '\x41'表示 16进制（一般在前面有x标识）的 41  转换为十进制65  字符A
③字符型数据可以和整形数据相互转换
    '0'-0=48
    'A'+32='a'
    char a=65;printf("%d,%c",a,a);结果为：65A
④位运算符
    异或运算的规则：0异或1得到1，0异或0得到0，1异或1得到0。可记为“相同为0，不同为1”。
⑤putchar与getchar函数
    输出或输入单个字符，stdio.h中的库函数 
*/

/*第六章   函数*/
/*① 类型
    函数类型  函数名(类型1 形参1，类型2 形参2，……)
    函数类型默认为int型
②库函数

③函数的返回值
    函数通过return语句返回一个值，返回的值的类型要与函数类型一样，return只执行一次，执行完退出函数
④函数的声明
    函数要“先定义后调用”或“先声明再调用后定义”，函数的声明一定要有函数名，函数返回值类型，函数参数类型，但不一定要有形参的名称
⑤函数的调用
    程序从上往下执行，遇到函数名后，把值传给调用函数，当程序得到返回值或调用函数结束，再向下执行。
⑥函数的参数及值传递
    形参：
    实参：
⑦函数的递归调用
    函数直接或间接的调用自己称为函数的递归调用。
⑧要求掌握的库函数
    sqrt()算术平方根函数
    fabs()绝对值函数
    pow()冥函数
    sin()正弦函数    
*/ 

/*第七章   指针*/ 
/*①指针变量
    指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。
    要理解指针就要先理解计算机的内存。计算机内存会被划分为按顺序编号的内存单元。每个变量都是存储在内存单元中的，称之为地址。 
    指针变量是用来存储地址的，而一般变量是存储数值
    指针变量可指向任意一种数据类型
②指针变量的定义
    类型名 *指针变量名。
    二维指针  int **p; 可以理解为(int *)类型
③指针变量的初始化
    指针变量在使用前必须要初始化，把一个具体的地址赋给它，否则引用时会有副作用
    如果不指向任何数据  就赋“空值”NULL。
④指针变量的引用
    &是取地址符
    *是间接访问运算符
    它们是互逆的两个运算符   在指针变量名钱加间接访问运算符就等价它所指向的量
    
    #include <stdio.h>
    int main(void) {
    int a=10;
    int *p=NULL;
    p=&a;
    printf("a的地址:%p\n",&a);
    printf("a的指:%d\n",a);
    printf("p的地址:%p\n",p);
    printf("p的指:%d\n",*p);
    }
    输出：
        a的地址:0x123
        a的值:10
        p的地址:0x123
        p的值:10
⑤指针的运算
    printf("%p",p)   输出地址
    printf("%d",*p)   输出值

    *p++和(*p)++之间的区别：
        *p++是地址的变化，(*p)++是 指针变量对应值的变化
        *p++ 会在下一步改变 *p的地址
        (*p)++ 会在下一步改变 *p所对应变量的值
            int main(void) {
                int a=10;
                int *p=NULL;

                p=&a;

                printf("a的地址:%p\n",&a);
                printf("a的指:%d\n",a);

                printf("p的地址:%p\n",p);
                printf("p的指:%d\n",(*p)++);

                printf("*p++的变化:%d\n",*p);
                printf("*p++的变化:%p\n",p);
            }
*/

/*第八章   数组*/
/*①数组的定义
    一组 具有相同类型的数据的集合
    格式为：类型名  数组名[常量表达式]      数组所占字节数为元素个数和类型所占字节数的乘积
②数组的初始化
    

*/ 
    

// #include <stdio.h>
// int main(void) {
//     int a=10;
//     int *p=NULL;

//     p=&a;

//     printf("a的地址:%p\n",&a);
//     printf("a的指:%d\n",a);

//     printf("p的地址:%p\n",p);
//     printf("p的指:%d\n",*p);
// }

#include <stdio.h>
int main(){
    int i;
    for (int i = 1; i < 30; i++)
    {
        printf("%d\n",i);
        i++;
        /* code */
    }
    printf("At last is %d",i);
}
