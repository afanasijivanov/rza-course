#include <stdio.h>
#include <limits.h>

// Find minimum value in an array of integers
int FindMinimum(const int* signals, int size) {
    if (size <= 0) {
        return INT_MAX;
    }
    
    int min = signals[0];
    for (int i = 1; i < size; i++) {
        if (signals[i] < min) {
            min = signals[i];
        }
    }
    
    return min;
}

// Find maximum value in an array of integers
int FindMaximum(const int* signals, int size) {
    if (size <= 0) {
        return INT_MIN;
    }
    
    int max = signals[0];
    for (int i = 1; i < size; i++) {
        if (signals[i] > max) {
            max = signals[i];
        }
    }
    
    return max;
}

// Find avg value
 double CalculateAverage(const int* signals, int size) {

    double avg = 0;
    for (int i = 0; i < size; i++) {
        avg+= signals[i];
    }

    avg = avg / size;
    return avg;
}

// Find minimal index
int FindMinimumindex(const int* signals, int size) {
    if (size <= 0) {
        return INT_MAX;
    }
    
    int min = signals[0];
    int minindex = 0;
    for (int i = 1; i < size; i++) {
        if (signals[i] < min) {
            min = signals[i];
            minindex = i;
        }
    }
    
    return minindex;
}

int main() {
    // Example signal data
    int signals[] = {5, -3, 10, 1, 8, -7, 4, 2};
    int size = sizeof(signals) / sizeof(signals[0]);
    
    int min_value = FindMinimum(signals, size);
    int max_value = FindMaximum(signals, size);
    double avg_value = CalculateAverage(signals, size);
    int min_index = FindMinimumindex(signals, size);

    printf("Signals: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", signals[i]);
    }
    printf("\n");
    
    printf("Minimum value: %d\n", min_value);
    printf("Maximum value: %d\n", max_value);
    printf("Average value: %f\n", avg_value);
    printf("Index minimum: %d\n", min_index);
    return 0;
}
