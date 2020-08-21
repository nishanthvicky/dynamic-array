#include<stdio.h>
int i=0;
struct arr{
	int *A;
	int l;
};
void add(struct arr a){
	for(i=0;i<a.l;i++)
	scanf("%d",&a.A[i]);
}
int find(struct arr a,int k){
	for(i=0;i<a.l;i++){
		if(k=a.A[i])
		return i;
	}
	if(i==a.l)
	return -1;
}
int main(){
	struct arr a;
	int k;
	a.A=(int*)malloc(sizeof(int));
	printf("enter the length\n");
	scanf("%d",&a.l);
	scanf("%d",&k);
	add(a);
	int r=find(a,k);
	if(r==a.l)
	printf("Not found");
	else
	printf("%d is found at %d index",k,r);
}
