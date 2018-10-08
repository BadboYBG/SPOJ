#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
//  Email Addresses
    regex pattern("[a-zA-Z0-9?^_`{|}~=/!#$%&'*+-]+(\\.[a-zA-Z0-9?^_`{|}~=/!#$%&'*+-]+)*@[a-zA-Z0-9]+(-?\\.?[a-zA-Z0-9]+)*(\\.[a-zA-Z0-9]+)+");
    string st;
    unsigned int number;
    cin >>number;
    cin.ignore();
    for(int i = 0; i < number; i++){
        getline(cin,st);
        if(regex_match(st, pattern)){
            cout <<"Valid!"<<endl;
        }else{
            cout <<"Invalid!"<<endl;
        }
    }
    return 0;
}
