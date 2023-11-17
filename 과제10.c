#include <stdio.h>
#include <math.h>

double Deviation(double data[], int n) {
    double sum = 0.0, mean, standard_Deviation = 0.0;

    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    mean = sum / n;

    for (int i = 0; i < n; i++) {
        standard_Deviation += pow(data[i] - mean, 2);
    }

    return sqrt(standard_Deviation / n);
}

int main() {
    int n = 5;
    double data[5];

    printf("Enter 5 real numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &data[i]);
    }

    double result = Deviation(data, n);
    printf("Standard Deviation = %.3lf\n", result);

    return 0;
}
