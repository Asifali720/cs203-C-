// simple program terminate as condition of -1

# include <iostream>
using namespace std;

int main()
{
    int array_number[10], i = 0, n;
     do 
     {
        cout<<"\n\n Enter number index "<<i<<" : ";
        cin>>n;
        if(n != -1)
        {
           array_number[i]= n;
           i++;
        }
     }while(n != -1 && i < 10);
    for(int a = 0; a<i; a++)
        {
            cout<<" "<<array_number[a];
        }
    return 0;
}