#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1,s2;

    cout<<"*********************************************"<<endl;
    cout<<"         DOCUMENT TEXT ANALYZER              "<<endl;
    cout<<"*********************************************"<<endl;
    cout<<endl;
    cout<<"enter paragraph"<<endl;
    getline(cin,s1);
    cout<<"---------------------------------------------"<<endl;
    cout<<"Text Analysis                                "<<endl;
    cout<<"---------------------------------------------"<<endl;
    int chars=s1.length();
    int words=1,alpha=0,digit=0,special=0;
    for (int i=0; i<chars;i++)
    {
        char c=s1[i];
    if (c>='A'&&c<='Z' || c>='a'&&c<='z')
        alpha++;
    else if (c>='0'&&c<='9')
        digit++;
    else if(c==' ')
        words++;
    else
        special++;
}
    cout<<"Characters                  :"<<chars<<endl;
    cout<<"words                       :"<<words<<endl;
    cout<<"Alphabets                   :"<<alpha<<endl;
    cout<<"digits                      :"<<digit<<endl;
    cout<<"special characters          :"<<special<<endl;
    cout<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"String Extraction                           "<<endl;
    cout<<"--------------------------------------------"<<endl;



}







