#include <iostream>
#include <cmath>

int main(){   
    float xa;
    float ya;
    float xb;
    float yb;
    float xc;
    float yc;

    std::cout << "Input X for point A: ";
    std::cin >> xa;

    std::cout << "Input Y for point A: ";
    std::cin >> ya;

    std::cout << "Input X for point B: ";
    std::cin >> xb;

    std::cout << "Input Y for point B: ";
    std::cin >> yb;

    std::cout << "Input X for point C: ";
    std::cin >> xc;

    std::cout << "Input Y for point C: ";
    std::cin >> yc;

    float a = sqrt(pow((xb - xa), 2.0f) + pow((yb - ya), 2.0f));
    float b = sqrt(pow((xc - xb), 2.0f) + pow((yc - yb), 2.0f));
    float c = sqrt(pow((xa - xc), 2.0f) + pow((ya - yc), 2.0f));

    float A = std::max(a, std::max(b, c));
    float BC = a + b + c - A;
    
    if (std::abs(A - BC) > 1e-10){
        float p = a + b + c;
        float sp = p / 2.0f;
        float ar = sqrt(sp * (sp - a) * (sp - b) * (sp - c));

        std::cout << "Perimeter: " << p << std::endl;
        std::cout << "Area: " << ar << std::endl;
    } else {
        std::cout << "Is not a triangle" << std::endl;
    }
}