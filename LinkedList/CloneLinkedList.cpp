#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node* arb;
	Node(int x){
		data = x;
		next = NULL;
		arb  = NULL;
	}
};


Node *copyList(Node *head){
	Node* curr = head;
	Node* temp;
	while(curr!=NULL){
		temp = curr->next;
		curr->next = new Node(curr->data);
		curr->next->next = temp;
		curr = temp;
	}
	curr = head;
	while(curr!=NULL){
		if(curr->next!=NULL){
			Node* random = curr->arb;
			if(random!=NULL)
				curr->next->arb = random->next;
			else curr->next->arb = random;
			curr = curr->next;
		}
		curr = curr->next;
	}
	Node* orignal = head,*copy = head->next;
	temp = copy;
	while(orignal!=NULL and copy!=NULL){
		orignal->next = orignal->next->next;
		copy->next = copy->next ? copy->next->next : copy->next;
		orignal = orignal->next;
		copy = copy->next;
	}
	return temp;
}	


int main(int argc, char const *argv[])
{
	
	return 0;
}