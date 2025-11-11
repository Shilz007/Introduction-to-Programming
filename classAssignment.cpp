//simple program for greeting using user input
#include <iostream>
using namespace std;

int main(){
    string firstname;
    cout<<"Enter First name : ";
    cin>>firstname;
    
    string lastname;
    cout<<"Enter Last name : ";
    cin>>lastname;
    
    string fullname;
    cout<<"Enter Full name : ";
    getline(cin,fullname);
    cout<<"Sheel Patel"<<endl;
    
    
    string favouritemeal;
    cout<<"Enter Favourite Meal : ";
    cin>>favouritemeal;
    
    string favouritemovie;
    cout<<"Enter Favourite Movie : ";
    cin>> favouritemovie;
    
    string reason;
    cout<<"Why am i in class ? -  ";
    getline(cin,reason);
    cout<<" I have come to learn C++ programming ";


     cout << "\t----------------------------------------------\n";
    cout << "\t|  First Name     : " << firstname          <<"|"<<endl;
    cout << "\t|  Last Name      : " << lastname          << "|"<<endl;
    cout << "\t|  Full Name      : " << fullname          << "|"<<endl;
    cout << "\t|  Favourite Meal : " << favouritemeal     << "|"<<endl;
    cout << "\t|  Favourite Movie: " << favouritemovie    << "|"<<endl;
    cout << "\t|  Reason in Class: " << reason            << "|"<<endl;
    cout << "\t----------------------------------------------\n";
   

    return 0;
}


