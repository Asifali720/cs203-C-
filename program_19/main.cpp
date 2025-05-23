# include <iostream>
using namespace std;


int main()
{ 
  int a[2][3] = {{20, 30, 40}, {10, 50 , 70}};
  for(int i = 0; i<2; i++){
    for(int j = 0; j<3; j++)
    {
        cout<<" "<<a[i][j];
    }
  }
  return 0;
}