// ["flower","flow","flight"]    = 2
#include <bits/stdc++.h>
using namespace std;

vector<string> inputString()
{
    string s;
    getline(cin,s); //["the","ball","svcs"]
    s.erase(remove(s.begin(),s.end(),'['),s.end());
    s.erase(remove(s.begin(),s.end(),']'),s.end());
    s.erase(remove(s.begin(), s.end(), '"'), s.end());
    vector<string> arr;
    stringstream ss(s);
    string ch;
    
    while(getline(ss,ch,','))
    {
        arr.push_back(ch);
    }
    
    return arr;
}
int main() {
    
    vector<string> v=inputString();
    sort(v.begin(),v.end());
    int c=0;
    string str1=v[0];
    string str2=v[v.size()-1];
    for(int i=0;i<str2.size();i++)
    {
        if(str1[i]==str2[i])
            c++;
        else break;    
    }
    cout<<c;
}