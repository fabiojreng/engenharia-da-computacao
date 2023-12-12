#include<stdio.h>
int main(){
	int num=5;
	int *pnum,**ppnum;
	

	printf(" variavel %d",num);
	pnum=&num;
	ppnum=&pnum;
	
	**ppnum=9;
	printf("\n ponteiro do ponteiro %d, ponteiro %d, variavel %d",ppnum,pnum,num);
	
	
	return 0;
}
