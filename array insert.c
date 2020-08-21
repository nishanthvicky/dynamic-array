#include<stdio.h>
int i=0;
struct array{
	int *a;
	int l;
	int s;
};
void add(struct array A){
	for(i=0;i<A.s;i++)
	scanf("%d ",&A.a[i]);
}
void print(struct array A){
	for(i=0;i<A.s;i++)
	printf("%d",A.a[i]);
}
int main(){
	int i;
	struct array A;
	scanf("%d",&A.s);
	A.a=(int*)malloc(A.s*sizeof(int));
	A.l=0;
	add(A);
	print(A);
}
