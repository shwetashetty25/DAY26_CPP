// WAP TO IMPLEMENT OVERLOADING FOR CALCULATING THE AREA OF CIRCLE AND RECTANGLE:
#include <iostream>
#include <cmath>
using namespace std;
class AreaCalculator
{
public:
    // Function to calculate the area of a circle
    double area(double radius)
    {
        return M_PI * radius * radius; // Area = π * r^2
    }

    // Function to calculate the area of a rectangle
    double area(double length, double width)
    {
        return length * width; // Area = length * width
    }
};

int main()
{
    AreaCalculator calculator; // Create an object of AreaCalculator

    // Predefined values
    double circleRadius = 5.0;    // Example radius for the circle
    double rectangleLength = 4.0; // Example length for the rectangle
    double rectangleWidth = 6.0;  // Example width for the rectangle

    // Calculate area of a circle
    double circleArea = calculator.area(circleRadius);
    cout << "Area of the circle with radius " << circleRadius << ": " << circleArea << endl;

    // Calculate area of a rectangle
    double rectangleArea = calculator.area(rectangleLength, rectangleWidth);
    cout << "Area of the rectangle with length " << rectangleLength << " and width " << rectangleWidth << ": " << rectangleArea << endl;

    return 0;
}