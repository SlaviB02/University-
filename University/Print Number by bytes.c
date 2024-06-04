#include <stdio.h>

int main()
{
   int x=2022;
    unsigned char * pointer=(unsigned char*)&x;
    for(int i=0;i<4;i++)
    {
        printf("\t%.2x",pointer[i]);
    }
}
