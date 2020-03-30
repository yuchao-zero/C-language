/*
实现计算第n项斐波拉契数列的函数(n >= 0)
 int fib(int n);
*/

#if 0
#include<stdio.h>

int fib(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return (fib(n-1)+fib(n-2));
}
 
int main()
{
    int i,n;
    printf("输入一个斐波那契数:");
    scanf("%d",&n);
    printf("斐波那契数列是：");
    for(i=0;i<n;i++){
        printf("%d\t",fib(i));
    }
    printf("\n");
    
    return 0;
}
#endif
