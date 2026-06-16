// input taken
#include <bits/stdc++.h>
using namespace std;
void ArraySpaceInput()
{
    string s;
    getline(cin,s);
    
    s.erase(remove(s.begin(), s.end(), '{'), s.end());
    s.erase(remove(s.begin(), s.end(), '}'), s.end());
    
    vector<int> arr;
    stringstream ss(s);
    string num;
    
    while(getline(ss,num,','))
    {
        arr.push_back(stoi(num));
    }
    
    for(int i:arr)
        cout<<i<<" ";
}
void  StingInput(){
    string s;
    int num;
    cin>>num;
    cin.ignore();
    getline(cin,s);
    cout<<s;
}
void  ArraySizeGiven()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        v[i]=arr[i];
        
    }
    for(int i: arr)
        cout<<i<<" ";
}
int main() {
    
        //ArraySpaceInput();
        //StingInput();
        ArraySizeGiven();
    
}