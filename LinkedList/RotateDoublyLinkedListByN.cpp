#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data ;
	Node* next;
	Node* prev;
	Node(int data){
		this->data = data;
		next = NULL;
		prev = NULL;
	}
};

Node* TakeInput(){
	Node* head = NULL,*temp = NULL,*back = NULL;
	while(1){
		int t;
		cin>>t;
		if(t == -1) break;
		Node* n = new Node(t);
		if(head == NULL){
			head = n;
		}else{
			temp->next = n;
			n->prev = temp;
		}
		temp = n;
	}
	return head;
}

void Print(Node* head){
	// cout<<"LIST : ";
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}



Node* RotateByK(Node* head, int k){
	if(k == 0) return head;
	Node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = head;
	head->prev = temp;
	int count = 0;
	while(count<k){
		head = head->next;
		temp = temp->next;
		count++;
	}
	temp->next = NULL;
	head->prev = NULL;
	return head;
}



int main(int argc, char const *argv[])
{
	cout<<"ENTER DATA : ";
	Node* head = TakeInput();
	cout<<"K : ";
	int k;
	cin>>k;
	cout<<"ROTATED LIST : ";
	head = RotateByK(head,k);
	Print(head);

	return 0;
}