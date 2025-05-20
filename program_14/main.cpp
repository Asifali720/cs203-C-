// leap searching program 

# include <iostream>
using namespace std;


int main()
{
    int array[5] = {30, 40, 10, 50, 70};
    int search, found = 0;

    cout<<"\n\n Enter number for search : ";
    cin>>search;
    
    for(int i = 0; i<5; i++)
    {
      if (search == array[i])
       {
         found++;
         break;
       }
    }
       if(found == 0)
       {
        cout<<"\n\n Value not founded"<<endl; 
       }
       else
       {
        cout<<"\n\n Value founded : "<<search<<endl; 

       }
    return 0;
}