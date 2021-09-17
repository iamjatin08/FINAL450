#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"

int Answer(Node* head, int k ){
	Node* temp = head;
	int count = 0;
	while(count<k and temp!=NULL){
		temp = temp->next;
		count++;
	}
	if(count < k) return -1;
	while(temp!=NULL){
		head = head->next;
		temp = temp->next;
	}

	return head->data;
}




int main(int argc, char const *argv[])
{
	cout<<"ENTER DATA : ";
	Node* head = TakeInput();
	cout<<"K : ";
	int k;
	cin>>k;
	cout<<"ANS : "<<Answer(head, k)<<endl;
	return 0;
}