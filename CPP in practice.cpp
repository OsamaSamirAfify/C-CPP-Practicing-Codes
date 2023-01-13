# include <iostream>
# include <stdio.h>
#include <vector>

using namespace std;

int main(){

    // you can use endl "End line" to start a new line,
    // also you can use \n as we do in C and most of programming languages
    cout<<"Hello Osama Afify, Do not Give up \n"<<endl;

    //Here we can use print command from c language, same concept applying to other commands
    cout<<"Hay OsOs, ";
    printf("Keep Going\n");

    int x=5, z, i;
    cout<<x;
    cout<<"Gammal Tech"<<endl;

    // Testing the input
    cin>>x>>z ;
    // Putting variable in our print command
    cout<<" You have entered: "<<x<<" "<<z<< " Check it\n";

    // nested loops with same variable as declared inside it only
    for (int i=0; i < 2; i++)
        for (int i=0; i < 2; i++)
            cout<< "Hello Boss\n";

    vector<int> x_list;
    x_list.push_back(9);
    x_list.push_back(200);
    x_list.push_back(500);
    x_list.pop_back();
    cout<< x_list[2]<<endl;
    cout<< x_list.size()<<endl;
    for (int i=0; i <x_list.size() ; i++)
        cout<< x_list[i]<<endl;

    vector<int> v; v.push_back(15); v.clear(); cout<<v.size();







}
