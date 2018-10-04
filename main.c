/* This program was made for the purpose of giving the user a way to calculate the roots of a function, the user will input the values of a, b and c and the program,
 * with the help of predefined functions, will do the calculations
 *
 * Author: Angel Olvera
 * October 4, 2018
 * Mail: angelolvera00@gmail.com
 */

#include <stdio.h>
#include <math.h>
int main() {
    //Variables are declared, where the discriminant is the part inside the square root of the quadratic formula, and the roots are calculated differently depending on the signs
    double a;
    double b;
    double c;
    double discriminant;
    double root1;
    double root2;
    double real;
    double imaginary;

    //The user is asked to enter the values of a, b anc c, which must all be numbers
    printf("Enter the NUMERIC VALUES of a, b and c : \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    //Formula for the discriminant
    discriminant= b*b - 4*a*c;

    // If the discriminant is greater than zero and a does not equal zero, the program will proceed with the calculation of the roots and will display the answers. However, if a IS zero, the program will return an invalid, because you can't divide by Zero.
    if(discriminant > 0) {
        if (a == 0) {
            printf("Invalid");
        } else {
            root1 = ((-b + sqrt(discriminant)) / (2 * a));
            root2 = ((-b - sqrt(discriminant)) / (2 * a));
            printf("root1 = %.2lf, root2 = %.2lf", root1, root2);
        }
    }
    // If the discriminant is Zero and a does not equal zero, there will only be one root, so both root1 and root2 will be the same answer and the program will display that both roots are the same. If a IS zero, the program returns an invalid.
    else if (discriminant == 0) {
        if (a == 0) {
            printf("Invalid");
        }
        else {
            root1 = root2 = (((-b) / (2 * a)));
            printf("root 1 and root 2= %.2lf;", root1);
        }
    }
    //If the discriminant is less than zero and a does not equal 0, the program will use the formula for imaginary numbers, as there can't be a square root of negative numbers, the solutions are imaginary and the program will show the user that
    //the answers are imaginary numbers. If a IS Zero, the program returns an invalid.
    else if(discriminant < 0){
        if (a==0){
            printf("Invalid");
        }
        else{
        real = -b/(2*a);
        imaginary = sqrt(-discriminant)/(2*a);
        printf("Solution is imaginary, the roots are: %.2lf+%.2lfi and %.2f-%.2fi", real, imaginary, real, imaginary);
    }
    }
    //If the user enters something other than a number, the program will tell the user that it only accepts numbers.
    else{
        printf("Only numbers");
    }
    return 0;
}