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
    printf("�ܹ�ժ��%d������\n", b);//����һ��ע��
    return 0;
}