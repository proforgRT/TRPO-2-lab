#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{
 char first[255], last[255];
 askname(first, last);
 printf("Hello,s %s %s!\n", first, last);
 printf("Terminal");
 #for stash
 return 0;
}
