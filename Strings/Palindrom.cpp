#include<iostream>
using namespace std;
class Solution{
    public:
    bool charecter(char ch)
      {
          if( (ch<'a' || ch >'z') && (ch<'A' || ch >'Z') && (ch<'0' || ch>'9') )
            return false;
          
        return true;    
      }
    bool isPalindrome(string s) {
        int i,j;
        i=0;
        j=s.length()-1;
        while(i<j)
        {
            
            if(!charecter(s[i]) )
            {
                i++;
            }
            else if(!charecter(s[j]) )
            {
                j--;
            }
            else if(tolower(s[i])==tolower(s[j]))
            {
                i++;
                j--;
            }
            else{
                cout<<i<<" "<<j<<endl;
                cout<<s[i]<<" "<<s[j]<<endl;
                return false;
            }
        }
        
        
        return true;
    }
};    
int main()
{
    Solution obj;
    string s="abba";
    bool f=obj.isPalindrome(s);
    cout<<f;

}
