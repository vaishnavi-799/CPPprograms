#include <iostream>
using namespace std;
class Queue {
    public:
    int q[5];
    
    int front,rear,cap;
    Queue(){
         front=-1;
         rear=-1;
          cap=5;
    }
    

    
   
    void Enqueue(int n)
    {
        if((rear-front)==cap-1)
        {
            cout<<"Queue is full\n";
            return ;
        }
        if(rear==-1)
        {
             front=(front+1)%cap;
        }
        rear=(rear+1)%cap;
        q[rear]=n;
    }
    void Dequeue()
    {
        if(rear==-1 && front ==-1)
            cout<<"Queue is Empty\n";
        front=(front+1)%cap;
        
         if (front == rear) {
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
    qq.Enqueue(50);
    //qq.Enqueue(40);
     
     qq.Dequeue();
     qq.Dequeue();
     qq.Dequeue();
      
    qq.display();//  ([)]
    //cout<<q;
    return 0;
}