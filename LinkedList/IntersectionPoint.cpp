#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"
	
int intersectPoint(Node* head1 , Node* head2){
	if(head1 == NULL or head2 == NULL)
		return -1;
	unordered_set<Node*> s;
	while(head1!=NULL){
		s.insert(head1);
		head1 = head1->next;
	}
	while(head2!=NULL){
		if(s.find(head2)!=s.end()){
			return head2->data;
		}
		head2 = head2->next;
	}
	return -1;
}


int main(int argc, char const *argv[])
{

	Node* head1 = TakeInput();
	Node* head2 = TakeInput();
	return 0;
}