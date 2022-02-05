#include <stdio.h>
#include <stdlib.h>

typedef struct cucumber
{
	int A;
	int B;
	int C;
} t_42;

typedef struct test
{
	t_42 t;
} t_test;

void	giveme(int *l)
{
	l[0] = 89;
}
void	shuffle(int *A)
{
	int tmp;
	tmp = A[0];
	A[0] = A[4];
	A[4] = 67;
	A[2] = tmp;
}

void	saveme(t_42 *M)
{
	M->A = 3749124;
	printf("Hamlet's phone is %d%d%d\n", M->A, M->B, M->C);
}

int main()
{
	t_42 camel;
	t_test	xcho;

	xcho.t.A = 99;
	printf("xcho = %d\n", xcho.t.A);
	camel.A = 24;
	camel.B = 64;
	camel.C = 39;
	saveme(&camel);
	int *A;
	int l;

	A = (int *)malloc(5 * sizeof(int));
	for (int i = 0; i < 5; ++i)
	{
		A[i] = i + 1;
	}
	l = 97;
	giveme(&l);
	printf("l = %d\n", l);
	shuffle(A);
	for (int i = 0; i < 5; ++i)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

}