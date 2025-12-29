// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";


#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std ;

int main(){
    string grade ;
    cout << "Press Enter 3 times to reveal your future." ;
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int i = rand()%9;
    if(i == 1){
        grade = "A" ;
    }else if(i == 2){
        grade = "B+" ;
    }else if(i == 3){
        grade = "B" ;
    }else if(i == 4){
        grade = "C+" ;
    }else if(i == 5){
        grade = "C" ;
    }else if(i == 6){
        grade = "D+" ;
    }else if(i == 7){
        grade = "D" ;
    }else if(i == 8){
        grade = "F" ;
    }else{
        grade = "W" ;
    }
    cout << "You will get " << grade <<" in this 261102." ;
}