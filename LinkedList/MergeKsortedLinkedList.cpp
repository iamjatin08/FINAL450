#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"

Node* Merge(vector<Node*> arr){
	 vector<int> v;
        for(int i = 0 ; i<arr.size() ; i++){
            Node* head = arr[i];
            while(head!=NULL){
                v.push_back(head->data);
                head = head->next;
            }
            delete arr[i];
        }
    
        sort(v.begin(),v.end());
       Node* head = NULL, *temp = NULL;
        for(int i : v){
            Node* n = new Node(i);
            if(head == NULL){
                head = n;
            }
            else{
                temp->next = n;
            }
            temp = n;
        }
        return head;
}


int main(int argc, char const *argv[])
{
	int n;
	cout<<"NUMBER OF LINKED LIST :- ";
	cin>>n;
	vector<Node*> arr;
	for(int i = 0 ; i<n ; i++){
		cout<<"ENTER "<<(i+1)<<"th LINKED LIST : ";
		Node* head = TakeInput();
		arr.push_back(head);
	}
	Node* head = Merge(arr);
	cout<<"SORTED : ";
	Print(head);

	return 0;
}