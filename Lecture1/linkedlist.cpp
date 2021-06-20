#include<iostream>
using namespace std;

struct node{
    int val;
    node* next;
};

class linkedlist{
  node* head;
  
  public:
  
  linkedlist(){
      head=nullptr;
  }
  
  void print(){
      node* n=head;
      
      while(n!=nullptr){
          cout<<n->val<<" ";
          n=n->next;
      }
      
      cout<<endl;
  }
  
  void insert(int val){
      
      node* newnode=new node();
      newnode->val=val;
      newnode->next=nullptr;
      
      
      if(head==nullptr){
          head=newnode;
          return;
      }
      
      newnode->next=head;
      head=newnode;
        
  }
  
  node* search(int val){
      node* n=head;
      while(n!=nullptr){
          if(n->val==val)
            return n;
            n=n->next;
      }
      
      return nullptr;
  }
  
  void delete_node(int val){
      node* n=head;
      
      if(n && (n->val==val)){
          node *temp=n;
          n=n->next;
          head=n;
          delete temp;
          return;
      }
      
      while(n && n->next){
          if(n->next->val==val){
              node *temp=n->next;
              n->next=temp->next;
              
              delete temp;
          }
          n=n->next;
      }
       
  }
    
    
};

int main(){
    
    linkedlist ll1;
    for(int i=0;i<5;i++)
        ll1.insert(i+1);
    
    ll1.print();
    
    int k=1;
    
    string s=(ll1.search(k))?"Present":"Absent";
    cout<<s<<endl;
    
    ll1.delete_node(1);
    
    ll1.print();
    
    s=(ll1.search(k))?"Present":"Absent";
    cout<<s<<endl;
    
    return 0;
}
