# include <iostream>
using namespace std;



void findRadius(int r)
{
   int result;
   result = 3.14 * r * r;
   cout<<"\n The radius is : "<<result<<endl;
}

int main()
{
  int r;
  cout<<"\nEnter Radius value : "<<endl;
  cin>>r;
  if(cin.fail())
  {
    cout<<"\nPlease put number only"<<endl;
    return 0;
  }
  findRadius(r);
  return 0;
}