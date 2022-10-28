#include "stdio.h"
#include "string.h"
main( )
{   char *p[10]={"abc", "aabdfg", "dcdbe", "abbd", "cd"};
    printf("%d\n",strlen(p[4]));
}