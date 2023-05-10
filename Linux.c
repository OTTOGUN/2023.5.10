#include<stdio.h>

void sswap(int *p1,int *p2)
{
    //*有取值的作用
    int p = *p1;
    *p1 = *p2;
    *p2 = p;
}

int main()
{
    int x,y,z;
    int *p1,*p2,*p3;
    scanf("%d%d%d",&x,&y,&z);

    p1 = &x;// 指针指向地址
    p2 = &y;
    p3 = &z;
    //不运行看看这里是按什么顺序输出

    if(x > y) sswap(p1,p2);
    if(x > z) sswap(p1,p3);
    if(y > z) sswap(p2,p3);
    printf("%d %d %d",x,y,z);
}