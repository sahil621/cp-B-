#include <iostream>
using namespace std;

int main(){
    // depend on the input 
    int n;
    cin>>n;
    for (int row = 0; row < n; row += 1)
    {
        // spaces
    for (int col = 0; col < n-row; col++)
      {
        cout<<" ";
      }
    //   star
    for (int i = 0; i <= row ; i++)
    {
        cout<<"* ";
    }
    
      cout<<endl;
    }

    // ------- inverted full pyramid------
    // int n;
    // cin>>n;
    // for (int row = 0; row < n ; row++)
    // {
    //     //  space
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout<<" ";
    //     }
    //     // stars
    //     for (int i = 0; i < n-row; i++)
    //     {
    //         cout<<"* ";
    //     }
        
    //     cout<<endl;
        
    // }
    
    

}