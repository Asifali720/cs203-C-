# include <iostream>
using namespace std;


int main()
{
    int a[5], b[5], equal = 0;
    cout<<"\n\nEnter first Array Value : ";
    for(int i =0; i<5; i++)
    {
        cin>>a[i];
    } 
    cout<<"\n\nEnter second Array Value : ";
    for(int i = 0; i<5; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<5; i++)
    {
      if(a[i] != b[i])
      {
        equal = 0;
        cout<<"\n\nArray values is not same"<<endl;
        break;
      }  
      else
      {
        equal = 1;
      }
    }
    if(equal == 1)
    {
        cout<<"\n\nBoth array has same value"<<endl;
    }
    return 0;
}