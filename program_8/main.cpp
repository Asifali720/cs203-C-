# include <iostream>
using namespace std;


int main()
{
    int salary;
    cout<<"\n\nEnter your salary : "<<endl;
    cin>>salary;
    if(salary == 1000)
    {
        cout<<"Your increament value is : "<<(salary + (salary * 10/100))<<endl;
    }
    else if(salary == 2000)
    {
        cout<<"Your increament value is : "<<(salary + (salary * 20/100))<<endl;
    }
    else if(salary == 3000)
    {
        cout<<"Your increament value is : "<<(salary + (salary * 30/100))<<endl;
    }
    else
    {
        cout<<"Sorry category not founded, please put 1000 or 2000 or 3000"<<endl;
    }
    return 0;
}