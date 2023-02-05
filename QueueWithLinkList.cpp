#include <iostream>
using namespace std;
template <class T>
class node{
  public:
  T data;
  node* next;
};
template <class T>
class queue{
  node<T>* head;
  node<T>* tail;
  int sz;
  node<T>* createNode(T value){
    node<T>* a = new node<T>;
    a->data = value;
    a->next = NULL;
    sz++;
    return a;
  }
public:
  queue(){
    head = NULL;
    tail = NULL;
    sz = 0;
  }
  void enqueue(T value){
    node<T>* new_node = createNode(value);
    if(head == NULL){
      head = new_node;
      tail = new_node;
      return;
    }
    tail->next = new_node;
    tail = new_node;
  }
  void dequeue(){
    if(sz == 0) return;
    if(sz == 1){
      delete head;
      return;
      sz--;
    }
    node<T>* a = head;
    head = head->next;
    delete a;
  }
  T front(){
    return head->data;
  }
  int size(){
    return sz;
  }
};
int main(){
  queue<double> a;
  a.enqueue(10.5);
  a.enqueue(16.3);
  a.enqueue(6.55);
  cout << a.size();
  cout << a.front();
  return 0;
}