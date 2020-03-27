/*
我们已经学习过摄氏和华氏温度的转换方法，请运用所学知识，打印下方所示温度转换表。
220和104中间有4个空格; 没有华氏260和280
     F      C
    40      4
    60     15  //6行到13行有5个空格
    80     26
   100     37
   120     48
   140     60
   160     71
   180     82
   200     93
   220    104   //14行到16行F和C之间四个空格
   240    115
   300    148
*/
#if 0
#include <stdio.h>

int main(){
    int f;
    int c;
    printf("  F      C\n");
    
    for(f=40;f<=300;f=f+20){
        
        while(f==260||f==280){
            f=f+20;
        }
        c=5*(f-32)/9;
    
        printf("%3d    %3d\n",f,c);
        
    }
        
        return 0;
    
}
#endif

/*
#include <stdio.h>

int main(){
    int f;
    int c;
    printf("   F      C\n");
    
    for(f=40;f<=300;f=f+20){
        while(f==260||f==280){
            f=f+20;
        }
        c=5*(f-32)/9;
        if(f==40){
        printf("  %d      %d\n",f,c);    //纪念一下很蠢的代码
            
        }else{
            if(f>40&&f<=80){
                printf("  %d     %d\n",f,c);
            }else{
                if(f>80&&f<=200){
                    printf(" %d     %d\n",f,c);
                }else{
                    printf(" %d    %d\n",f,c);
                }
            }
        }
    }
    
    return 0;
}
*/
