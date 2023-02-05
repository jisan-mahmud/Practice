#include <iostream>
using namespace std;
#define MAX_VALUE 10
class Queue{
  int a[MAX_VALUE];
  int l,r,sz;
  public:
  Queue(){
    l = 0;
    r = 0;
    sz = 0;
  }
  void inqueue(int value){
    if(MAX_VALUE == sz){
      cout<< "Queue is full";
      return;
    }
    r = (r+1) % MAX_VALUE;
    a[r] = value;
    sz++;
  }
  void dequeue(){
    if(sz == 0){
      cout << "Queue is empty";
      return;
    }
    a[l] = 0;
    l = (l+1) % MAX_VALUE;
    sz--;
  }
  int front(){
    if(sz == 0){
      cout << "Queue is empty";
      return -1;
    }
    return a[l+1];
  }
  int size(){
    return sz;
  }
};
int main(){
  Queue q;
  q.inqueue(10);
  q.inqueue(503);
  q.inqueue(667);
  q.inqueue(45);
  q.inqueue(35);
  q.inqueue(43);
  q.inqueue(635);
  q.inqueue(75);
  q.inqueue(05);
  q.inqueue(65);
  cout << q.size()<<endl;
  cout << q.front()<<endl;
  q.dequeue();
  
  cout << q.front()<<endl;
  q.dequeue();
  
  cout << q.front()<<endl;
  q.dequeue();
  
  cout << q.front()<<endl;
  q.dequeue();
  
  cout << q.front()<<endl;
  q.dequeue();
  
  cout << q.front()<<endl;
  q.dequeue();
  
  cout << q.front()<<endl;
  q.dequeue();
  
  cout << q.front()<<endl;
  q.dequeue();
  
  cout << q.size();
  q.inqueue(1000);
  cout << q.front()<<endl;
  q.dequeue();
  
  cout << q.front()<<endl;
  q.dequeue();
  
  cout << q.front()<<endl;
  q.dequeue();
  
  cout << q.front()<<endl;
  q.dequeue();
}