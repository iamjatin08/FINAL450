#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

void removeDuplicates(Node* head){
    if(head == NULL or head->next == NULL)
    	return;
   Node*curr = head, *nex = head->next;
   while(nex!=NULL){
   	if(curr->data != nex->data){
   		curr->next = nex;
   		curr = curr->next;
   		}
   		nex = nex->next;
   }
   curr->next = NULL;
   head = curr;
}
Node* removeDuplicatesHelper(Node* head,int data){
	if(head == NULL) return head;
	if(head->data == data){
		return removeDuplicatesHelper(head->next,data);
	}
	else{
		head->next = removeDuplicatesHelper(head->next,head->data);
		return head;
	}
}
Node *removeDuplicates2(Node *head){
	if(head == NULL or head->next == NULL)
		return head;
	head->next = removeDuplicatesHelper(head->next,head->data);
	return head;
}
int main(int argc, char const *argv[])
{
	Node* head = TakeInput();
	head = removeDuplicates2(head);
	Print(head);
	return 0;
}