#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    cout<<"the string is :"<<str;

    string str1="Hello";
    string str2="world";
    string st=str1;
    
    cout<<str1.length()<<endl;
    st.append(str2);
    cout<<st<<endl;
    str2.insert(2, "XX");
    str1.erase(0,1);
    cout<<str2<<endl;
    cout<<str1<<endl;
}
