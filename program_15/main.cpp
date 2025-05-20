//leap searching with random number

# include <iostream>
# include <stdlib.h>
using namespace std;


int main()
{
  int z, found = 0;
  int a[5];

  for(int i = 0; i < 5; i++)
  {
      cout<<"Random numbers is generated "<<i<<" : "<<(a[i] = rand()%10)<<endl;
  }
  cout<<"\n\nEnter Searching number : ";
  cin>>z;

  for(int i =0; i<5; i++)
  {
    if(z == a[i])
    {
        found ++;
    }
  }
   if(found == 0)
       {
        cout<<"\n\n Value not founded"<<endl; 
       }
       else
       {
        cout<<"\n\n Value founded : "<<z<<endl; 

       }
  
}