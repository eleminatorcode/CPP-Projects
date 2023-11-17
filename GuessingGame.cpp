#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){


cout<<"\n\t\t !!Welcome to The Guessing Game!!"<<endl;
cout<<"You have to guess the number between the 1 to 100."
       "You have limited choices based on level you choose"
       "!!GOOD LUCK"<<endl;
       while(true){
        cout<<"\n Enter the LEVEL:\n";
        cout<<"1 for Easy!\t";
        cout<<"2 for Medium!\t";
        cout<<"3 for Hard!\t";
        cout<<"0 for ending the Game!!\n"<<endl;

        int difficultLVL;
        cout<<"Enter the Difficulty Number:";
        cin>>difficultLVL;

        srand(time(0));
        int secretNo=1+(rand()%100);
        int playerNo;

        if(difficultLVL==1){
            cout<<"\n You have 10 choices for "
            "Guessing the number between 1 to 100";
            int choicesLeft=10;
            for(int i=1;i<=10;i++){
                cout<<"\n\n Enter the Number:";
                cin>>playerNo;
               if(playerNo==secretNo){
                cout<<"Correct Guessing ! you won,"<<playerNo<<"is the secret number"<<endl;
                cout<<"\t\t\t Thanks for playing ............"<<endl;
                cout<<"Play Again  With Us "<<endl;
                break;
               }
               else{
                cout<<"Nope, "<<playerNo<<"is not the right number\n";
                if(playerNo<secretNo){
                    cout<<"The secret number is Grater then your chosen number"<<endl;   

                }
                else{
                    cout<<"The secret Number is smaller then your chosen number"<<endl;
                }
                choicesLeft--;
                cout<<choicesLeft<<"Choice Left."<<endl;
               if(choicesLeft==0){
                cout<<"You failed to Guess The secret  number"<<secretNo;
                cout<<"Play again to win the Game!!\n\n";
               }
            }

            }
        }
         if(difficultLVL==2){
            cout<<"\n You have 7 choices for "
            "Guessing the number between 1 to 100";
            int choicesLeft=7;
            for(int i=1;i<=7;i++){
                cout<<"\n\n Enter the Number:";
                cin>>playerNo;
               if(playerNo==secretNo){
                cout<<"Correct Guessing ! you won,"<<playerNo<<"is the secret number"<<endl;
                cout<<"\t\tThanks for playing ............"<<endl;
                cout<<"Play Again  With Us "<<endl;
                break;
               }
               else{
                cout<<"Nope, "<<playerNo<<"is not the right number\n";
                if(playerNo<secretNo){
                    cout<<"The secret number is Grater then your chosen number"<<endl;   

                }
                else{
                    cout<<"The secret Number is smaller then your chosen number"<<endl;
                }
                choicesLeft--;
                cout<<choicesLeft<<"Choice Left."<<endl;
               if(choicesLeft==0){
                cout<<"You failed to Guess The secret  number"<<secretNo;
                cout<<"Play again to win the Game!!\n\n";
               }
            }
            }

           
        }
         if(difficultLVL==3){
            cout<<"\n You have 5 choices for "
            "Guessing the number between 1 to 100";
            int choicesLeft=5;
            for(int i=1;i<=5;i++){
                cout<<"\n\n Enter the Number:";
                cin>>playerNo;
               if(playerNo==secretNo){
                cout<<"Correct Guessing ! you won,"<<playerNo<<"is the secret number"<<endl;
                cout<<"\t\t\t Thanks for playing ............"<<endl;
                cout<<"Play Again  With Us "<<endl;
                break;
               }
               else{
                cout<<"Nope, "<<playerNo<<"is not the right number\n";
                if(playerNo<secretNo){
                    cout<<"The secret number is Grater then your chosen number"<<endl;   

                }
                else{
                    cout<<"The secret Number is smaller then your chosen number"<<endl;
                }
                choicesLeft--;
                cout<<choicesLeft<<"Choice Left."<<endl;
               if(choicesLeft==0){
                cout<<"You failed to Guess The secret  number"<<secretNo;
                cout<<"Play again to win the Game!!\n\n";
               }
            }
        }
           
    }
    else if(difficultLVL==0){
        exit(0);
    }
    else{
        cout<<"Wrong choice ,Enter the Valid choice to "
        "play the game! (0,1,2,3)"<<endl;
    }
}
}