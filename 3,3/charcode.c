#include <stdio.h>
#include <stdint.h>

//
// Created by Qbss on 2022/7/7.
//
int main(void) {

    char ch;
    int_fast8_t a ;

    printf("Please enter a character.\n");
    scanf("%c",&ch);
    printf("The code for %c is %d.\n",ch,ch);

    return 0;
}
