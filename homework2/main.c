#include "head.h"
int main(){
	int a[MAX];
	clock_t first,second,third;
	urand(a,MAX);
	printf("before---------\n");
	ushow(a,MAX);
	first=clock();
	mysort(a,MAX,sizeof(int),compar);
	second=clock();
	syssort(a,MAX,sizeof(int));
	third=clock();
	printf("the time of mysort 100 data:\n%ld\n",second-first);
	printf("the time of syssort 10 data:\n%ld\n",third-second);
	return 0;
}

