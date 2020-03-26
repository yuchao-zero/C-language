/* 练习1-8

 编写一段程序，像下面这样显示读取到的两个整数的乘积。

 请输入两个整数。
 整数1:27↙
 整数2:35↙
 它们的乘积是945。
 */

#include <stdio.h>

int main(){
    int n1,n2,p;
    
    printf("请输入两个整数。\n");
    printf("整数1：");
    scanf("%d",&n1);
    printf("整数2：");
    scanf("%d",&n2);
    
    p=n1*n2;
    
    printf("它们的乘积是%d。\n",p);
    
    return 0;
}
