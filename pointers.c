#include <stdio.h>

int main() {

    //1
    char c = 's';
    int i = 7;
    long l = 284923;

    //2
    printf("hexadecimal c memory address = %p\n", &c);
    printf("decimal c memory address = %lu\n", &c);
    printf("hexadecimal i memory address = %p\n", &i);
    printf("decimal i memory address = %lu\n", &i);
    printf("hexadecimal l memory address = %p\n", &l);
    printf("decimal l memory address = %lu\n", &l);

    //3
    char *cp = &c;
    int *ip = &i;
    long *lp = &l;

    //4
    printf("cp = %p\n", cp);
    printf("ip = %p\n", ip);
    printf("lp = %p\n", lp);

    //5
    *cp = 'k';
    *ip = 7;
    *lp += 93;

    printf("c = %c\n", c);
    printf("i = %i\n", i);
    printf("l = %ld\n", l);

    //6
    unsigned int ui = 27;

    int *pui = &ui;
    char *pcui = &ui;

    //7
    printf("pui: %p \npui points to: %u\n", pui, *pui);
    printf("pcui: %p \ncpui points to: %u\n", pcui, *pcui);

    //8
    printf("hexadecimal ui = %x\n", ui);
    printf("decimal ui = %u\n", ui);

    //9
    int n;
    for (n = 0; n < 4; n++) {
        printf("%hxx\n", *(pcui + n));
    }

    for (n = 0; n < 4; n++) {
        printf("%hhu\n", *(pcui + n));
    }

    //10
    for (n = 0; n < 4; n++) {
        *(pcui + n) += 1;
        printf("Hexidecimal: %x\n", ui);
        printf("Decimal: %u\n", ui);
    }

    for (n = 0; n < 4; n++) {
        printf("%hhx\n", *(pcui + n));
    }

    for (n = 0; n < 4; n++) {
        printf("%hhu\n", *(pcui + n));
    }

    //11
    for (n = 0; n < 4; n++) {
        *(pcui + n) += 16;
        printf("Hexidecimal: %x\n", ui);
        printf("Decimal: %u\n", ui);
    }

    for (n = 0; n < 4; n++) {
        printf("%hhx\n", *(pcui + n));
    }

    for (n = 0; n < 4; n++) {
        printf("%hhu\n", *(pcui + n));
    }

    return 0;
}
