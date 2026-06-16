#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void DecimalToBinary(int num)
{
    string  str="";
        while(num!=0)
        {
            int r=num%2;
            str.insert(str.begin(),r+'0');
            num=num/2;
        }
        cout<<str<<endl;
}
void OctalToBinary(int num)
{
    string  str="";
        while(num!=0)
        {
            int r=num%10;
            switch(r)
            {
                case 0:str="000"+str; 
                break;
                case 1:str="001"+str; 
                break;
                case 2:str="010"+str; 
                break;
                case 3:str="011"+str; 
                break;
                case 4:str="100"+str; 
                break;
                case 5:str="101"+str; 
                break;
                case 6:str="110"+str; 
                break;
                case 7:str="111"+str; 
                break;
               
                
            }
            num=num/10;
        }
        cout<<str<<endl;
}
void BinaryToDecimal(string  str)
{
    int num=0;
     int n=str.length()-1;
     int i=0;
     while(i<str.length())
     {
         
         int p=str[i]-'0';
         
         num=num+pow(2,n)*p; //stoi(s, 0, 2) 
       
        i++;
         n--;
     }
      cout<<endl;
     cout<<num<<endl;
     
}
int main() {
        BinaryToDecimal("111");    
    //   DecimalToBinary(2);
    //   OctalToBinary(25);
}