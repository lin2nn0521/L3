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
    printf("�п�J�T�Ӿ�ƨåH�ťհϹj\n");
    scanf("%d  %d %d",&d,&e,&f);
    printf("�̤j�Ȭ�:%d",Largest(d,e,f));
    return 0;
}
