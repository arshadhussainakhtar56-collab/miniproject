Problem title : HOSTEL ATTENDANCE TRACKER 
Assam Down Town University maintains a strict hostel monitoring system to ensure student safety.
Every hostel student must mark attendance daily.
The warden keeps attendance for 7 days (Monday to Sunday) for 10 students.

The attendance is stored in a 2D array A[10][7], where:
A[i][j] = 1 → Student i was Present on Day j

A[i][j] = 0 → Student i was Absent on Day j

Here:

i = Student number (1 to 10)

j = Day number (1 to 7)

The warden wants a weekly summary of attendance.

Your Task: Write the algorithm or C program to do the following:
(a) Calculate and print the total number of days each student was present.

Total present days = sum of each row.

(b) Identify the student who has the highest attendance in the week.

If two students have the same highest attendance, print the one with the lower student number.

Find the day (1–7) on which overall hostel attendance was the lowest.

Total attendance on a day = sum of each column.
Input :
1 1 0 1 1 0 1
1 0 1 1 1 1 1
0 1 1 0 1 1 0
1 1 1 1 0 1 1
1 0 1 0 1 0 1
0 0 1 1 1 1 1
1 1 0 0 0 1 1
1 1 1 1 1 0 0
0 1 1 1 1 1 1
1 0 0 1 1 1 1

Output:
Weekly Attendance Summary
-------------------------

Total Present Days:
Student 1: 5
Student 2: 6
Student 3: 4
Student 4: 6
Student 5: 4
Student 6: 5
Student 7: 5
Student 8: 5
Student 9: 6
Student 10: 5

Student with Highest Attendance: Student 2 (6 Days)

Day with Lowest Overall Attendance: Day 2


  #include <stdio.h>

int main() {
    int A[10][7];
    int i, j;

    // Input attendance data for 10 students and 7 days
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int totalPresent[10] = {0};
    int highestAttendance = 0, highestStudent = 1;

    // (a) Calculate total present days for each student
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 7; j++) {
            totalPresent[i] += A[i][j];
        }

        // Track the student with highest attendance (tie → lower student number)
        if (totalPresent[i] > highestAttendance) {
            highestAttendance = totalPresent[i];
            highestStudent = i + 1; // Students numbered 1–10
        }
    }

    // (b) Find the day with lowest overall attendance (column-wise sum)
    int dailyAttendance[7] = {0};
    int lowestAttendance = 100, lowestDay = 1;

    for (j = 0; j < 7; j++) {
        for (i = 0; i < 10; i++) {
            dailyAttendance[j] += A[i][j];
        }

        if (dailyAttendance[j] < lowestAttendance) {
            lowestAttendance = dailyAttendance[j];
            lowestDay = j + 1; // Days numbered 1–7
        }
    }

    // Output
    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");

    printf("Total Present Days:\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i + 1, totalPresent[i]);
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n", 
           highestStudent, highestAttendance);

    printf("\nDay with Lowest Overall Attendance: Day %d", lowestDay);

    return 0;
}
