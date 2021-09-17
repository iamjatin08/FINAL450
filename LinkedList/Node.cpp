class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};

Node* TakeInput(){
	Node *head = NULL, *temp = NULL;
	while(1){
		int t;
		cin>>t;
		if(t == -1) break;
		Node* n = new Node(t);
		if(head==NULL){
			head = n;
		}
		else{
			temp->next = n;
		}
		temp = n;
 	}
 	return head;
}
void Print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
	return;
}