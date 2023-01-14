#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){

    //Testing get line
    string linein;

    cout<< "Please Enter Full name: ";
    getline (cin, linein);
    cout<< "Your full Name Is: "<<linein;
    // Practicing on String, and matching the letter even if it not in the same Case.
    vector<string> names = {"Osama", "Afify", "Just Keep Going", "Never Give up", "King of Programming"};
    char input_letter, first_letter;
    cout<< "\nPlease Enter a Letter to be Matched: ";
    cin>>input_letter;

    input_letter >= 'A' && input_letter <= 'Z'? input_letter += 32: input_letter +=0;
    for (int i=0; i<names.size(); i++ ){
        //cout<< names[i]<<endl;
        first_letter = names[i][0];
        first_letter >= 'A' && first_letter <= 'Z'? first_letter += 32: first_letter +=0;
        first_letter == input_letter? cout<<names[i]<<endl : cout<<"" ;
    }


}
