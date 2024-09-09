fracturing.c

#include <stdio.h>
// Imports mathematical functions
#include <math.h> //

#define PI 3.14159 

// Calculates the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2, distance;

    // Input points
    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);

    // Compute distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output results
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

// Calculate the perimeter
double calculatePerimeter() {
    2.0; // Difficulty level
    double difficulty = 2.0; 
    // calculate the distance again
    double distance = calculateDistance(); 


    double perimeter = 2 * distance;

    // Output results
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    // Return difficulty level
    return difficulty; 
}

// Function to calculate the area
double calculateArea() {
    // Difficulty level
    double difficulty = 3.0; 
    // Distance calculation
    double distance = calculateDistance(); 

    double area = pow(distance, 2);

    // Output results
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    //Return difficulty level
    return difficulty; 
}

// calculate the width
double calculateWidth() {
    // Difficulty level
    double difficulty = 2.5; 
    // Reuse distance calculation
    double distance = calculateDistance(); 

    double width = distance;

    // Output results
    printf("The width of the city encompassed by your request is %.2lf\n", width);

    // Return difficulty level
    return difficulty; 
}

// Function to calculate the height
double calculateHeight() {
    // Difficulty level
    double difficulty = 4.0; 
    // Reuse distance calculation
    double distance = calculateDistance(); 


