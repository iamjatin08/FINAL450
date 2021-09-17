#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"

Node* MergeHelper(Node* h1, Node* h2){
	if(h1 == NULL) return h2;
	if(h2 == NULL) return h1;
	Node* head;
	if(h1->data > h2->data){
		head = h2;
		head->next = MergeHelper(h1,h2->next);
	}
	else{
		head = h1;
		head->next = MergeHelper(h1->next,h2);
	}
	return head;
}

Node* Merge(Node* arr[], int k){
	
	Node* head = arr[0];
	for(int i = 1; i<k ; i++){
		head = MergeHelper(head,arr[i]);
	}
	return head;
}

int main(int argc, char const *argv[])
{
	int k;
	cout<<"SIZE : ";
	cin>>k;
	Node* arr[k];
	for(int i = 0 ; i<k ; i++){
		cout<<"ENTER "<<(i+1)<<"th data : ";
		arr[i] = TakeInput();
	}
	Node* head = Merge(arr,k);
	cout<<"SORTED : ";
	Print(head);
	return 0;
}