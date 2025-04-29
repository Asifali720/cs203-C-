#include<iostream>
// #include<conio.h>
// using namspace std;

int main()
{
    int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10;
    float avg;
    std::cout<<"\nEnter age of staudent 1:\t";
    std::cin>>age1;
    std::cout<<"\nEnter age of staudent 2:\t";
    std::cin>>age2;
    std::cout<<"\nEnter age of staudent 3:\t";
    std::cin>>age3;
    std::cout<<"\nEnter age of staudent 4:\t";
    std::cin>>age4;
    std::cout<<"\nEnter age of staudent 5:";
    std::cin>>age5;
    std::cout<<"\nEnter age of staudent 6:";
    std::cin>>age6;
    std::cout<<"\nEnter age of staudent 7:";
    std::cin>>age7;
    std::cout<<"\nEnter age of staudent 8:";
    std::cin>>age8;
    std::cout<<"\nEnter age of staudent 9:";
    std::cin>>age9;
    std::cout<<"\nEnter age of staudent 10:";
    std::cin>>age10;
    avg = (age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10) /10;
    std::cout<<"\n\nAverage of total students age\t"<< avg;
    return 0;  
};