#include<iostream>
using namespace std;
struct Node{
	int data;
    Node *next;
};
 Node *root =NULL;
 void push(int x){
 	Node *node=new Node;
 	if(root==NULL){
 		node->data=x;
 		node->next=NULL;
 		root=node;
	}
	else{
		node->data=x;
		node->next =root;
		root=node;

	}

 }
void pop(){
	if(root==NULL)
		cout<<"stack underflow";
	else
		root=root->next;
}
int peek(){
	return root->data;
}
int main(){
push(1);
cout<<peek();
push(2);
cout<<peek();
push(3);
pop();
cout<<peek();

}




// #include <iostream>
// using namespace std; 
// int ar[5];
// int top=-1;
// int isempty(){
// 	if(top>-1)
// 		return 1;
// 	else
// 	 return 0;
// }
// void push(int n){
// 	top++;
// if(top<5){
// 	ar[top]=n;
// }
// else{
//  cout<<"over flow";
//  top--;
// }
// }
// void pop(){
// 	if(isempty()) 
// 	top--;
//  else cout<<"underflow"<<endl;
// }
// int peek(){
// 	if(top>-1)
// 	return ar[top];

// }

// int main(){
// 	push(1);
// 	push(2);
// 	// push(3);
// 	// push(4);
// 	// push(5);
// 	// push(6);
// 	cout<<peek()<< top<<endl;
// 	pop();
// 	cout<<peek()<<top<<endl;
// 	pop();
// 	cout<<peek()<<endl;
// 	// pop();
// }