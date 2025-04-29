# include <iostream>
// # include <cstdlib>
using namespace std;

int main()
{
    int amir_age, amara_age;
    std::cout<<"Enter Amir age : "<< std::endl;
    std::cin>>amir_age;
    std::cout<<"Enter Amara age : "<< std::endl;
    std::cin>>amara_age;
    if(amir_age > amara_age)
    {
        std::cout<<"Amir age greater than Amara"<< std::endl;
    }
    else
    {
        std::cout<<"Amara age greater than Amir"<< std::endl;
    }
    // system("clear");
    return 0;
}