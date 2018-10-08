#include<iostream>
#include<string>
#include<regex>
using namespace std;

int main()
{
//  List IP in log web
    regex pattern("(25[0-5]|2[0-4][0-9]|[01]?[0-9]?[0-9])(\\.(25[0-5]|2[0-4][0-9]|[01]?[0-9]?[0-9])){3}");
    unsigned int number;
    string st;
    cin >> number;
    cin.ignore();
    for(int i = 1; i <= number; i++){
        cout <<i <<endl;
        getline(cin,st);
        sregex_token_iterator pos(st.cbegin(), st.cend(), pattern, 0);
        sregex_token_iterator end;
        for(;pos!=end;++pos){
            cout <<"Found "<<pos->str()<<endl;
        }
    }
    return 0;
}
