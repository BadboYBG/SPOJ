#include<iostream>
#include<string>
#include<regex>
using namespace std;

int main()
{
    regex pattern("\\d+\\s\\d+\\.\\d+\\s(192\.168\.200\.1)\\s\\d{1,3}(\\.\\d{1,3}){3}\\sHTTP\\s\\d{3}\\s[A-Z]+\\s\\/\\/[a-zA-Z/.=+&:?-]+\\sHTTP\\/1.1");
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
