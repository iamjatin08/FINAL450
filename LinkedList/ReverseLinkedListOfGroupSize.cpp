#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"

Node* GroupReverse(Node* head, int k ){
	Node * nex;
	Node * prev = NULL;
	Node * cur 	= head;
	int c = 0;
	while(cur!=NULL and c<k){
		nex = cur->next;
		cur->next = prev;
		prev = cur;
		cur = nex;
		c++;
	}
	if(nex!=NULL){
		head->next = GroupReverse(nex,k);
	}
	return prev;

}

int main(int argc, char const *argv[])
{
	cout<<"ENTER DATA : ";
	Node * head = TakeInput();
	cout<<"ENTER K : ";
	int k;
	cin>>k;
	head = GroupReverse(head,k);
	cout<<"UPDATED : ";
	Print(head);
	return 0;
}