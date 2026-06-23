// input taken
#include <bits/stdc++.h>
using namespace std;
vector<int> ArraySpaceInput()
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

        return arr;
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
vector<vector<int>> GraphInput()
{
    // Input:
    //     e=5 v=3
    //     0 1
    //     1 2
    //     3 4

    int E,V;
    cout<<"entr edges : ";   
    cin>>E;
    cout<<"entr vtx : ";
    cin>>V;
    vector<vector<int>> v(V);
    for(int i=0;i<E;i++)
    {
        int u,v1;
        cout<<"Enter u and v: ";
        cin>>u;
        cin>>v1;
        
        v[u].push_back(v1);
        v[v1].push_back(u);
        
    }
    
    for (int i = 0; i < V; i++) {
        cout << i << " -> ";
        for (int x : v[i])
            cout << x << " ";
        cout << endl;
    }
    
    return v;
}

vector<vector<int>> GraphInput2()
{
        // 3
        // 1 2 3
        // 3 2 1
        // 2 3 1
    int n;
    cin>>n;
    vector<vector<int>> mat(n,vector<int>(n));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            cin>>mat[i][j];
        }
    }
    //int row=mat.size(); col=mat[0].size();
    return mat;
}
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
    for(string c:v)
    {
        cout<<c<<" ";
    }
    return arr;
}
int main() {
    
        vector<int> v=ArraySpaceInput();
        //StingInput();
        //ArraySizeGiven();


        // double x = 12.3456;
        // cout << fixed << setprecision(2) << x;
    
}