#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node*next;
	node(){
	next=NULL;
	}
};

class linkedlist{
		public:
		node*head;
		linkedlist(){
		head=NULL;
		}

//insert
void insert(int val){
	node*temp= new node;
	temp->data=val;
	temp->next=head;
	head=temp;
	}

//number of items
int numberofitems(){
	node*curr=head;
	int count=0;
	while(curr!=NULL){
	count++;
	curr=curr->next;
	}
return count;
}
	node*getpos(int pos){
	int cnt=0;
	node*curr=head;
	while(cnt<(pos-1)){
	curr=curr->next;
	cnt++;
	}
return curr;
}

//display items
void display(){
	node*curr=head;
	while(curr!=NULL){
	cout<<curr->data<<"->";
	curr=curr->next;
	}
cout<<"NULL"<<endl;
}

//delete
void del(){
	node*curr=head;
	curr=curr->next;
	curr->next=NULL;	
}
//delete at
void deleteAt(int pos){
	if(pos<1||(pos>(numberofitems()))){
	cout<<"not a valid position"<<endl;
	return;
	}
	//reach to pos-1
	node*curr=getpos(pos-1);
	if(pos==1){
	curr=curr->next;
	head=curr;
	}
	else{
		node*temp=head;
		temp=temp->next;
		curr->next=temp;
		delete temp;
	     }
  }

};

class stack{
	public:
	node*top;
	linkedlist l1;
	stack(){
		top=l1.head;
	}
//insert
void push(int val){
		l1.insert(val);
		top=l1.head;
		}
//count
int numberofitems(){
  return l1.numberofitems();
}
//delete
void pop(){
	l1.del();
	top=l1.head;
	}
//display
void display(){
	l1.display();
	}

};

int main(){
    stack s1;

    for(int i = 0; i < 5 ; i++)
    s1.push(i);
    s1.display();
    s1.pop();
    s1.display();
    s1.pop();
    s1.display();
    s1.pop();
    s1.display();
    s1.pop();
    s1.display();
    
}



	

 			                                                                                                                                                                                                    
