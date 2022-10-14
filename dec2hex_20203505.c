#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef unsigned char* pointer;

bool is64bit()
{
    return sizeof(long) == 8;
}

bool isBigEndian(pointer last_bits, size_t num) {
    return ((num & 0xff) == last_bits[3]);
}

void le_show_bytes(pointer number, int len)
{
    for (int i = len ; i >0; i--) {
        printf("%.2x", number[i-1]);
    }
    printf("\n");
}

void be_show_bytes(pointer number, int len) {
    for (int i = 0; i < len; i++) {
        printf("%.2x", number[i]);
    }
    printf("\n");
}


int main(int argc, char* argv[])
{
    if (argc < 2) {
        printf("Usage: ./a.out number\n");
        exit(0);
    }
    unsigned int a = atoi(argv[1]);
    printf("ARCH=%d\n", is64bit() ? 64 : 32);
    printf("ORDERING=%s\n", isBigEndian((pointer)&a, a) ? "BIG_ENDIAN" : "LITTLE_ENDIAN");

    printf("MYANS: DEC=%d HEX=", a);
    isBigEndian((pointer)&a, a) ?
        be_show_bytes((pointer)&a, sizeof(unsigned int)) : le_show_bytes((pointer)(&a), sizeof(unsigned int));

    printf("CHECK: DEC=%d HEX=%.8x\n", a, a);
    return 0; 
}
