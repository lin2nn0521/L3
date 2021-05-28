#include <stdio.h>
#include <stdlib.h>

int Largest(int a ,int b, int c )
{
    int Max=a;
    if(Max<b)
    {
        Max=b;
    }
    else if(Max<c)
    {
        Max=c;
    }
}
int main()
{
    int d, e, f ;
    printf("請輸入三個整數並以空白區隔\n");
    scanf("%d  %d %d",&d,&e,&f);
    printf("最大值為:%d",Largest(d,e,f));
    return 0;
}
