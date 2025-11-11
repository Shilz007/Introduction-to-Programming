#include <iostream>
using namespace std;

int main(){
    int Buy;
    cout<<"Buying price : ";
    cin>>Buy;
    
    int Sell;
    cout<<"Selling price : ";
    cin>>Sell;
    
    int Profit = Sell-Buy;
    cout<<"Profit : "<<Profit<<endl;
}