#include <iostream>
#include <stdlib.h>

#include "test1.h"
#include "test2.h"

long IntMultToLong(int i) {
    long j = i * i;
    return j;
}

int main(int, char**) {
    std::cout << "Hello, world!\n";
    print_test2();
    print_test1();

    void* p = malloc(10);
    delete p;

    IntMultToLong(2000000000);
    return 0;
}
