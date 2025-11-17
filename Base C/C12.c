
#include <stdio.h>

float sinus(float input) {
    float rad = input * 3.1415926535f / 180.0f;
    float term = rad;      
    float sum = term;
    int n = 1;

    while (term > 0.001f || term < -0.001f) {
        term *= -rad * rad / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }

    return sum;
}

int main() {
    float input;
    scanf("%f", &input);
    printf("%.3f", sinus(input));
    return 0;
}

