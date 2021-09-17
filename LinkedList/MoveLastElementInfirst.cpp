#include <bits/stdc++.h>
using namespace std;
#include"Node.cpp"

Node* MoveElement(Node* head){
	if(head == NULL or head->next == NULL) return head;
	Node* temp = head;
	while(temp->next->next!=NULL){
		temp = temp->next;
	}
	Node* t = temp->next;
	temp->next = NULL;
	t->next = head;
	return t;
}


int main(int argc, char const *argv[])
{
	cout<<"ENTER DATA : ";
	Node* head = TakeInput();
	cout<<"UPDATED : ";
	head = MoveElement(head);
	Print(head);
	return 0;
}