#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"

Node* Reverse(Node* head){
	if(head == NULL or head->next == NULL)
		return head;
	Node*curr = head,*prev = NULL,*nex = head->next;
	while(nex!=NULL){

		curr->next = prev;
		prev = curr;
		curr = nex;
		nex = nex->next;
	}
	curr->next = prev;
	return curr;
}

Node* AddOne(Node* head){
	if(head == NULL) return NULL;
	head = Reverse(head);

	Node* temp = head;
	int carry = 1;
	while(temp->next!=NULL){
		int data = temp->data;
		temp->data = (temp->data + carry)%10;
		carry = (data + carry)/10;
		if(carry ==  0) {
			break;
		}
		temp = temp->next;
	}
	int data = temp->data;
	temp->data = (temp->data + carry)%10;
	carry = (data + carry )/10;
	if(carry){
		Node* n = new Node(1);
		temp->next = n;
		n->next = NULL;
	}
	head = Reverse(head);
	return head;
	
}


int main(int argc, char const *argv[])
{
	cout<<"ENTER DATA : ";
	Node* head = TakeInput();
	cout<<"ANSWER : ";
	Node * n = AddOne(head);
	while(n!=NULL){
		cout<<n->data;
		n = n->next;
	}
	cout<<endl;
	return 0;
}