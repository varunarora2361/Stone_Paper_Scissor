#include<bits/stdc++.h>
using namespace std;
int rockPaperScissor(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // Cases covered:
    // rock-rock
    // paper-paper
    // scissor-scissor
    if(you == comp){
        return 0;
    }

    // Non-draw conditions
    // Cases covered:
    // rp
    // pr
    // rs 
    // sr
    // ps
    // sp
    

    if(you=='r' && comp=='p'){
        return -1;
    }
    else if(you=='p' && comp=='r'){
        return 1;
    }
    if(you=='r' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='r'){
        return -1;
    }

    if(you=='p' && comp=='s'){
        return -1;
    }
    else if(you=='s' && comp=='p'){
        return 1;
    }

}
int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 'r';
    }
    else if(number>33 && number<66){
        comp='s';
    }
    else{
        comp='p';
    }
    cout<<"Enter 'r' for rock, 'p' for paper and 's' for scissor\n";
    cin>>you;
    int result = rockPaperScissor(you, comp);
    if(result ==0){
        cout<<"Game draw!\n";
    }
    else if(result==1){
        cout<<"You win!\n";
    }
    else{
        cout<<"You Lose!\n";
    }
    cout<<"You chose "<<you<<" and computer chose "<<comp<<endl;
    return 0;
}