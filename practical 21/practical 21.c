 // practical 21
  #include <stdio.h>

int main() {
    int num[10];
    int pos = 0, neg = 0, even = 0, odd = 0, zero = 0;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);

        // Check positive, negative, or zero
        if (num[i] > 0)
            pos++;
        else if (num[i] < 0)
            neg++;
        else
            zero++;

        // Check even or odd
        if (num[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\n--- RESULTS ---\n");
    printf("Total Positive Numbers : %d\n", pos);
    printf("Total Negative Numbers : %d\n", neg);
    printf("Total Zeros            : %d\n", zero);
    printf("Total Even Numbers     : %d\n", even);
    printf("Total Odd Numbers      : %d\n", odd);
    printf("maitry chapadia_25ce013");

    return 0;
}

