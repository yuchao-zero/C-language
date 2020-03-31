//作业：统计100个随机数的分布，纵向显示分布图


#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main ()
{
    // 生成100个随机数的数组, 分布到0-100
    srand((unsigned int)time(NULL));
    int a[100];
    int i,j;
    int bunpu[11] = {0};  /*分布图*/
    for (i = 0; i < 100; i++) {
        a[i] = rand() % 101;
    }
    for (i = 0; i < 100; ) {
        printf("%4d", a[i]);
        i++;
        if (i%10 == 0) {
            printf("\n");
        }
    }
    printf("\n纵向分布：\n\n");
    
    for (i = 0; i < 100; i++) {
        bunpu[a[i] / 10]++;
    }
    /*                                      //横项分布
     puts("\n---分布图---");
     printf("  100:");
     for (j = 0; j < bunpu[10]; j++)
     putchar('*');
     putchar('\n');
     
     for (i = 9; i >= 0; i--)
     {
     printf("%2d-%2d:", i * 10, i * 10 + 9);
     for (j = 0; j < bunpu[i]; j++)
     putchar('*');
     putchar('\n');
     }
     */
    int max=bunpu[0];
    for (i=1;i<11;i++)
    {   if (bunpu[i]>max)
        max=bunpu[i];
    }
    for (;max>0;max--){
        for (j=0;j<11;j++){
            if (bunpu[j]>=max)
                printf ("   *");
            else
                printf ("    ");	
        }
        putchar ('\n');
    }
    putchar ('\n');
    for (i=0;i<45;i++){
        printf ("-");
    }
    putchar ('\n');
    for (i=0;i<11;i++){
        printf ("%4d",i*10);
        
    }
    putchar ('\n');
    return 0;
}
