// input taken
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
bool check(vector<int> v,int sum)
{
    for(int i=0;i<v.size();i++)
    {
            for(int j=i+1;j<v.size();j++)
            {
                if(sum==(v[i]+v[j]))
                    cout<<i<<" "<<j<<endl;
            }
    }
    return 0;
}
int main() {
    
        vector<int> v=ArraySpaceInput();
        int sum;
        cout<<"Enter Target : ";
        cin>>sum;
        cout<<check(v,sum);
        
        
        
    
}