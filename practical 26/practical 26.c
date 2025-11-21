//practical 26
#include <stdio.h>
#include <math.h>

float input() {
    float x;
    scanf("%f", &x);
    return x;
}

int isValid(float a, float b, float c) {
    return (a+b>c && a+c>b && b+c>a);
}

float area(float a, float b, float c) {
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

void solve() {
    float a,b,c;
    printf("Enter three sides: ");
    a = input();
    b = input();
    c = input();

    if(isValid(a,b,c)) {
        printf("Valid Triangle\n");
        printf("Area = %.2f\n", area(a,b,c));
    } else {
        printf("Invalid Triangle\n");
    }
}

int main() {
    solve();
     printf("maitry chapadia_25ce013");
    return 0;
}

