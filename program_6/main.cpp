# include <iostream>
using namespace std;


int main()
{
    char option;
    do
    { 
        std::cout<<"\n Hi I am asif Ali a student of BSCS virtual university : "<<std::endl;
        std::cout<<"\n and I am programmer also : "<<std::endl;
        std::cout<<"do you want to continue (Y/n) : "<<std::endl;
        std::cin>>option;

    }while(option == 'Y' || option == 'y');
    return 0;
};