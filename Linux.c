#include<stdio.h>

void sswap(int *p1,int *p2)
{
    //*��ȡֵ������
    int p = *p1;
    *p1 = *p2;
    *p2 = p;
}

int main()
{
    int x,y,z;
    int *p1,*p2,*p3;
    scanf("%d%d%d",&x,&y,&z);

    p1 = &x;// ָ��ָ���ַ
    p2 = &y;
    p3 = &z;
    //�����п��������ǰ�ʲô˳�����

    if(x > y) sswap(p1,p2);
    if(x > z) sswap(p1,p3);
    if(y > z) sswap(p2,p3);
    printf("%d %d %d",x,y,z);
}