#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{
 char first[255], last[255];
 askname(first, last);
 printf("Hello 123, %s %s!\n", first);
 printf("updated another rep");
 printf(1);
 printf(2);
 return 0;
}
