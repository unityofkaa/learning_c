/*
* @Time    : 24-11-6 上午12:05
* @Author  : Captain
* @File    : ex_01_01.c
*/
#include<stdio.h>

int main(void) {
    int inch;
    // 获取用户输入英寸
    scanf("%d", &inch);
    printf("inch = %d,change to cm=%f", inch, inch * 2.54);
}
