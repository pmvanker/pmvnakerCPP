#include<stdio.h>


struct test
{
	long int y;
	int x;
	char c;
	char g;

};

int main()
{
	struct test t;
	printf("size of t= %ld\n",sizeof(t));

}
