#include <iostream>
#include <ctime>
using namespace std;
bool Exit = false;
int option;
char playerOne;
char playerTwo;
string nameOne;
string nameTwo;
void displayChoice(char choice, int playerNumber);
char getUserOne();
char getUserTwo();
void chooseWinner(char playerOne, char playerTwo,string nameOne, string nameTwo);
int main() {
    while(Exit!=true){
        cout<<"WELCOME TO ROCK PAPER SCISSOR GAME"<<endl;
        getUserOne();
        getUserTwo();
        chooseWinner(playerOne, playerTwo,nameOne,nameTwo);
        cout<<"Would you like to play again?"<<endl;
        cout<<"1.Yes\n2.No";
        cin>>option;
        if(option==1){
            Exit = false;
        }
        else if(option == 2){
            Exit = true;
        }
        else{
            cout<<"Invalid option"<<endl;
        }
    }
    
    return 0;
}
char getUserOne(){
    cout<<"Enter the name of player one:";
    cin>>nameOne;
    cout<<nameOne<<" is playing now, enter your choice"<<endl;
    cout<<"Enter s for scissor \nEnter r for Rock \nEnter p for paper"<<endl;
    cout<<"Enter your choice:";
    cin>>playerOne;
    for(int i =0; i<20;i++){
        cout<<""<<endl;
    }
     
    
    return playerOne;
}
char getUserTwo(){
    cout<<"Enter name of player two:";
    cin>>nameTwo;
    cout<<nameTwo<< " is playing now, enter your choice"<<endl;
    cout<<"Enter s for scissor \nEnter r  Rock \nEnter p for paper"<<endl;
    cout<<"Enter your choice:";
    cin>>playerTwo; 
    
    return playerTwo;


}
void chooseWinner(char playerOne, char playerTwo, string nameOne,string nameTwo){
    cout<<"========RESULTS================"<<endl;
    cout<<nameOne<<" has selected "<< playerOne<<endl;
    cout<<nameTwo<<" has selected "<<playerTwo<<endl;
    if(playerOne == 's' && playerTwo == 'p'){
        cout<<nameOne << " WINS"<<endl;
    }
    else if(playerOne == 'p' && playerTwo == 'r'){
        cout<<nameOne << " WINS"<<endl;
    }
    else if(playerOne == 'r' && playerTwo == 's'){
        cout<<nameOne << " WINS"<<endl;
    }
    else if (playerOne == 's' && playerTwo == 'r'){
        cout<<nameTwo<<" WINS"<<endl;
    }
    else if(playerOne == playerTwo){
        cout<<"Both have selected the same option, try again"<<endl;
        
    }
    else{
        cout<<nameTwo << " WINS"<<endl;
    }
    cout<<"==============================="<<endl;
}
void displayChoice(char choice, int playerNumber){
    if(choice== 's'){
        cout<<"Player "<< playerNumber<<" selected Scissor"<<endl;
    }
    else if (choice=='p'){
        cout<<"Player "<< playerNumber<<" has selected Paper"<<endl;
    }
    else if(choice== 'r'){
        cout<<"Player "<< playerNumber<<" has selected Rock"<<endl;
    }
    else{
        cout<<"Invalid input, try"<<endl;
    }
    
}