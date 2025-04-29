# include <iostream>
using namespace std;

int main()
{
    float radius;
    std::cout<< "Enter the radius of circle: ";
    std::cin>>radius;
    std::cout<< "\nDaimeter of circle: " << (radius = radius * 2) << std::endl;
    std::cout<< "\nCircumference of circle: " << (radius = radius * 3.14 * 2) << std::endl;
    std::cout<< "\nArea of circle: " << (radius = 2 * radius * radius) << std::endl;
    return 0;
}