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

Node* AddOne(Node* head, int carry){
	if(head == NULL) return NULL;
	// head = Reverse(head);

	Node* temp = head;
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
	// head = Reverse(head);
	return head;
	
}

Node* addTwoLists(struct Node* first, struct Node* second){
    first = Reverse(first);
    second = Reverse(second);
    int carry = 0 ;
    Node* head = NULL;
    Node* temp = NULL;
    while(first != NULL and second != NULL){
    	int data = first->data + second->data + carry;
    	Node* n = new Node(data%10);
    	carry = data/10;
    	if(head == NULL){
    		head = n;
    	}
    	else{
    		temp->next = n;
    	}
    	temp = n;
    	first = first->next;
    	second = second->next;
    }
    if(first == NULL and second == NULL and carry){
    	Node* n = new Node(1);
    	temp->next = n;
    }
    else if(first!=NULL){
    	temp->next = AddOne(first,carry);
    }
    else if(second!=NULL){
    	temp->next = AddOne(second,carry);
    }

    head = Reverse(head);
    return head;

}


int main(int argc, char const *argv[])
{
	cout<<"ENTER 1st NUMBER : ";
	Node* head1 = TakeInput();
	cout<<"ENTER 2nd NUMBER : ";
	Node* head2 = TakeInput();
	Node* ans = addTwoLists(head1,head2);
	cout<<"SUM : ";
	while(ans!=NULL){
		cout<<ans->data;
		ans = ans->next;
	}
	cout<<endl;
	return 0;
}