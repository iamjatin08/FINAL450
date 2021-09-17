#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"

long long SUM(Node* first, Node * second){
	long long N= 1000000007;
	long long num1 = 0, num2 = 0;
	while (first || second){
	     
	    if(first){
	        num1 = ((num1)*10)%N + first->data;
	        first = first->next;
	    }
	     
	    if(second)
	    {
	        num2 = ((num2)*10)%N + second->data;
	        second = second->next;
	    }
	     
	}
	return ((num1%N)*(num2%N))%N;
}


int main(int argc, char const *argv[])
{
	cout<<"ENTER 1ST NUMBER : ";
	Node* head1 = TakeInput();
	cout<<"ENTER 2ND NUMBER : ";
	Node* head2 = TakeInput();
	cout<<"SUM : "<<SUM(head1,head2)<<endl;
	return 0;
}