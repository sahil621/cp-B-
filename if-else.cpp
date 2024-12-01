#include <iostream>
using namespace std;


  int main() {
    

    /*
  //delare integer variable -> score
  int score;
  //print enter the score
  cout << "Enter the score: ";
  //take input into score variable
  cin>>score;
  //if condition
  if(score<300){
    cout<<"India wins"<<endl;
  }
  else{
    cout<<"Pak wins"<<endl;
  }   */
    // end of 1st code
    int marks;
    cout<< "Enter the marks: ";
    cin>>marks;

    /*
    if (marks >= 90) {
      cout << "A grade" << endl;
    } else {
      if (marks >= 80){
        cout << "B grade" << endl;
      }
      else{
        if (marks >= 60){
          cout << "C grade" << endl;
        }
        else{
          if(marks>=40){
            cout<<"D grade"<<endl;
          }
          else{
            if(marks<40){
              cout<<"F grade"<<endl;
            }
          }
        }
      }
    } */
    // if-elseif-else
  if(marks>=90){
     cout<<"A";
      }
      else if(marks>=80){
        cout<<"B";
      }
      else if(marks>=60){
        cout<<"C";
      }
      else if(marks>=40){
        cout<<"D";
      }
      else{
        cout<<"F";
      }
    }
   

