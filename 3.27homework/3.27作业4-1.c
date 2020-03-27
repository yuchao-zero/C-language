/*作业
用最少的计算步骤完成素数判断
以取模运算最少作为标准
*/
#include <stdio.h>

int main()
{
    int i,x;
    int isprime;
    isprime=1;
    
    scanf("%d",&x);
    for(i=2;i<x;i++){
        if(x%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1){
        printf("是素数\n");
    }else{
        printf("不是素数\n");
    }
    return 0;
}
