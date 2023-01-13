#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main(){

    int x[10] = {10, 18, 80 , 69 , 70, 60, 40, 30, 90, 15};
    vector <int> y = {10, 18, 80 , 69 , 70, 60, 40, 30, 90, 15};

    y = {};
    // filling y with values of x - another way
    for (int i=0; i<10; i++)
        y.push_back(x[i]);


    x[5] = 20;
    //Printing X Values
    cout<<"Starting Values of X:\t";
    for (int i=0; i<10; i++)
        cout<<x[i]<<" ";
    cout<<"\n";

    cout<<"Starting Values of Y:\t";
    //Printing y Values
    for (int i=0; i<10; i++)
        cout<<y[i]<<" ";
    cout<<"\n";

    cout<<"\n";
    // sorting
    sort(x, x+10);
    sort(y.begin(), y.end());

    //Printing X Values
    cout<<"Values of X After Sorting:\t";
    for (int i=0; i<10; i++)
        cout<<x[i]<<" ";
    cout<<"\n";

    cout<<"Values of Y After Sorting:\t";
    //Printing y Values
    for (int i=0; i<10; i++)
        cout<<y[i]<<" ";
    cout<<"\n";

    cout<<"\n";
    // reversing
    reverse(x, x+10);
    reverse(y.begin(), y.end());

    //Printing X Values
    cout<<"Values of X After reversing:\t";
    for (int i=0; i<10; i++)
        cout<<x[i]<<" ";
    cout<<"\n";

    cout<<"Values of Y After reversing:\t";
    //Printing y Values
    for (int i=0; i<10; i++)
        cout<<y[i]<<" ";
    cout<<"\n";



}

