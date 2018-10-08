#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
//  List email in raw data
    regex pattern("[a-zA-Z0-9-_.]+@[a-zA-Z0-9_]+(\\.[a-zA-Z0-9]+)+");
    string st;
    unsigned int number;
    cin >>number;
    cin.ignore();
    for(int i = 1; i <= number; i++){
        cout <<i<<endl;
        getline(cin,st);
        sregex_token_iterator pos(st.cbegin(), st.cend(), pattern, 0);
        sregex_token_iterator end;
        for(;pos!=end; ++pos){
            cout <<"Found "<<pos->str()<<endl;
        }
    }
    return 0;
}
