#include<bits/stdc++.h>
using namespace std ;
//Stack IMplemntation using Doubly linked list
struct Node{
	int data ;
	
	Node* next ;
	Node(int val){
		data = val ;
		next = nullptr ;
	}
};
struct mystack{
    Node* head ;
    int size ;
    mystack(){
        head = nullptr ;
        size =0 ;
    }
    void insert(int val){
        Node* temp=new Node(val) ;
        temp->next = head ;
        head = temp ;
        size +=1 ;
    }
    int pop(){
        if(!head){
            return -1;
        }
        int res = head->data ;
        Node* temp = head ;
        head = head->next ;
        size-=1 ;
        delete temp ;
        return res;
    }
    int SizeoftheStack(){
        return size ;
    }
    bool isEmpty(){
        return size==0 ;
    }
    int top(){
        if(!head){
            return -1 ;
        }
        return head->data ;
    }
    
    void printDoublyLinkedList(){
        Node* temp = head; 
    	while(head){
    		cout<<head->data<<" "; head = head->next ;
    	}
    	head = temp ;
    	cout<<"\n";
    }
};

int main(){
	Node* head = new Node(0) ;
	int n ;
	cin>>n;
	mystack obj ;
	for( int i=0;i < n ; i+=1 ){
		int x ;
		cin>>x ;
		obj.insert(x);
		obj.printDoublyLinkedList() ;
	}
	cout<<obj.pop()<<"\n";
	cout<<obj.top()<<"\n";
}
