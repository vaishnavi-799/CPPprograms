#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> s;
    public:
    void Push(int n)
    {
        s.push_back(n);
    }
    void Pop()
    {
        s.pop_back();
    }
    int Top()
    {
        if(s.size()==-1){
            cout<<"S Empty\n";
        }
        return s[s.size()-1];
    }
    int IsEmpty()
    {
        if(s.size()==-1){
            cout<<"S Empty\n";
        }
        return 1;
    }
};
int main()
{
    Stack st;
    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Pop();
    cout<<st.Top()<<endl;
    cout<<st.IsEmpty()<<endl;
}