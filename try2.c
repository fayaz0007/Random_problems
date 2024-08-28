#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of integers (N): ");
    scanf("%d", &N);

    int numbers[N];
    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }
    int min_value = numbers[0];

    int max_value = numbers[0];

    double sum = 0;

    int most_frequent_value = numbers[0];
    int max_count = 1;
    int unique_values = 0;

    for (int i = 0; i < N; i++) {
       sum += numbers[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    double median_value;
    if (N % 2 == 0) {
        median_value = (numbers[N / 2 - 1] + numbers[N / 2]) / 2.0;
    } else {
        median_value = numbers[N / 2];
    }

    double avg_value = sum / N;
    double variance_value = 0;

    for (int i = 0; i < N; i++) {
        if (numbers[i] < min_value) {
            min_value = numbers[i];
        }
        if (numbers[i] > max_value) {
            max_value = numbers[i];
        }

        int current_value = numbers[i];
        int current_count = 0;
        for (int j = 0; j < N; j++) {
            if (numbers[j] == current_value) {
                current_count++;
            }
        }
        if (current_count > max_count) {
            max_count = current_count;
            most_frequent_value = current_value;
        }

        int is_unique = 1;
        for (int j = 0; j < i; j++) {
            if (numbers[j] == numbers[i]) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            unique_values++;
        }

        variance_value += (numbers[i] - avg_value) * (numbers[i] - avg_value);
    }
    variance_value /= N;

    printf("a. Min: %d\n", min_value);
    printf("b. Max: %d\n", max_value);
    printf("c. Avg: %lf\n", avg_value);
    printf("d. Most frequent value: %d\n", most_frequent_value);
    printf("e. Unique values: %d\n", unique_values);
    printf("f. Median: %lf\n", median_value);
    printf("g. Variance: %lf\n", variance_value);

    return 0;
}
