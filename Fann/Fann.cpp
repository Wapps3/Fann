#include <iostream>

#include "floatfann.h"
///*
int main()
{
	fann_type* calc_out;

	struct fann* ann = fann_create_from_file("D:\\M2\\SystemComplex\\Ressource\\langage.net");

	FILE* file = new FILE();


	fopen_s(&file, "D:\\M2\\SystemComplex\\Ressource\\portu.txt", "r");

	int size = 0;
	char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k','l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	float input[26] = { 0 };

	char buff = fgetc(file);

	while (buff != EOF) 
	{
		int i;

		for (i = 0; i < 26; i++)
			if (tolower(buff) == alphabet[i])
			{
				input[i]++;
				size++;
			}

		buff = fgetc(file);
	}
	

	for (int i = 0; i < 26; i++)
		input[i] = (input[i]/ (float)size);

	calc_out = fann_run(ann, input);

	printf("English = %f\n", calc_out[0]);
	printf("French = %f\n", calc_out[1]);
	printf("German = %f\n", calc_out[2]);
	printf("Spanish = %f\n", calc_out[3]);
	printf("Italian = %f\n", calc_out[4]);
	printf("Portuguese = %f\n", calc_out[5]);
	printf("Neerlandais = %f\n", calc_out[6]);

	fann_destroy(ann);

	return 0;

}//*/