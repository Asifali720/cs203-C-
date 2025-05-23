# include <iostream>
using namespace std;

void getValues(int a[], int size)
{
  for(int i; i < size; i++)
  {
    cin>>a[i];
  }
}

int main()
{
    int a[10];
    cout<<"\n\nEnter array numbers : ";
    getValues(a, 10);
      for(int i; i< 10; i++)
  {
    cout<<" "<<a[i];
  }
    return 0;
}