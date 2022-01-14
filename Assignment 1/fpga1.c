#include<stdio.h>
int main()
{
    unsigned char F;
    unsigned char one= 0x01;
    unsigned char U=0x01, V=0x01, W=0x00;
    
   
    F=(U|(~V))&(U|W)&(V|(~W));

    printf("Inputs U,V,W are: %x%x%x", one&U,one&V,one&W);
    printf(" ");
    printf("\n Output F= %x", one&F);
    return 0;
}