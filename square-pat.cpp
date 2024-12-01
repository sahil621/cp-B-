#include <iostream>
using namespace std;

int main(){
    // for (int row = 0; row < 4; row += 1)
    // {
    //    for (int col = 0; col < 4; col += 1)
    //    {
    //     cout<<"* ";
    //    }
    //    cout<<endl;
       
    // }

    // Depend on the input 
    int n;
    cin>>n;
    for (int row = 0; row < n; row += 1)
    {
       for (int col = 0; col < n; col += 1)
       {
        cout<<"* ";
       }
       cout<<endl;
    
    }
}