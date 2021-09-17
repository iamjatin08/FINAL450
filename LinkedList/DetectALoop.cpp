#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"

bool detectLoop(Node* head){
   while(head!=NULL){
   	if(head->data == -1)
   		return true;
   	head->data = -1;
   	head = head->next;
   }
   return false;
}
void removeLoop(Node* head){
	Node * temp 
}
        

int main(int argc, char const *argv[])
{
	
	return 0;
}