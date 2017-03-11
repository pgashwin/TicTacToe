#include <iostream>

using namespace std;


//int solution(int A, int B) {
//	// write your code in C99 (gcc 6.2.0)
//	int C, R;
//	C = A*B;
//	R = C & 1;
//	while (C = C >> 1)
//	{
//		if (C & 1)
//			R++;
//	}
//	return R;
//}




//int solution(int A[], int N) {
//	// write your code in C99 (gcc 6.2.0)
//	
//int size = N;
//		for(int i=0; i<size;i++)
//		{
//			scanf("%d", &A[size]);
//		}
//}


int solution(int M, int A[], int N) {
	int *count = malloc((M + 1) * sizeof(int));
	int i;
	for (i = 0; i <= M; i++)
		count[i] = 0;
	int maxOccurence = 1;
	int index = -1;
	for (i = 0; i < N; i++) {
		if (count[A[i]] > 0) {
			int tmp = count[A[i]];
			if (tmp > maxOccurence) {
				maxOccurence = tmp;
				index = i;
			}
			count[A[i]] = tmp + 1;
		}
		else {
			count[A[i]] = 1;
		}
	}
	return A[index];
}

int main()
{
	cout<<solution([1,2,3],3)<<endl;
	system("pause");
}