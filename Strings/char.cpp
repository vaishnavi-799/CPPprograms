#include <iostream>
#include <cstring>
using namespace std;

void StringDynamic(int n)
{
    char *str=new char[n];

    cin.ignore(); // clear buffer
    cin.getline(str,n);
    cout<<str<<endl;

    delete[] str;

}
int main() {
    
    char str1[100];
    cout<<"Enter string: ";
    cin.getline(str1,100);
    
    char str2[100];
    cout<<"Enter string: ";
    cin.getline(str2,100);
    
    char str[100];
    strcpy(str,str1);
    cout<<"String After copy: "<<str<<endl;
    
    cout<<"String After compare: "<< strcmp(str1,str2)<<endl;
    strcat(str1,str2);
    cout<<"After cat: "<<str1<<endl;
}
