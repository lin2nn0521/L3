#include <stdio.h>
#include <stdlib.h>

int main()
{
    int intSix [2][3];
    printf("�п�J���Ӿ�ƨåH�ťհϹj\n");
    for(int i =0 ; i<=1 ; i++)
        {
            for(int j=0 ; j<=2 ; j++)
            {
                scanf("%d",&intSix[i][j]);
            }
        }
    printf("------------------2*3�x�}�p�U------------------\n");
    for(int i =0 ; i<=1 ; i++)
        {
            for(int j=0 ; j<=2 ; j++)
            {
                printf("%d\t", intSix[i][j]);
            }
            printf("\n");
        }
    printf("------------------3*2�x�}�p�U------------------\n");
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
