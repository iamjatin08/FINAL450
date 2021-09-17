#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node* prev;
	Node(int data){
		this->data = data;
		next = NULL;
		prev = NULL;
	}
};
class Triplet{
public:
	int first;
	int second;
	int third;
};

vector<Triplet> TripleSUM(Node* head,int sum){
	if(head == NULL){
		vector<Triplet> v;
		return v;
	}
	vector<Triplet> v;
	while(head->next!=NULL){
		Node*temp = head->next;
		unordered_set<int> s;
		int rem = sum - head->data;
		while(temp!=NULL){
			if(s.find(rem - temp->data) != s.end()){
				Triplet t;
				t.first = head->data;
				t.second = rem - temp->data;
				t.third = temp->data;
				v.push_back(t);
			}
			s.insert(temp->data);
			temp = temp->next;
		}
		head = head->next;
	}
	return v;
}


int main(int argc, char const *argv[])
{
	
	return 0;
}