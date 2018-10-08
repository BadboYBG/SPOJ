#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{


//    9-digits Telephone number
//    regex pattern("\\b09[[:digit:]]{2}\\.[[:digit:]]{3}\\.[[:digit:]]{3}\\b");

//     11-digits Telephone Number
//     regex phone11("\\b01[[:digit:]]{9}\\b");
//
//     Telephone number in International Format
//     regex phone11("\\+841\\.[[:digit:]]{3}\\.[[:digit:]]{3}\\.[[:digit:]]{3}");
//
//     Dual Format Telephone Number
//     regex phone11("(\\+841|01)[[:digit:]]{9}");
//
//     Numeric String
//     regex pattern("\\d+");
//
//     Numeric String Without Leading Zeros
//     regex pattern("[1-9]+\\d*");
//
//     Integer Numbers
//     regex pattern("(\\+|-)?[1-9]\\d*");
//
//     Alphabet Strings
//     regex pattern("[a-zA-Z\\s]*");
//
//     Alpha-numberic Strings With Limited Length
//     regex pattern("[a-z0-9]{6,20}");
//
//     List phone numbers
//     regex pattern("0[0-9]{9,10}");

//    regex pattern("\\w+(\\d*\\w*[^\\w^\\d^\\@^\\(^\\)]*\\_*\\^*)*@\\w+(\\d*\\w*[^\\w^\\d^\\@^\\(^\\)]*\\_*\\^*)*^\\-\\.[a-z]{3,6}");
//    regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");^[\\.{2}]
//    regex pattern("\\w+[a-zA-Z0-9!#$%&'*+-/=?^_`{|}~]+[^-\\.]+@\\w+[a-zA-Z0-9!#$%&'*+-/=?^_`{|}~]+[^-]\\.[a-z]+");
//    regex pattern("\\w+\\.{2,}");
//    unsigned int count;
//    cin >> count;
//    string st;
//    cin.ignore();
//
//    for(int i = 0; i < count; i++){
//       getline(cin, st);
//        if(regex_match(st, pattern)){
//            smatch result;
//            regex_search(st, result, pattern);
//            if(result.size()>0){
//                cout <<"Invalid!" <<endl;
//            }else{
//                cout <<"Valid!" <<endl;
//            }
//        }else{
//            cout <<"Invalid!" <<endl;
//        }
//    }

    //regex phone("(\\w+[^\\w.();:\",\\[\\]@]*\\.?)+[^-\\.]@(\\w+[^\\w\\.\\(\\)\\;\\:\"\\,\\[\\]@]*\\.?)+[^-\\.]\\.[a-z]+");
    // !#$%&'*+-/=?^_`{|}~ \\(\\)\\;\\:\",\\[\\]@
    //regex  phone("[?^_`{|}~=/!#$%&'*+-]");
    //regex phone("([a-zA-Z0-9?^_`{|}~=/!#$%&'*+-]+\\.?)+[^-\\.]@([a-zA-Z0-9]+-*\\.?)+[^-\\.]\\.[a-z]+");

//    Email Addresses
//    regex phone("[a-zA-Z0-9?^_`{|}~=/!#$%&'*+-]+(\\.?[a-zA-Z0-9?^_`{|}~=/!#$%&'*+-]+)*@[a-zA-Z0-9]+((-|\\.)?\\w+)*\\.com");
//
//    string st;
//    unsigned int count;
//    cin >>count;
//    cin.ignore();
//    for(int i = 0; i < count; i++){
//        getline(cin,st);
//        if(regex_match(st,phone)){
//            cout <<"Valid!"<<endl;
//        }else{
//            cout <<"Invalid!"<<endl;
//        }
//    }


//    List link in a tag html
//    regex pattern("(http|https|ftp):\\/\\/\\w+((-|\\.)?\\w+)*\\:?[0-9]*(\\/?\\w*)*");

//    email
//    regex pattern("(\\.?[a-zA-Z0-9?^_`{|}~=/!#$%&'*+-]+)*@[a-zA-Z0-9]+((-|\\.)?\\w+)*\\.com");
//  raw email
//    regex pattern("[a-zA-Z0-9]+(-|_|\\.)?[a-zA-Z0-9]+@[a-zA-Z0-9]+(-?)[a-zA-Z0-9]+\\.[a-zA-Z0-9]+");

//  List IP in log web
//    regex pattern("\\b\\d{1,3}(\\.\\d{1,3}){3}\\b");

//    Matching specific filenames
//    regex pattern("(\\w+\\.)+[a-zA-Z34]{3,}");
//    regex image("\\.[pngjifPNGJIF]{3,}");
//    regex document("\\.[pdfoctxPDFOCTX]{3,}");
//    regex media("\\.[mp34aviMPAVI]{3,}");
//    unsigned int count;
//    cin >> count;
//    string st;
//    string found;
//    cin.ignore();
//
//    for (int i = 1; i <= count; i++ ){
//        getline(cin, st);
//        cout << i <<endl;
//        sregex_token_iterator pos(st.cbegin(),st.cend(),pattern,0);
//        sregex_token_iterator end;
//        for (; pos!=end ; ++pos ) {
//            cout << "Found " << pos->str() << endl;
//            found = pos->str();
//            smatch result;
//            regex_search(found, result, image);
//            if(result.size()>0){
//                cout << "Found " << found <<" : hinh anh" <<endl;
//            }
//
//            regex_search(found, result, media);
//            if(result.size()>0){
//               cout << "Found " << found <<" : media" <<endl;
//            }
//
//            regex_search(found, result, document);
//            if(result.size()>0){
//                cout << "Found " << found <<" : tai lieu" <<endl;
//            }

            //cout <<a<<endl;
//        }
//        cout <<endl;
//    }

//      Modify Telephone Numbers
//    regex phone11("\\b012(3|4|5|7|9)\\d{7}\\b");
//    regex phone08x("\\b012(3|4|5|7|9)");
//    unsigned int count;
//    cin >> count;
//    string st,found, change;
//    cin.ignore();
//    for(int i = 1; i <= count; i++){
//        getline(cin,st);
//        cout <<i<<endl;
//        sregex_token_iterator pos(st.cbegin(), st.cend(), phone11, 0);
//        sregex_token_iterator end;
//        for(;pos!=end;++pos){
//            found = pos->str();
//            char ax = found.at(3);
//            switch(ax){
//                case '3':
//                {
//                    //string replace_by("083");
//                    //change = regex_replace(found,phone0123,replace_by);
//                    change = regex_replace(found,phone08x,"083");
//                    break;
//                }
//                case '4':
//                {
////                    string replace_by("084");
////                    change = regex_replace(found,phone0124,replace_by);
//                    change = regex_replace(found,phone08x,"084");
//                    break;
//                }
//                case '5':
//                {
////                    string replace_by("085");
////                    change = regex_replace(found,phone0125,replace_by);
//                    change = regex_replace(found,phone08x,"085");
//                    break;
//                }
//                case '7':
//                {
////                    string replace_by("081");
////                    change = regex_replace(found,phone0127,replace_by);
//                    change = regex_replace(found,phone08x,"081");
//                    break;
//                }
//                case '9':
//                {
////                    string replace_by("082");
////                    change = regex_replace(found,phone0129,replace_by);
//                    change = regex_replace(found,phone08x,"082");
//                    break;
//                }
//            }
//            cout << "Thay doi: "<<change <<endl;
//        }
//    }
    return 0;
}
