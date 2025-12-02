#include <stdio.h>

int gl = 1;
int f(void)
{
    return 2;
}

namespace First {
    int gl = 3;
    int f(void) {
        return 4;
    }
}

namespace Second {
    int gl = 5;
    int f(void) {
        return 6;
    }
}

namespace Muf = First;

int main(void) {
    printf("gl: [%d]\n", gl);
    printf("f(): [%d]\n\n", f());

    printf("First::gl: [%d]\n", First::gl);
    printf("First::f(): [%d]\n\n", First::f());

    printf("Second::gl: [%d]\n", Second::gl);
    printf("Second::f(): [%d]\n\n", Second::f());

    printf("Muf::gl: [%d]\n", Muf::gl);
    printf("Muf::f(): [%d]\n\n", Muf::f());

    printf("::gl: [%d]\n", ::gl);
    printf("::f(): [%d]\n\n", ::f());

    return (0);



}
