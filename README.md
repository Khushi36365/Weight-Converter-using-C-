# Weight Converter using C++

A simple C++ program that converts weight between kilograms and pounds based on user input. This project is ideal for beginners to practice conditional statements, user input, and string handling in C++.

## Features
1. Converts weight from pounds to kilograms.
2. Converts weight from kilograms to pounds.
3. Validates user input for units (P/p for pounds and K/k for kilograms).
4. Displays an error message if the user provides an invalid unit.

## How It Works
1. The program prompts the user to input their weight.
2. It asks the user to specify the unit of the weight:

   Enter P or p for pounds.

   Enter K or k for kilograms.
3. Based on the unit entered:

   If P/p, the weight is converted to kilograms using the formula:
   Kilograms = Pounds × 0.45

   If K/k, the weight is converted to pounds using the formula:
   Pounds = Kilograms ÷ 0.45
4. The program outputs the converted weight. If the user enters an invalid unit, the program displays an error message and terminates.
