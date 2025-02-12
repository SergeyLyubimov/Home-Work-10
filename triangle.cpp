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

    float a = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
    float b = sqrt(pow((xc - xb), 2) + pow((yc - yb), 2));
    float c = sqrt(pow((xa - xc), 2) + pow((ya - yc), 2));
    
    if ((xa != xb != xc && ya != yb != yc) && (a != 0 && b != 0 && c != 0)){
        float p = a + b + c;
        float sp = p / 2;
        float ar = sqrt(sp * (sp - a) * (sp - b) * (sp - c));

        std::cout << "Perimeter: " << p << std::endl;
        std::cout << "Area: " << ar << std::endl;
    } else {
        std::cout << "Is not a triangle" << std::endl;
    }
}