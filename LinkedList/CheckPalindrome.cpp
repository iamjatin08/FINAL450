#include<bits/stdc++.h>
using namespace std;
#include "Node.cpp"

Node* pleft;
bool isPalindromehelper(Node* right){
	if(right == NULL) return true;
	bool res = isPalindromehelper(right->next);
	if(res == false) return false;
	else if(pleft->data != right->data)
		return false;
	else{
		pleft = pleft->next;
		return true;
	}
}
bool isPalindrome(Node *head){
 	pleft = head;
 	return isPalindromehelper(head);
}

int main(int argc, char const *argv[])
{
	cout<<"ENTER DATA : ";
	Node* head = TakeInput();
	if(isPalindrome(head))
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
	return 0;
}