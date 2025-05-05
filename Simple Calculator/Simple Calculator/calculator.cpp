#include <stdio.h>
// Import string.h to let me use strlen, strcmp and so on
#include <string.h>
// Import math.h to make me do a advanced calculation such as exponentiation and square root
#include <math.h>

// Prototype of getNum 
double getNum(void);
// Prototype of plusNumbers
double addition(double num1, double num2);
// Prototype of subtractNumbers
double subtraction(double num1, double num2);
// Prototype of multiplyNumbers
double multiplication(double num1, double num2);
// Prototype of divideNumbers
double division(double num1, double num2);
// Prototype of modulesNumbers
double modulus(int num1, int num2);
// Prototype of exponentialNumbers
double exponentiation(double num1, double num2);
// Prototype of squareRootNumbers
double squareRoot(double num);
// Prototype of validateOperations
int validateOperations(char option);
// Declare the constant to let the array use in the main function and avoid using the magic number.
const int maxArrayValue = 100;

int main(void) {
    //Using array to store the user input
    char option[maxArrayValue];
    // Using do-while loop to make sure that the loop will at least run once.
    do {
        // Print the word to the screen.
        printf("--- Enhanced Calculator ---\n");
        // Print the word to the screen.
        printf("Select an operation:\n");
        // Print the word to the screen.
        printf("1. Addition (+)\n");
        // Print the word to the screen.
        printf("2. Substraction (-)\n");
        // Print the word to the screen.
        printf("3. Multiplication (*)\n");
        // Print the word to the screen.
        printf("4. Division (/)\n");
        // Print the word to the screen and the special character % takes two types to print it out.
        printf("5. Modulus (%%)\n");
        // Print the word to the screen.
        printf("6. Exponentiation (^)\n");
        // Print the word to the screen.
        printf("7. Square Root (r)\n");
        // Print the word to the screen.
        printf("8. Exit (e)\n");
        // Print the word to the screen.
        printf("Enter your choice: ");

        // Using fgets to obtain the user input.
        fgets(option, sizeof(option), stdin);
        // Using if statement and strlen to replace the \n to the null number for preventing the string from making the new line automatically.
        if (option[strlen(option) - 1] == '\n') {
        // Replacing the \n character to the null number.
            (option[strlen(option) - 1] = '\0');
        }
        
        // Declare the double data type variables.
        double firstNum, secondNum, theResult;

        // Using if statement to check if the first element is e.
        if (option[0] == 'e')
        {
            // If the first element is e, then print the thak you message to the screen.
            printf("Thanks for using. Have a good day!\n");
            // Out of the loop when the first element is e.
            break;
        }
        // Using if statement and the validateOperations function to check if the user input is follow the rules.
        if (validateOperations(option[0]) == false) {
            // When the user input is not under the rules, then print the error message to the screen.
            printf("Invalid operation. Please try again.\n");
            // Using continue to restart the menu but not out of the loop.
            continue;
        }
        // Using if statement to check if the first element is '+'.
        if (option[0] == '+') {
            // Print the word to prompt the user to enter the number.
            printf("Enter the first Number: ");
            // Using getNum function to store the user input to the firstNum variable.
            firstNum = getNum();
            // Print the word to prompt the user to enter the other number.
            printf("Enter the second Number: ");
            // Using getNum function to store the user input to the secondNum variable.
            secondNum = getNum();
            // Using addition function to calculate the result and store the result to the theResult variable.
            theResult = addition(firstNum, secondNum);
            // Print the word and the result to the screen with the 4 point precision.
            printf("The result is: %.4lf\n", theResult);
        }
        // Using else if to check if the first element is '-'.
        else if (option[0] == '-') {
            // Print the word to prompt the user to enter the number.
            printf("Enter the first Number: ");
            // Using getNum function to store the user input to the firstNum variable.
            firstNum = getNum();
            // Print the word to prompt the user to enter the other number.
            printf("Enter the second Number: ");
            // Using getNum function to store the user input to the secondNum variable.
            secondNum = getNum();
            // Using subtraction function to calculate the result and store the result to the theResult variable.
            theResult = subtraction(firstNum, secondNum);
            // Print the word and the result to the screen with the 4 point precision.
            printf("The result is: %.4lf\n", theResult);
        }
        // Using else if to check if the first element is '*'.
        else if (option[0] == '*') {
            // Print the word to prompt the user to enter the number.
            printf("Enter the first Number: ");
            // Using getNum function to store the user input to the firstNum variable.
            firstNum = getNum();
            // Print the word to prompt the user to enter the other number.
            printf("Enter the second Number: ");
            // Using getNum function to store the user input to the secondNum variable.
            secondNum = getNum();
            // Using multiplication function to calculate the result and store the result to the theResult variable.
            theResult = multiplication(firstNum, secondNum);
            // Print the word and the result to the screen with the 4 point precision.
            printf("The result is: %.4lf\n", theResult);
        }
        // Using else if to check if the first element is '/'.
        else if (option[0] == '/') {
            // Print the word to prompt the user to enter the number.
            printf("Enter the first Number: ");
            // Using getNum function to store the user input to the firstNum variable.
            firstNum = getNum();
            // Print the word to prompt the user to enter the other number.
            printf("Enter the second Number: ");
            // Using getNum function to store the user input to the secondNum variable.
            secondNum = getNum();
            // Using if statement to check if the secondNum is 0.
            if (secondNum != 0) {
                // If the secondNum is not 0, then using division function to calculate the result and store the result to the theResult function.
                theResult = division(firstNum, secondNum);
                // Print the word and the result to the screen with the 4 point precision.
                printf("The result is: %.4lf\n", theResult);
            }
            // If the secondNum is 0.
            else
            {
                // Print the error message to the screen.
                printf("Error: Division by zero is not allowed.\n");
            }
        }
        // Using else if to check if the first element is '%'.
        else if (option[0] == '%') {
            // Print the word to prompt the user to enter the number.
            printf("Enter the first Number: ");
            // Using getNum function to store the user input to the firstNum variable.
            firstNum = getNum();
            // Print the word to prompt the user to enter the other number.
            printf("Enter the second Number: ");
            // Using getNum function to store the user input to the secondNum variable.
            secondNum = getNum();
            // Using if statement to check if the secondNum is 0.
            if (secondNum != 0) {
                // If the secondNum is not 0, then using modulus function to calculate the result and store the result to the theResult function.
                theResult = modulus((double)firstNum, (double)secondNum);
                // Print the word and the result to the screen with the 4 point precision.
                printf("The result is: %.4lf\n", theResult);
            }
            // If the secondNum is 0.
            else
            {
                // Print the error message to the screen.
                printf("Error: Division by zero is not allowed in modules operation.\n");
            }
        }
        // Using else if to check if the first element is '^'.
        else if (option[0] == '^') {
            // Print the word to prompt the user to enter the number.
            printf("Enter the first Number: ");
            // Using getNum function to store the user input to the firstNum variable.
            firstNum = getNum();
            // Print the word to prompt the user to enter the other number.
            printf("Enter the second Number: ");
            // Using getNum function to store the user input to the secondNum variable.
            secondNum = getNum();
            // Using exponentiation function to calculate the result and store the result to the theResult variable.
            theResult = exponentiation(firstNum, secondNum);
            // Print the word and the result to the screen with the 4 point precision.
            printf("The result is: %.4lf\n", theResult);
        }
        // Using else if to check if the first element is 'r'.
        else if (option[0] == 'r') {
            // Print the word to prompt the user to enter the number.
            printf("Enter the first Number: ");
            // Using getNum function to store the user input to the firstNum variable.
            firstNum = getNum();
            // Using if statement to check if the firstNum is greater than 0 or equal to 0.
            if (firstNum >= 0)
            {
                // If the firstNum is greater than 0 and equal to 0, then using the squareRoot function to calculate the result and store the result to the theResult variable.
                theResult = squareRoot(firstNum);
                // Print the word and the result to the screen with the 4 point precision.
                printf("The result is: %.4lf\n", theResult);
            }
            // If the firstNum is less than 0.
            else
            {
                // Print the error message to the screen.
                printf("Error: Square root of a negative number is not allowed.\n");
            }
        }
      // When the first element is not 'e', keep running the loop.  
    } while (option[0] != 'e');

    // return 0 indicates the program runs correct
    return 0;
};

