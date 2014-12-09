#include <stdio.h>

short pack(char c1, char c2) {
    return ( ((short)c1) << 8) | c2;
}

void unpack(short s, char *c1, char *c2) {
    *c1 = (char)s;
    *c2 = (char)*((char*)(&s) + 1);
}


int main(int argc, char const* argv[])
{
    short i = pack(0x12, 0x34);
    printf("%x \n", i);

    char c1, c2;
    unpack(i, &c1, &c2);

    printf("c1 is %x c2 is %x\n", c1, c2);

    return 0;
}
