//
// Created by wuyan on 2022/6/8.
//

#include <stdio.h>

/**
 * 函数原型（prototype），告知编译器在程序中要使用该函数
 * 函数原型是一种声明形式，告知编译器正在使用某函数，因此函数原型也被成为函数声明（function declaration）
 * 函数声明还指明了函数的属性。
 * 例如：butler()函数原型中的第1个void声明，butler()函数没有返回值（通常，被调函数都会向主调函数返回一个值，但该函数并没有）。
 *     第2个void（butler(void)中的void）的意思是butler()函数不带参数。因此，当编译器运行至此，会检查butler()是否使用得当。
 *
 */
void butler(void);

int main(void) {

    printf("I will summon the butler function.\n");
    /**
     * 函数调用（function call）
     */
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    return 0;
}

/**
 * 函数定义（function definition）
 */
void butler(void) {
    printf("You rang,sir?\n");
}
