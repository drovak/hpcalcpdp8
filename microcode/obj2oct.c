#include <stdio.h>
#include <stdlib.h>

FILE *fp;

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s [filename]\n", argv[0]);
		exit(-1);
	}
	fp = fopen(argv[1], "r");
	int data;
	char eof_fp = 0;
	while (eof_fp != EOF)
	{
		for (int i = 0; i < 9; i++)
		{
			eof_fp = fscanf(fp, "%*o:%x", &data);
			if (eof_fp != EOF)
			{
				printf("%04o; ", data);
			}
		}
		printf("\n");
	}
	fclose(fp);
	return 0;
}
