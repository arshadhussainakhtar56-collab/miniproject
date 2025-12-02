 Problem Title: Chef’s Temperature Converter
 Problem Story:
Chef Rohan is preparing a special recipe that needs the oven temperature in Fahrenheit,
but his thermometer only shows Celsius readings.

He needs your help to convert the temperature from Celsius to Fahrenheit
so that his dish cooks perfectly.

Can you write a program to help Chef Rohan convert Celsius to Fahrenheit?

🧠 Task:
Write a program that takes a temperature in Celsius as input
and prints the equivalent temperature in Fahrenheit.

📥 Input Format:
The input contains a single floating-point or integer number C — the temperature in Celsius.

📤 Output Format:
Print the temperature in Fahrenheit rounded to 2 decimal places,
in the format:
"Temperature in Fahrenheit = <value>"

📏 Formula:
F= (C*9/5)+32

  #include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output with 2 decimal places
    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    return 0;
}
