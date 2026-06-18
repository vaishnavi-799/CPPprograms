#include <bits/stdc++.h>
using namespace std;
vector<int> ArraySpaceInput()
{
    string s;
    cout<<"Enter Array with {,} :";
    getline(cin,s);
    
    s.erase(remove(s.begin(), s.end(), '['), s.end());
    s.erase(remove(s.begin(), s.end(), ']'), s.end());
    
    vector<int> arr;
    stringstream ss(s);
    string num;
    
    while(getline(ss,num,','))
    {
        arr.push_back(stoi(num));
    }
    
    

        return arr;
}
void freguency( vector<int> v)
{
    unordered_map<int,int> m;
    for(int i:v)
    {
        m[i]++;
    }
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}
vector<int> Duplicate( vector<int> v)
{
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    
    
    return v;
}
int main() {
    
        vector<int> v1=ArraySpaceInput();
       
        v1=Duplicate(v1);
         cout<<"[";
        for(int i:v1)
            cout<<i<<" ";
            
        cout<<"]";    
        
        
        
    
}