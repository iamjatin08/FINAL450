#include<bits/stdc++.h>
using namespace std;
#include"Node.cpp"

void SwapValue(Node* a,Node* b){
	int temp = a->data;
	a->data = b->data;
	b->data = temp;
}
Node* partition(Node* start,Node* end){
	int pivotValue = start->data;
	Node*p = start,*q = start->next;
	while(q!=end){
		if(q->data < pivotValue){
			p = p->next;
			SwapValue(p,q);
		}
		q = q->next;
	}
	SwapValue(p,start);
	return p;
}

void QuickSort1(Node* start, Node* end){
	if(start!=end){
		Node* mid = partition(start,end);
		QuickSort1(start,mid);
		QuickSort1(mid->next,end);
	}
}
Node* QuickSort(Node* head){
	QuickSort1(head,NULL);
	return head;
}


int  main(int argc, char const *argv[])
{
	Node* head = TakeInput();
	head = QuickSort(head);
	Print(head);
	return 0;
}