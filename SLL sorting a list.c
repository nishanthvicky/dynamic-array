#include<Stdio.h>
struct node{
	int data;
	struct node* next;
}*head=0;
struct node *temp,*newnode,*t;
void create(int a[],int n){
	int i=0;
	while(i<n){
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=a[i];
	newnode->next=0;
	if(head==0){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		newnode->next=0;
		temp=newnode;
	}
	i++;
	
}
}
void sort(struct node*temp){
	while(temp!=0){
		t=temp;
		while(t!=0){
			if(temp->data > t->data){
				int a=temp->data;
				temp->data=t->data;
				t->data=a;
			}
			t=t->next;
		}
		temp=temp->next;
	}
}
void display(struct node*temp){
	if(temp!=0){
		printf("%d ",temp->data);	
		display(temp->next);
	}
}
int main(){
int a[5]={1,7,3,9,5};
create(a,5);
sort(head);
display(head);
}
