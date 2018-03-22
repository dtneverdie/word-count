#include<stdio.h>
int main()
{
    int i;
    int b = 1;
    int c;
    for (i = 9; i >0; i--)
    {
        c = 2 * (b + 1);     
        b = c;
    }
    printf("总共摘了%d个桃子\n", b);//这是一个注释
    return 0;
}