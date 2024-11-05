/*
* @Time    : 24-11-6 上午12:06
* @Author  : Captain
* @File    : ex_02_05.c
*/
#include <stdio.h>

void br(void);

void ic(void);

int main(void) {
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
}

void br(void) {
    printf("Brazil, Russia");
}

void ic(void) {
    printf("India, China");
}
