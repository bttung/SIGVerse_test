#pragma once

#include <stdio.h>
#include <iostream>

#define IMAGE_WIDTH		1280
#define IMAGE_HEIGHT	960

class Utility {

public:
	Utility();
	~Utility();

public:
	void TransferArr2Txt(unsigned char *arr, int size, char filename[256]);
};