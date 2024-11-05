/*
* @Time    : 24-11-6 上午12:05
* @Author  : Captain
* @File    : ex_02_04.c
*/
#include <stdio.h>

void jolly(void);

void deny(void);

int main(void) {
    jolly();
    jolly();
    jolly();
    deny();
}

void jolly(void) {
    printf("For he's a jolly good fellow!\n");
}

void deny(void) {
    printf("Which nobody can deny!\n");
}
