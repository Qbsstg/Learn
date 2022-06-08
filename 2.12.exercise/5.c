//
// Created by wuyan on 2022/6/9.
//

#include <stdio.h>

void br(void);

void ic(void);

int main(void) {

    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();

    return 0;
}

void br() {
    printf("Brazil,Russia");
}

void ic() {
    printf("India,China");
}