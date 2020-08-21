#include<stdio.h>
int i=0;
struct array{
	int *A;
	int l;
};
void add(struct array a){
	for(i=0;i<a.l;i++)
	scanf("%d ",&a.A[i]);
}
void sort(struct array a){
	int j;
	for(i=0;i<a.l;i++)
	for(j=i;j<a.l;j++){
		if(a.A[i]>a.A[j]){
			int t=a.A[i];
			a.A[i]=a.A[j];
			a.A[j]=t;
		}
	}
}
int find(struct array a,int k,int l,int h){
	int m=l+h/2;
	if(k==a.A[m])
	return m;
	else if(l==h)
	return -1;
	else if(k>a.A[m])
	l=m+1;
	else if(k<a.A[m])
	h=m-1;
	find(a,k,l,h);	
}
int main(){
	struct array a;
	int k,l,h,r;
	a.A=(int*)malloc(sizeof(int));
	printf("\nenter the length");
	scanf("%d",&a.l);
	printf("\nenter the elements");
	add(a);
	printf("enter the key");
	scanf("%d",&k);
	sort(a);
	l=0;
	h=a.l;
	r=find(a,k,l,h);
	if(r==-1)
	printf("\nnot found");
	else 
	printf("\nfound");
}
