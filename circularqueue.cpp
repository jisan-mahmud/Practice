#include <iostream>
using namespace std;

class queue{
  int* a;
  int cap,sz,l,r;
  public:
  queue(){
    a = new int[2];
    cap = 2;
    sz = 0;
    l = 0;
    r = -1;
  }
  void increase(){
    int* temp;
    cap = cap*2;
    temp = new int[cap];
    for(int i = 0;i < sz;i++){
      temp[i] = a[i];
    }
    swap(a,temp);
    delete [] temp;
  }
  void enqueue(int value){
    if(sz >= cap){
      increase();
    }
    r = (r+1) % cap;
    a[r] = value;
    sz++;
  }
  void dequeue(){
    if(sz == 0){
      cout << "This Queue Is Empty!\n";
      return;
    }
    a[l] = 0;
    l = (l+1) % cap;
    sz--;
  }
  int front(){
    if(sz == 0){
      cout << "This Queue Is Empty!\n";
      return -1;
    }
    return a[l];
  }
  int size(){
    return sz;
  }
};
int main(){
  queue q;
  q.enqueue(10);
  q.enqueue(503);
  q.enqueue(667);
  q.enqueue(45);
  
  cout << q.front() << endl;
  q.dequeue();
  
  cout << q.front() << endl;
  q.dequeue();
  
  cout << q.front() << endl;
  q.dequeue();
  
  cout << q.front() << endl;
  q.dequeue();
  
  q.enqueue(100);
  cout << q.front()<<endl;
  q.dequeue();
  
  q.enqueue(106);
  cout << q.front();
  return 0;
}