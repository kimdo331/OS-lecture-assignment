#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#define __NR_hello 436
// #define __NR_swrite 437
// #define __NR_sread 438

int main() {

    int n=0;
    n = syscall(__NR_hello, 9, 7);
    printf("return value: %d\n", n);

    return 0;
}