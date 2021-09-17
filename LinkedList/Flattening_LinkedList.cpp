#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

Node* TakeInput(){
	int n,m,flag = 1,flag1 = 1;
	Node* temp = NULL,*head = NULL,*pre = NULL,*tempB = NULL;
	Node* preB = NULL;
	cin>>n;
	int work[n];
	for(int i = 0 ; i<n ; i++){
		cin>>work[i];
	}
	for(int i = 0 ; i<n ; i++){
		m = work[i];
		--m;
		int data;
		cin>>data;
		temp = new Node(data);
		temp->next = NULL;
		temp->bottom = NULL;
		if(flag){
			head = temp;
			pre = temp;
			flag = 0;
			flag1 = 1;
		}else{
			pre->next = temp;
			pre = temp;
			flag1 = 1;
		}
		for(int j = 0; j<m ; j++){
			int temp_data;
			cin>>temp_data;
			tempB = new Node(temp_data);
			if(flag1){
				temp->bottom = tempB;
				preB = tempB;
				flag1 = 0;
			}else{
				preB->bottom = tempB;
				preB = tempB;
			}
		}
	}
	return head;
}

void Print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->bottom;
	}
	cout<<endl;
}
Node* Merge(Node* h1, Node* h2){
	if(h1 == NULL) return h2;
	if(h2 == NULL) return h1;
	Node * head;
	if(h1->data < h2->data){
		head = h1;
		head->bottom = Merge(h1->bottom,h2); 
	}else{
		head = h2;
		head->bottom = Merge(h1,h2->bottom);
	}
	head->next = NULL;
	return head;
}

Node* flatten(Node *root){
	if(root == NULL or root->next == NULL)
		return root;
	return Merge(root,flatten(root->next));
}

 int main(int argc, char const *argv[])
{
	Node* root = TakeInput();
	root = flatten(root);
	Print(root);
	return 0;
}


