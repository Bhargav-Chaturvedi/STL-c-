#include <iostream>
#include <cmath>

// Function to evaluate the equation at a given point x
double f(double x)
{
    return std::cos(x) - x * std::exp(x);
}

// Function to find the root of the equation using the regula falsi method
double regulaFalsi(double a, double b, double epsilon)
{
    double x = 0.0;

    // Loop until the error is within the specified tolerance
    while (std::abs(b - a) > epsilon)
    {
        // Use the regula falsi method to find the next approximation
        x = (a * f(b) - b * f(a)) / (f(b) - f(a));

        // Check if the root is within the current interval
        if (f(a) * f(x) < 0)
            b = x;
        else
            a = x;
    }

    // Return the final approximation
    return x;
}

int main()
{
    // Set the initial interval and tolerance
    double a = 0.0, b = 1.0, epsilon = 0.0001;

    // Find the root of the equation using the regula falsi method
    double root = regulaFalsi(a, b, epsilon);

    // Print the result to four decimal places
    std::cout.precision(4);
    std::cout << "The root of the equation is x = " << root << std::endl;

    return 0;
}
