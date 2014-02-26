#include "Utility.h"

Utility::Utility() {}

Utility::~Utility() {}

void Utility::TransferArr2Txt(unsigned char *arr, int size, char filename[256]) {

	FILE* fw = fopen(filename, "w");
	for (int i = 0; i < size; i++) {
		fprintf(fw, "%d	", arr[i]);
		fprintf(fw, "\n");
	}
	fclose(fw);

	return;
}
