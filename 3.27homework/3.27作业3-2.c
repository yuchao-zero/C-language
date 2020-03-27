/*
逻辑运算运用(续)
[例3-7] 输入10个字符，统计其中的英文字母、数字字符和其他字符的个数。
int letter, digit, other, i;
char ch;
letter = 0;
digit = 0;
other = 0;
*/
#if 0
#include <stdio.h>

int main(){
    int letter=0,digit=0,other=0,i;
    char ch;
    printf("请输入10个字符：\n");
    for(i=1;i<=10;i++){
        scanf("%c",&ch);
    if(ch>='0'&&ch<='9'){
        digit++;
    }else{
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            letter++;
        }else{
            other++;
        }
    }
    }
    printf("英文字母个数为：%d\n",letter);
    printf("数字字符个数为：%d\n",digit);
    printf("其他字符个数为：%d\n",other);
    
    return 0;
}
#endif
