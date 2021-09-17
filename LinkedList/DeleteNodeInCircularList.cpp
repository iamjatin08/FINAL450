#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"

Node* DeleteNode(Node* head,int data){
	if(head == NULL) return NULL;
	unordered_set<Node*> s;
	Node*curr = head,*prev = NULL;
	while(head!=NULL){
		if(s.find(curr)!=s.end()) break;
		if(curr->data == data){
			prev->next = curr->next;
			curr->next = NULL;
			delete curr;
			break;
		}
		s.insert(curr);
		prev = curr;
		curr = curr->next;
	}
	return head;
}
void print(Node* head){
	while(head!=NULL){
		if(head->data == -1) break;
		cout<<head->data<<" ";
		head->data = -1;
		head = head->next;
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{
	Node* n1 = new Node(2);
	Node* n2 = new Node(5);
	Node* n3 = new Node(7);
	Node* n4 = new Node(8);
	Node* n5 = new Node(10);
	int data = ;
	Node* head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n1;
	head = DeleteNode(head,data);
	print(head);
	return 0;
}