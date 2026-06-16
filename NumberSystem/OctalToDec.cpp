// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
void BinaryToOctal(string str)
{
    while(str.length()%3!=0)
        str='0'+str;
    string ans=" ";    
    for(int i=0;i<str.length();i += 3)
    {
        string temp=str.substr(i,3);
        if(temp == "000") ans += "0";
        else if(temp == "001") ans += "1";
        else if(temp == "010") ans += "2";
        else if(temp == "011") ans += "3";
        else if(temp == "100") ans += "4";
        else if(temp == "101") ans += "5";
        else if(temp == "110") ans += "6";
        else if(temp == "111") ans += "7";
        
        
        
    }
    cout<<ans;
}
int main() {
    string str;
    

    BinaryToOctal("1111");
    return 0;
}