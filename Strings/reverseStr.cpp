#include<iostream>
using namespace std;

class Solution {
  public:
    string reverseString(string& s) {
       int i,j;
       i=0;j=s.length()-1;
       while(i<j){
           char ch=s[i];
           s[i]=s[j];
           s[j]=ch;
           
           i++;
           j--;
       }
        return s;
    }
};
int main()
{
    Solution obj;
    string s="program";
    s=obj.reverseString(s);
    cout<<s;

}
