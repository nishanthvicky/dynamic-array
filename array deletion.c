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
void del(struct arr a,int l,int in){
	for(i=in;i<a.l-1;i++)
	a.A[i]=a.A[i+1];
}
void print(struct arr a){
	for(i=0;i<a.l-1;i++)
	printf("%d ",a.A[i]);
}
int main(){
	struct arr a;
	int in,l;
	a.A=(int*)malloc(sizeof(int));
	printf("enter the length");
	scanf("%d",&a.l);
	add(a);
	printf("\nenter index position\n");
	scanf("%d",&in);
	del(a,a.l,in);
	print(a);
}
