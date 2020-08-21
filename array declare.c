#include<stdio.h>
int main(){
	//array declaration
	int a[5]={1,2,3,4,5};
	int b[5];
	for(int i=0;i<5;i++)
	scanf("%d",&b[i]);
	//using pointers to print
	for(int i=0;i<5;i++){
		printf("%d",*(b+i*sizeof(int)));
	}
}
