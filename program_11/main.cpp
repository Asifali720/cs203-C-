# include <iostream>
using namespace std;


void find_even_odd_number(int n)
{
   if(n%2 == 0)
   {
     cout<<"\n\n This is even number : "<<n<<endl;
   }
   else
   {
    cout<<"\n\n This is odd number : "<<n<<endl;
   }
}

int main()
{
    int n;
    cout<<"\n\nEnter number to find even or odd : "<<endl;
    cin>>n;
    if(cin.fail())
    {
    cout<<"\n\nOnly number is alowed : "<<endl;
    return 0;
    }
    find_even_odd_number(n);
    return 0;
}