# include <iostream>
using namespace std;


void Pow()
{
    int number, limit;
    int result = 1;
    cout<<"\nEnter the number : "<<endl;
    cin>>number;
    cout<<"\nEnter the limit : "<<endl;
    cin>>limit;
    for(int i = 1; i <=limit; i++){
        result *= number;
    } 
    cout<<"\nThe result is : "<<result<<endl;
}

int main()
{
   Pow();
   return 0;
}