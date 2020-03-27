//如何尽量少的使用乘法运算完成阶乘表的打印
#if0
#include <stdio.h>

int main(){
    int i=1,fact=1;
    
    while(i<=10){
        fact=fact*i;
        printf("%d!=%d\n",i,fact);
        i++;
    }
    return 0;
}
#endif
