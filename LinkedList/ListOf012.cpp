#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node* segregate(Node *head){
 	if(head == NULL){
 		return NULL;
 	}   
 	int zero = 0, one = 0 , two = 0;
 	Node* temp = head;
 	while(head!=NULL){
 		if(head->data == 0)
 			zero++;
 		else if(head->data == 1)
 			one++;
 		else 
 			two++;
 		head = head->next;
 	}    
 	delete temp;
 	Node* h1 = NULL;
 	Node* t1 = NULL;
 	while(zero>0){
 		Node* n = new Node(0);
 		if(h1 == NULL){
 			h1 = n;
 		}else{
 			t1->next = n;
 		}
 		t1 = n;
 		zero--;
 	}
 	while(one>0){
 		Node* n = new Node(1);
 		if(h1 == NULL){
 			h1 = n;
 		}else{
 			t1->next = n;
 		}
 		t1 = n;
 		one--;
 	}
 	while(two>0){
 		Node* n = new Node(2);
 		if(h1 == NULL){
 			h1 = n;
 		}else{
 			t1->next = n;
 		}
 		t1 = n;
 		two--;
 	}
 	return h1;
}

int main(int argc, char const *argv[])
{
	cout<<"ENTER DATA : ";
	Node* head = TakeInput();
	head = segregate(head);
	cout<<"SORTED : ";
	Print(head);
	return 0;
}