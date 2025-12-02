Problem : Reverse the Array (Neha’s Diary Entries)
Problem Story:

Neha keeps a diary of her daily exercise times (in minutes).
She wants to review her progress, but she prefers to see the latest day’s record first.

Write a program to help Neha reverse the order of her recorded exercise times.

✅ Task:

Given n numbers representing Neha’s daily exercise time, print them in reverse order.

🧠 Input Format:

The first line contains an integer n — the number of days.

The second line contains n space-separated integers representing exercise times.
Output Format:

Print the exercise times in reverse order on a single line separated by spaces.

🧩 Example 1:

Input
5
10 20 30 40 50

Output
50 40 30 20 10


  #include <stdio.h>

int main() {
    int n, i;

    // Input number of days
    scanf("%d", &n);

    int arr[n];

    // Input exercise times
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print in reverse order
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
