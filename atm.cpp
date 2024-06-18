#include <iostream>
using namespace std;
int totalBalance = 1000;

void balance();
void withdraw();
void options();
void deposit();
int main(){
    while(true){
        options();

    }
    
    return 0;
}


void options(){
    cout <<"1.Show Balance\n2.Deposit Amount\n3.Withdraw Amount\n4.Exit"<<endl;
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice == 1){
        balance();
           
    }else if(choice ==2){
        deposit();
    }else if(choice ==3){
        withdraw();
    }else if(choice == 4){
        cout<<"Thank you for using this program"<<endl;
    }else{
        cout<<"Invalid output"<<endl;
    }
}
void withdraw(){
    int money;
    cout<<"How much money to be withdrawn?";
    cin>>money;
    if(money > totalBalance){
        cout<<"Not enough balance, your balance is "<< totalBalance<<endl;
    }
    else{
        totalBalance = totalBalance - money;
    }
}
void deposit(){
    int money;
    cout <<"How much money would you like to deposit? ";
    cin >> money;
    totalBalance = totalBalance + money;
}
void balance(){
    cout<<"Your total balance is " << totalBalance << endl;
}