#include <iostream>
#include <set>

using namespace std;

int main(){
    // Testing set with char
    char config [][2] = {"W","e","w","q","f","A","g","h","r","n","a"};
    set <char> set_test;

    for (int j=0; j<11; j++)
        set_test.insert(config[j][0]);

    set<char>::iterator i;

    for (i=set_test.begin(); i!=set_test.end(); i++){
        printf("%c ", *i);
        printf("%d \n", *i);
    }

    // Testing set with float
    float config2 [10]= {10.5,15.7,20.8,1.2,0.7,179.89,179.88,18.02,88.557,88.559};
    set <float> set_test2;

    for (int j=0; j<10; j++)
        set_test2.insert(config2[j]);
    // Set iterator should be same type as set variable !!
    set<float>::iterator k;

    for (k=set_test2.begin(); k!=set_test2.end(); k++){
        printf("%.3f ", *k);

    }

    set<int> s={9,8,7}; set<int>::iterator it;
    for (it=s.begin(); it!=s.end(); it++){
        printf("\n\n%d ", *it);

    }
}
