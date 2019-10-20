#pragma once
extern "C" _declspec(dllexport) int sum(int *a, int *b, int size);

class TestLib
{
public:
	int sum(int *a, int *b, int size);
};

int TestLib::sum(int *a, int *b, int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
		c = c + *(a + i) + *(b + i);
	return c;
}
