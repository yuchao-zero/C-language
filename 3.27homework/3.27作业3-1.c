/*根据输入的月份输出该月的天数
 假设该年份不是闰年 怎么用最少的分支结构完成
 
*/

#if 0
#include <stdio.h>

int main(){
    int m;
    
    printf("请输入月份:");
    scanf("%d",&m);
    
    if(m==2)
        printf("%d月有28天\n",m);
    else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        printf("%d月有31天\n",m);
    else
        printf("%d月有30天\n",m);
    
    return 0;
}
#endif
