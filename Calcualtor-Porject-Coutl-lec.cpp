#include <iostream>
using namespace std;

int main(){
    float firstnum, secondnum, result=0;
    char operation;
    bool notvalid;

    cout<<"\tThis is a Calculator Program, you will Be asked to enter 2 numbers and a the operation Sign\n";

    cout<<"Please enter the first Number: ";
    cin>>firstnum;

    cout<<"Please Enter the Second Number: ";
    cin>>secondnum;

    do {
    cout<<"Please Enter the Operation Using one of these Signs \"+, -, /, *\": ";
    cin>> operation;


    switch(operation){
        case '+':
            result = firstnum + secondnum;
            notvalid = 0;
            break;
        case '/':
            result = firstnum / secondnum;
            notvalid = 0;
            break;
        case '*':
            result = firstnum * secondnum;
            notvalid = 0;
            break;
        case '-':
            result = firstnum - secondnum;
            notvalid = 0;
            break;
        default:
            notvalid = 1;
            cout<<"\n You have entered An invalid Sign";
    }
    } while (notvalid);

    cout<<"Can you Guess the output: ";
    cin>>firstnum;

    if (result == firstnum)
        cout<< "You are a genius\n";
    else
        cout<< "Good Luck, Try again, The result is: "<<result;




}
