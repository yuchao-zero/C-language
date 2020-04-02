/*

//1. 无重复字符的最长子串


#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
#include <string.h>  //提供strlen函数的原型

#define SIZE 10
int main(void)
{
    
    char a[SIZE]="abcabcbb";
    int b[SIZE];
    int i,j,k;
    for(i=0 ; a[i] ; i++){
        for(b[i]=1,j=i+1 ; a[j] ; j++ , b[i]++){
            for(k=i ; k<j ; k++){
                if(a[k] == a[j]){
                    break;
                }
            }
            if(k<j){
                break;
            }
        }
    }
    int max=b[0];
    for(i=0 ; i<strlen(a) ; i++){
        if(b[i]>max)
            max=b[i];
    }
    printf("%d\n",max);
    
    return 0;
}

*/
//2. 只出现一次的数字
#include <stdio.h>

int singleNumber(int* nums, int numsSize);
int main()                                         //主函数验证
{
    int a[5] = {4,1,2,1,2};
    printf("%d\n",singleNumber(a,5));
    return 0;
}

int singleNumber(int* nums, int numsSize){
    int sc=nums[0];
    for(int i=1;i<numsSize;i++){
        sc=sc^nums[i];                          //异或，相同为0，不同为1
    }
    return sc;
}

