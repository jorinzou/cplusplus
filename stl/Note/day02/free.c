#include <stdio.h>
#include <stdlib.h>
int main (void) {
	char* p = (char*)malloc (1024);
	printf ("### 1 ###\n");
//	free (p + 512);
	printf ("### 2 ###\n");
	free (p);
	printf ("### 3 ###\n");
	return 0;
}
