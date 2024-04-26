#include <iostream>

float pi = 3.14159265359;

float degreeToRadian(float num) {
    return (num / 180)* pi;
}

float radianToDegree(float num) {
    return (num / pi) * 180;
}

int main()
{
    std::cout << "29 degrees to radians: " << degreeToRadian(29) << std::endl;
    std::cout << "1 radian to degrees: " << radianToDegree(1) << std::endl;
    std::cout << "100 radians to degrees: " << radianToDegree(100) << std::endl;
}