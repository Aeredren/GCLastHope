#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) 
{
	printf("Hello\n");
	FILE* f = NULL;
	int fsize;

	f = fopen("./dump.raw", "rb");
	if (f == NULL) {
		return 1;
	}
	fseek(f, 0, SEEK_END);
	fsize = ftell(f);
	fseek(f, 0, SEEK_SET);

	printf("File size = %d\n", fsize);

//	print_header(f);

	return 0;
}

