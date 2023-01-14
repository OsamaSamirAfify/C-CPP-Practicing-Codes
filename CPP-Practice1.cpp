#include <iostream>
#include <vector>

using namespace std;

int main(){
    cout<<"\t Welcome to MY Program, it will Ask you for a number and then it will print a \"*\" According to it\n";
    cout<<"\t\t ### Notice That, To Exit the program Just Enter Zero \"0\"\n";
    int number_in, v_num;
    string st_out= "", st_des_out;

    int sum_n;

    //string x= "Gammal Tech",y=x.substr();
    //y.pop_back();
    //cout<<y<<endl;

    // Traditional Thinking
    //do{
      //  cout<<"\nPlease Enter a Number: ";
      //  cin>> number_in;
      //  for (int i=1; i<= number_in; i++){
      //      for (int j=1;  j<= i; j++)
      //        cout<< "*";
      //  cout<<endl;
     //   }
    //}while(number_in != 0);




    // Better code
    do{
        st_out = "";
        v_num = 0;
        st_des_out = "";

        cout<<"\nPlease Enter a Number: ";
        cin>> number_in;

        for (int j=0; j<number_in; j++)
            st_des_out += "*";

        sum_n= (number_in*(number_in+1))/2;

        // for loop to get the Ascending order
        for (int i=1; i<= number_in; i++){
                for (int j=0; j<i; j++){
                    v_num += 1;
                    cout<<v_num<<" ";
                }
            st_out += "*";
            cout<< st_out;
            cout<<endl;
        }

        cout<<"\n\t\t Number in Descending order\n";
        v_num = sum_n;
        for (int i=number_in; i>= 1; i--){
                for (int j=0; j<i; j++){

                    cout<<v_num<<" ";
                    v_num -= 1;
                }
            // First Idea. which is to fill the variable each time with the number of stars using loop. However, i have discovered pop_back method
          //   st_out = "";
           // for (int j=0; j<i; j++)

            cout<< st_des_out;
            st_des_out.pop_back();
            cout<<endl;
        }

    }while(number_in != 0);

    cout<< "You have Entered Zero, Program Ended";
}
