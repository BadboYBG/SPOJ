#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
//    List link in a tag html
    regex pattern("(http|https|ftp):\\/\\/(\\.?\\w+)+(-\\w+)*(\\.\\w+)+(\\:[0-9]+)?(\\/\\w+|\\/)*");
    unsigned int number;
    cin >> number;
    string st;
    cin.ignore();
    for (int i = 1; i <= number; i++ ){
        getline(cin, st);
        cout << i <<endl;
        sregex_token_iterator pos(st.cbegin(),st.cend(),pattern,0);
        sregex_token_iterator end;
        for (; pos!=end ; ++pos ) {
            cout << "Found " << pos->str() << endl;
        }
        cout <<endl;
    }

    return 0;
}
