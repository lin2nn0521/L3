#include <stdio.h>

int main()
{
    int N [9][9];
    int i,j;
    for(i=0; i<=8; i++)
    {
        for(j=0; j<=8; j++)
        {
            N[i][j]=(i+1)*(j+1);
            printf("    %2d",  N[i][j]);
        }
        printf("\n");
    }
    system("PAUSE");
    return 0;
}
