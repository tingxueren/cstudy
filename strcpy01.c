#include <stdio.h>
#include <string.h>

void foo(char *str)
{
    char buf[10];
    strcpy(buf, str);
    printf("%s\n%s\n",str,buf);//���Ȳ������������������б�����

}

int main(void)
{
    char str[] = "hello world,this is a simple programe.";//Ϊ��hello world��ʱ�����У�����֣���ʱҲ
    //Ӧ��������ǡ�
    foo(str);
    return 0;
}
