#include <iostream>
using namespace std;

#define MAX_SIZE 100
int heap[MAX_SIZE];
void heapInit(void)
int heapPush(int value)
	heap[heapSize] = value;
	int current = heapSize;
	heapSize = heapSize + 1;
	return 1;
int heapPop(int *value)
	*value = heap[0];
	heap[0] = heap[heapSize];
	int current = 0;
		if (heap[current] < heap[child])
		int temp = heap[current];
		current = child;
int main(int argc, char* argv[])
	freopen("Text.txt", "r", stdin);
	scanf("%d", &T);
	for (int test_case = 1; test_case <= T; test_case++)
		printf("#%d ", test_case);
		for (int i = 0; i < N; i++)