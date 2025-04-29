# include <iostream>
using namespace std;

int main()
{
   int a;
   std::cout<<"Enter the 4 digits : ";
   std::cin>>a;
   std::cout<<"\n 4 digits number is :  ";
   std::cout<<a%10;
   std::cout<<","; 
   a = a / 10;
   std::cout<< a%10;
   std::cout<<",";
   a = a / 10;
   std::cout<< a%10;
   std::cout<<",";
   a = a / 10;
   std::cout<< a%10 << " ";
   return 0;
}