#include <benchmark.h>
#include <stdio.h>

int main() {
    puts("C");
    for(int i = 0; i < 10; i++) {
        benchmark(100, 30000000);
    }
    return 0;
}
