// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Queue {
    public:
    int q[100];
    
    int front,rear;
    Queue(){
         front=-1;
         rear=-1;
    }
    

    
   
    void Enqueue(int n)
    {
        if(rear==-1)
        {
            front++;
            rear++;
            q[front]=n;
            return ;
        }
        rear++;
        q[rear]=n;
    }
    void Dequeue()
    {
        if(rear==-1 && front ==-1)
            cout<<"Queue is Empty\n";
        front++;  
         if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
    void display()
    {
        for(int i=front;i<=rear;i++)
            cout<<q[i]<<" ";
    }
    
    
};
int main() {
    Queue qq;
    qq.Enqueue(10);
    qq.Enqueue(20);
    qq.Enqueue(30);
    qq.Enqueue(40);

    qq.Dequeue();
    qq.Dequeue();
    
      
    qq.display();//  ([)]
    //cout<<q;
    return 0;
}