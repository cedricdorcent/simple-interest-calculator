# Simple Interest Calculator

A program written in C that calculates simple interest. Enter a principal amount and an annual interest rate, and the program shows how much interest builds up over several time periods. You can also enter your own time period.

## Features

- Takes the principal and annual interest rate as user input
- Prints a formatted table of interest earned over 0.5, 1, 3, 5, and 10 years
- Lets you enter a custom time period and calculates the interest for it
- Uses a reusable function, `calculateSimpleInterest`, to keep the math separate from the input and output code

## How It Works

The program uses the simple interest formula:

```
Interest = (Principal × Rate × Time) / 100
```

where the rate is the annual percentage and time is measured in years

## Getting Started

### Requirements

- A C compiler such as [GCC](https://gcc.gnu.org/)

### Compile and Run

```
gcc simple_interest.c -o simple_interest
./simple_interest
```

On Windows PowerShell, run the program with `.\simple_interest` instead.

## Example

Input: a principal of `5000`, a rate of `5`, and a custom period of `8` years.

```
Enter principal amount ($): 5000
Enter annual interest rate (%): 5

principal amount: $5000.00
annual rate: 5.00%
 Time (Years)  Interest Accrued
 0.5           $125.00
 1.0           $250.00
 3.0           $750.00
 5.0           $1250.00
 10.0          $2500.00

Enter your own time period in years: 8
Interest after 8.0 years: $2000.00
```

## Concepts Practiced

- Functions and return values
- Arrays and `sizeof`
- Loops
- Reading user input with `scanf`
- Formatted output with `printf`

## Possible Improvements

- Reject invalid input such as letters or negative numbers
- Add compound interest as an option
- Let the user choose their own list of time periods

## Author

Cedric Dorcent
