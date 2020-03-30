/*
 实现计算长方体体积的函数
double cuboid(double length, double width, double height);
*/

#include <stdio.h>

double cuboid(double length, double width, double height);

int main(){
    double length,width,height;
    
    printf("请输入长方体的长宽高：");
    scanf("%lf %lf %lf",&length,&width,&height);
    
    printf("长方体的体积是%lf\n",cuboid(length,width,height));

    //cuboid(length,width,height);
    
    return 0;
}

double cuboid(double length, double width, double height){
    double volume=length *width *height;
    
    return volume;
}

