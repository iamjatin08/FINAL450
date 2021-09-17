#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* prev;
	Node* next;
	Node(int data){
		this->data = data;
		prev = NULL;
		next = NULL;
	}
};

vector<pair<int,int>> pairSUM(Node* head,int sum){
	if(head == NULL){
		vector<pair<int,int> v;
		return v;
	}
	Node* end = head;
	while(end->next != NULL)
		end = end->next;

	vector<pair<int,int> v;
	while(head!=end){
		if(head->data + end->data == sum){
			v.pushback(make_pair(head->data,end->data));
			head = head->next;
			end = end->prev;
		}
		else if(head->data + end->data > sum)
			end = end->prev;
		else 
			head = head->next;
	}
	return v;
}


int main(int argc, char const *argv[])
{
	
	return 0;
}