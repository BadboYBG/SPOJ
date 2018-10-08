#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
    regex image("[a-zA-Z0-9_]+(\\.[a-zA-Z0-9_]+)*\\.(([pP][nN][gG])|([jJ][pP][gG])|([gG][iI][fF]))");
    regex media("[a-zA-Z0-9_]+(\\.[a-zA-Z0-9_]+)*\\.(([mM][pP][34])|([aA][vV][iI]))");
    regex document("[a-zA-Z0-9_]+(\\.[a-zA-Z0-9_]+)*\\.(([pP][dD][fF])|([dD][oO][cC])|([pP]{2}[tT][xX]))");
    unsigned int count;
    cin >> count;
    string st;
    cin.ignore();

    for (int i = 1; i <= count; i++ ){
        cout << i <<endl;
        getline(cin, st);
        sregex_token_iterator pos_img(st.cbegin(),st.cend(),image,0);
        sregex_token_iterator end_img;
        for (; pos_img!=end_img ; ++pos_img ) {
            cout << "Found " << pos_img->str() <<" : hinh anh" <<endl;
        }

        sregex_token_iterator pos_mda(st.cbegin(),st.cend(), media,0);
        sregex_token_iterator end_mda;
        for (; pos_mda!=end_mda ; ++pos_mda ) {
            cout << "Found " << pos_mda->str() <<" : media" <<endl;
        }

        sregex_token_iterator pos_doc(st.cbegin(),st.cend(),document,0);
        sregex_token_iterator end_doc;
        for (; pos_doc!=end_doc ; ++pos_doc) {
            cout << "Found " << pos_doc->str() <<" : tai lieu" <<endl;
        }

    }

    return 0;
}
