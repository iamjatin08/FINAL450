#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"

Node* Intersection(Node* head1,Node* head2){
	if(head1 == NULL or head2 == NULL){
		return NULL;
	}
	Node* head = NULL;
	unordered_map<int,int> mp;
	while(head1!=NULL){
		mp[head1->data]++;
		head1 = head1->next;
	}
	Node* temp = NULL;
	while(head2!=NULL){
		if(mp[head2->data]>0){
			Node* n = new Node(head2->data);
			if(head == NULL){
				head = n;
			}
			else{
				temp->next = n;
			}
			temp = n;
			mp[head2->data]--;
		}
		head2 = head2->next;
	}
	return head;
}


int main(int argc, char const *argv[])
{
	cout<<"LIST 1 : ";
	Node* head1 = TakeInput();
	cout<<"LIST 2 : ";
	Node* head2 = TakeInput();
	Node* head = Intersection(head1,head2);
	cout<<"Intersection : ";
	Print(head);
	return 0;
}