#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"


pair<Node*,int> RemoveGreaterNode(Node* head){
	if(head == NULL){
		return {NULL,INT_MIN};
	}
	pair<Node*,int> smallAns = RemoveGreaterNode(head->next);
	if(head->data >= smallAns.second){
		head->next = smallAns.first;
		smallAns.first = head;
		smallAns.second = head->data;
		return smallAns;
	}
	else{
		return smallAns;
	}
}



int main(int argc, char const *argv[])
{
	cout<<"ENTER DATA : ";
	Node* head = TakeInput();
	cout<<"UPDATED : ";
	head = RemoveGreaterNode(head).first;
	Print(head);
	return 0;
}