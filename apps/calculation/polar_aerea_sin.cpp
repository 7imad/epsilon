#include <iostream>
#include <cmath>

using namespace std;

double calculateArea(double theta1, double theta2) {
    double area = 0.0;
    double deltaTheta = 0.001;

    for (double theta = theta1; theta <= theta2; theta += deltaTheta) {
        double r = sin(theta);
        double nextR = sin(theta + deltaTheta);
        double sectorArea = 0.5 * (r * r + nextR * nextR) * deltaTheta;
        area += sectorArea;
    }

    return area;
}

int main() {
    double theta1, theta2;
    cout << "Enter the starting angle (in radians): ";
    cin >> theta1;
    cout << "Enter the ending angle (in radians): ";
    cin >> theta2;

    double area = calculateArea(theta1, theta2);

    cout << "Area between the angles: " << area << endl;

    return 0;
}