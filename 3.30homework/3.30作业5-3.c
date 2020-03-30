/*
实现三个数中最大值的函数：
int max(int a, int b, int c)
*/
#if 0
#include <stdio.h>
int max(int a, int b, int c);

int main(){
    int a,b,c;
    
    printf("enter three digit:");
    scanf("%d %d %d",&a,&b,&c);
    
    printf("最大值是：%d\n",max(a,b,c));
    
    return 0;
}

int max(int a, int b, int c){
    int ret;
    if(a>b&&a>c)
        ret=a;
    else if (b>a&&b>c)
        ret=b;
    else if (c>a&&c>b)
        ret=c;
    
    return ret;
}
#endif
