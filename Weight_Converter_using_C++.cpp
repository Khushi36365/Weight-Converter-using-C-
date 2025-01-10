#include <iostream>
using namespace std;
int main(){
    
    int weight;
    cout<<"enter the weight (in kilograms or pounds): ";
    cin>>weight;
    
    string unit;
    cout<<"enter unit (either kilograms or pounds): ";
    cin>>unit;
    
    if(unit == "P" || unit == "p"){
        cout<<"The weight is: "<<(weight*0.45)<<" Kilograms";
    }
    
    else if(unit == "K" || unit == "k"){
        cout<<"The weight is: "<<(weight/0.45)<<" Pounds";
    }
    
    else{
        cout<<"Please enter the weight in valid units";
    }
    
    return 0;
}