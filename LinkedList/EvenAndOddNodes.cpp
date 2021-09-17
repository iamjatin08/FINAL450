#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"


Node* EvenAndOdd(Node* head){
	if(head == NULL or head->next == NULL)
		return head;
	Node* odd = NULL , * even = NULL;
	Node* temp_odd = NULL, * temp_even = NULL;
	while(head!=NULL){
		if(head->data % 2 == 0){
			if(even == NULL){
				even = head;
			}else{
				temp_even->next = head;
			}
			temp_even = head;
		}else{
			if(odd == NULL){
				odd = head;
			}else{
				temp_odd->next = head;
			}
			temp_odd = head;
		}
		head = head->next;
	}
	if(temp_even == NULL) return odd;

	temp_even->next = odd;
	temp_odd->next = NULL;
	return even;
}



int main(int argc, char const *argv[])
{
	cout<<"ENTER DATA : ";
	Node* head = TakeInput();
	cout<<"UPDATED : ";
	head = EvenAndOdd(head);
	Print(head);
	return 0;
}