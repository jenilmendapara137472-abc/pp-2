#include <stdio.h>

union test {
    int x;
    float y;
};

struct test2 {
    int x;
    float y;
};

int main() {
    union test u;
    struct test2 s;

    printf("Size of Union: %lu\n", sizeof(u));
    printf("Size of Structure: %lu\n", sizeof(s));

    return 0;
}
