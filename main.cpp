#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string> theVec; //array of 5 strings
    int numItems = 0;
    char input;
    string items;
    do{
        cout<<"\n==GROCERY LIST MANAGER==";
        cout<<"\nEnter your choice: ";
        cout<<"\n (A)dd an item";
        cout<<"\n (Q)uit";
        cout<<"\nYour choice (A/Q): ";
        cin>>input;
        if(input == 'A'){
            cin>>items;
        numItems ++;
        theVec.push_back(items);
        }
    }
    while(input != 'Q' );
    for(int i = 0; i < theVec.size(); i++)
    {
        cout << theVec[i] << endl;

    }
    return 0;
}
