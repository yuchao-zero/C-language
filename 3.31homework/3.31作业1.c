//大小写字母转换
#if 0
#include <stdio.h>

int main(){
    char ch;
    while((ch=getchar()) !=EOF){             //使用！=EOF是为了持续读入字符，如果没有则只会读入一个字符
        if(ch>='a'&&ch<='z')
            ch=ch+'A'-'a';
        else if(ch>='A'&&ch<='Z')
            ch=ch+'a'-'A';
        printf("%c",ch);
    }
    return 0;
}

/*
 //getchar和putchar的研究
 #include <stdio.h>
 
 int main(){
 char a;
 while((a=getchar()) !=EOF){
 putchar(a);
 
 }
 printf("\n");
 return 0;
 }
 */
#endif
