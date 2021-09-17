#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"

Node* RemoveDuplicatesInUnsorted(Node* head){
	if(head == NULL or head->next == NULL)
		return head;
	unordered_set<int> s;
	Node * temp = head;
	Node* curr = head->next;
	s.insert(head->data);
	while(curr!=NULL){
		if(s.find(curr->data)==s.end()){
			s.insert(curr->data);
			temp->next = curr;
			temp = curr;
		}
		curr = curr->next;
	}
	temp->next = NULL;
	return head;
}

int main(int argc, char const *argv[])
{
	cout<<"ENTER DATA : ";
	Node* head = TakeInput();
	head = RemoveDuplicatesInUnsorted(head);
	cout<<"UPDATED : ";
	Print(head);
	return 0;
}