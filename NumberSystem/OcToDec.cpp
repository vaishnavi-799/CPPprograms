// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void OctalToDecimal(int num)
{
    int i=0;
    int ans=0;
    while(num!=0)
    {
        int rem=num%10;
        ans=pow(8,i)*rem+ans;
       
        i++;
        num=num/10;
    }
     
     cout<<ans<<endl;
     
}
int main() {
    int octal=45;
    

    OctalToDecimal(octal);
    return 0;
}