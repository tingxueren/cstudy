#include <stdio.h>
#include <string.h>

void foo(char *str)
{
    char buf[10];
    strcpy(buf, str);
    printf("%s\n%s\n",str,buf);//长度不够，最后结果溢出，运行崩溃。

}

int main(void)
{
    char str[] = "hello world,this is a simple programe.";//为“hello world”时能运行，很奇怪，此时也
    //应该溢出才是。
    foo(str);
    return 0;
}
