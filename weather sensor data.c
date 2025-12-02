Problem : Count Positive and Negative Numbers (Weather Sensor Data)
 Problem Story:

A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.

🖥 Output Format:

Print three lines as shown:
Positive = x
Negative = y
Zero = z

Example 1:

Input
6
3 -2 0 7 -5 8

Output
Positive = 3
Negative = 2
Zero = 1


  #include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, zero = 0;

    // Input number of readings
    scanf("%d", &n);

    int arr[n];

    // Input temperature readings
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    // Output results
    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d", zero);

    return 0;
}
