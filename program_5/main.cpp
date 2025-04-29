# include <iostream>
using namespace std;


int main()
{
    int start = 1, sum = 0; 
    while(start <= 200)
    {
      std::cout<<"The sum of value : "<<(start += sum)<<std::endl;
       start++;
    }
    return 0;
}