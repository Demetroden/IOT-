
#include <stdio.h>

float cosin(float input) {
    float rad = input * 3.1415926535f / 180.0f;
    float term = 1.0f;      
    float sum = term;
    int n = 0;

    while (term > 0.001f || term < -0.001f) {
        term *= -rad * rad / ((2 * n+1) * (2 * n + 2));
        sum += term;
        n++;
    }

    return sum;
}

int main() {
    float input;
    scanf("%f", &input);
    printf("%.3f", cosin(input));
    return 0;
}

