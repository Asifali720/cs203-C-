# include <iostream>
using namespace std;
#define pi 3.14


int find_radius_value(int &r)
{
    return (pi*r*r);
}

int main()
{
    int r;
    cout<<"Enter radius value : ";
    cin>>r;
    cout<<"The value of radius : "<<find_radius_value(r)<<endl;
    cout<<"\n\n Thank you for using this code\n";
    return 0;
}