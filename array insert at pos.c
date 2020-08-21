#include<stdio.h>
int i=0;
struct arr{
	int *A;
	int l;
};
void add(struct arr a){
	printf("Enter the elments\n");
	for(i=0;i<a.l;i++)
	scanf("%d",&a.A[i]);
}
void insert(struct arr a,int s,int in,int e){
		for(i=a.l;i>in;i--)
		a.A[i]=a.A[i-1];
	a.A[i]=e;
	a.l++;
}
void print(struct arr a){
	for(i=0;i<=a.l;i++)
	printf("%d ",a.A[i]);
}
int main(){
	struct arr a;
	int in,e,l;
	a.A=(int*)malloc(sizeof(int));
	printf("enter the length");
	scanf("%d",&a.l);
	add(a);
	printf("\nenter the element and index position\n");
	scanf("%d %d",&e,&in);
	insert(a,a.l,in,e);
	print(a);
}