/* FUNCTION:
   addition
   DESCRIPTION :
   This function is to plus the 2 numbers given by the user
   PARAMETERS :
   double num1: the first number given by the user
   double num2: the second number given by the user
   RETURNS :
   double result: the result of plusing 2 numbers
*/
double addition(double num1, double num2) {
    // Store the addition result to the result variable.
	double result = num1 + num2;
    // Return the result to let the main function use.
	return result;
}

/* FUNCTION:
   subtraction
   DESCRIPTION :
   This function is to subtract the 2 numbers given by the user
   PARAMETERS :
   double num1: the first number given by the user
   double num2: the second number given by the user
   RETURNS :
   double result: the result of subtracting 2 numbers
*/
double subtraction(double num1, double num2) {
    // Store the subtraction result to the result variable.
	double result = num1 - num2;
    // Return the result to let the main function use.
	return result;
}

/* FUNCTION:
   multiplication
   DESCRIPTION :
   This function is to multiply the 2 numbers given by the user
   PARAMETERS :
   double num1: the first number given by the user
   double num2: the second number given by the user
   RETURNS :
   double result: the result of multiplying 2 numbers
*/
double multiplication(double num1, double num2) {
    // Store the subtraction result to the result variable.
    double result = num1 * num2;
    // Return the result to let the main function use.
	return result;
}

