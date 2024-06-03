#include <iostream>
#include <limits>
using namespace std;
int num1,num2;
void addition(){
    cout <<"The sum of "<< num1 << " and "<< num2<< " is "<<num1 + num2<< endl;
}
void subtraction(){
    cout <<"The difference of "<< num1 << " and "<< num2<< " is "<<num1 - num2<< endl;
}
void Division(){
    cout <<"The divsion of "<< num1 << " and "<< num2<< " is "<<num1 / num2<< endl;
}
void multiplication(){
    cout <<"The multiplication of "<< num1 << " and "<< num2<< " is "<<num1 * num2<< endl;
}
int main(){
    int choice;
    cout <<"WELCOME TO CALCULATOR PROGRAM \n==================================="<< endl;
    cout << "Enter number 1:";
    cin >> num1;
    cout << "Enter number 2:";
    cin >> num2;
    cout <<"1. Addition \n2. Subtraction \n3.Division \n4.Multiplication"<<endl;
    cout <<"Enter your choice:";
    cin>> choice;
    if(choice== 1){
        addition();
    }
    else if(choice ==2){
        subtraction();
    }
    else if(choice ==3){
        Division();
    }
    else if(choice ==4){
        multiplication();
    }
    else{
        cout <<"Invalid Input"<<endl;
    }
    return 0;
    }
    
    
    

