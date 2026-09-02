#include <stdio.h>

int main() {
    int distance;
    float fuel, average_consumption;

    // Input total distance
    printf("Input total distance in km: ");
    scanf("%d", &distance);

    // Input total fuel spent
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);

    // Calculate average consumption
    average_consumption = distance / fuel;

    // Print the result with 3 decimal places to match expected output
    printf("Average consumption (km/lt) %f\n", average_consumption);

    return 0;
}



