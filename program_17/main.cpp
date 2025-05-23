// sorting without using temp variable

# include <iostream>
using namespace std;


int main()
{
    int a[5] = {15, 13, 2, 8, 7};
    for(int i =0; i < 5; i++)
    {
        for(int j=0; j < 4 - i; j++)
        {
            if(a[j] > a[j+1])
            {
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
            }
        }
    }
    for(int i=0; i < 5; i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}



