#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <picalc.h>
#include <benchmark.h>

static double convtime(struct timespec t) {
    return t.tv_sec + t.tv_nsec / 1.0e9;
}

void benchmark(int32_t n, int32_t e) {
    struct timespec ctime;
    timespec_get(&ctime, TIME_UTC);
    double a = convtime(ctime);
    for(int64_t i = 0; i < n; i++) {
        printf("%16.9f\n", compute_pi(e));
    }
    timespec_get(&ctime, TIME_UTC);
    double b = convtime(ctime);
    printf("%f Seconds\n", b-a);
}
