#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intSix [2][3];
    printf("請輸入六個整數並以空白區隔\n");
    for(int i =0 ; i<=1 ; i++)
        {
            for(int j=0 ; j<=2 ; j++)
            {
                scanf("%d",&intSix[i][j]);
            }
        }
    printf("------------------2*3矩陣如下------------------\n");
    for(int i =0 ; i<=1 ; i++)
        {
            for(int j=0 ; j<=2 ; j++)
            {
                printf("%d\t", intSix[i][j]);
            }
            printf("\n");
        }
    printf("------------------3*2矩陣如下------------------\n");
    for(int i =0 ; i<=2 ; i++)
        {
            for(int j=0 ; j<=1 ; j++)
            {
                printf("%d\t", intSix[j][i]);
            }
            printf("\n");
        }
    system("PAUSE");
    return 0;
}
