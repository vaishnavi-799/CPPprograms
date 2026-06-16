// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1 )
            return false;
         stack<char> s1;
        //int i=0;
       
        for(char ch:s)
        {
            //cout<<ch<<" ";
            if( ch=='('  || ch=='{'  || ch=='[' )
            {
                
                s1.push(ch);
                
            }
            else{
                if(s1.empty())
                {
                    return false;
                }
                if((s1.top()=='(' && ch==')') || (s1.top()=='{' && ch=='}') || (s1.top()=='[' && ch==']'))
                {
                    s1.pop();
                    
                }
                else{
                    return false;
                }
            }
        
        }
        
        if(!s1.empty())
            return false;
        
        return true;
    }
};
int main() {
    Solution obj;
    string s="[()]";//  ([)]
    cout<<obj.isValid(s);
    return 0;
}