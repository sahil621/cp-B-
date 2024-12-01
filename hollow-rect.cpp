#include <iostream>
using namespace std;

int main(){
    // for (int row = 0; row < 3; row += 1)
    // {
    //     // first row and last row then print '*'
    //     if(row == 0 || row == 2)
    //     {
    //    for (int col = 0; col < 5; col ++)
    //    {
    //     cout<<"* ";
    //    }
    //     }
    //     else{
    //     // remaining middle rows
    //     // first star
    //     cout<<"* ";
    //     // spaces
    //     for (int i = 0; i < 3; i +=1)
    //     {
    //         cout<<"  ";
    //     }
    //     // last star
    //     cout<<"* ";
        
    //     }
    //     cout<<endl;

       
    // }

    
    // depend on the input 
    int rowcount,colcount;
    cin>>rowcount;
    cin>>colcount;
    for (int row = 0; row < rowcount; row+=1)
    {
        if(row==0 || row==rowcount-1){
            for (int col = 0; col < colcount; col+=1)
            {
                cout<<"* ";
            }
            

        }
        else{
            cout<<"* ";
            for (int i = 0; i < colcount-2; i+=1)
            {
                cout<<"  ";
            }
            cout<<"* ";
            
        }
        cout<<endl;
    }
    

}