/* FUNCTION:
   division
   DESCRIPTION :
   This function is to divide the 2 numbers given by the user
   PARAMETERS :
   double num1: the first number given by the user
   double num2: the second number given by the user
   RETURNS :
   double result: the result of dividing 2 numbers
*/
double division(double num1, double num2) {
    // Using if statement to check if the num2 is 0.
    if (!(num2 == 0))
    {
        // If the num2 is not 0, then do the division and store the result to the result variable.
        double result = num1 / num2;
        // Return the result to let the main function use.
        return result;
    }
    // If the num2 is 0
    else
    {
        // Return -1 to indicate the false.
        return -1;
    }
}

/* FUNCTION:
   modulus
   DESCRIPTION :
   This function is to module the 2 numbers given by the user
   PARAMETERS :
   double num1: the first number given by the user
   double num2: the second number given by the user
   RETURNS :
   double result: the result of modules of 2 numbers
*/
double modulus(int num1, int num2) {
    // Using if statement to check if the num2 is 0.
    if (!(num2 == 0))
    {
        // If the num2 is not 0, then do the modulus and store the result to the result variable.
        double result = num1 % num2;
        // Return the result to let the main function use.
        return result;
    }
    // If the num2 is 0
    else
    {
        // Return -1 to indicate the false.
        return -1;
    }
}

/* FUNCTION:
   exponentiation
   DESCRIPTION :
   This function is to exponential the 2 numbers given by the user
   PARAMETERS :
   double num1: the first number given by the user
   double num2: the second number given by the user
   RETURNS :
   double result: the result of exponentiation of 2 numbers
*/
double exponentiation(double num1, double num2) {
    // Store the result of exponentiation to the result variable.
    double result = pow(num1, num2);
    // Return the result to let the main function use.
    return result;
}

/* FUNCTION:
   squareRoot
   DESCRIPTION :
   This function is to make a square root the number given by the user
   PARAMETERS :
   double num1: the first number given by the user
   RETURNS :
   double result: the result of square root
*/
double squareRoot(double num) {
    // Using if statement to check if the num is greater or equal to 0.
    if (num >= 0)
    {
        // If the num is greater or equal to 0, then do the square root and store the result to the result variable.
        double result = sqrt(num);
        // Return the result to let the main function use.
        return result;
    }
    // If the num is less than 0.
    else
    {
        // Return -1 to indicate the false.
        return -1;
    }
}

/* FUNCTION:
   validateOperations
   DESCRIPTION :
   This function is to validate if the user choose the right operator.
   PARAMETERS :
   char choice: the char operator given by the user
   RETURNS :
   Boolean: the result is true or false
*/
int validateOperations(char choice) {
    // Using the array to store the valid operators.
    char validateOptions[] = { '+', '-', '*', '/', '%', '^', 'r' };
    // Declare the int variable to store the number of elements in the array.
    int numOfValidateOptions = sizeof(validateOptions) / sizeof(validateOptions[0]);
    // Using for loop to check if the first element in the array from user input is choosing the right operations.
    for (int i = 0; i < numOfValidateOptions; i++) {
        // If the first element is in the range of the validateOptions array.
        if (choice == validateOptions[i]) {
            // Return true to indicate that the user inputs the right operations.
            return true;
        }
    }
    // Return false to indicate the user inputs the invalid operations.
    return false;
}

// FUNCTION : getNum
// DESCRIPTION :
// This function gets a 2 numbers from the user
// PARAMETERS : None
// RETURNS : double of the input number
#pragma warning(disable: 4996) // required by Visual Studio
double getNum(void) {
	char record[121] = { 0 }; // Buffer to store input string
	double number = 0.0; // Variable to store the converted number
	// Prompt the user for input and read the input string
	fgets(record, 121, stdin);
	// Attempt to convert the string to a double
	if (sscanf(record, "%lf", &number) != 1) {
	// If conversion fails, set the number to -1
		number = -1.0;
	}
	return number; // Return the double (or -1 if conversion failed)
}