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
void sort(struct arr a){
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
void print(struct arr a){
	for(i=0;i<a.l;i++)
	printf("%d ",a.A[i]);
}
int main(){
	struct arr a;
	a.A=(int*)malloc(sizeof(int));
	printf("enter the length\n");
	scanf("%d",&a.l);
	add(a);
	sort(a);
	print(a);
}
