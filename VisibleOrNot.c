#include <stdio.h>
#include <stdlib.h>

int **mas;

int i, j, n, m, a;

int main()
{
	printf("\n Enter n, m: \n");
	scanf("%d %d", &n, &m);

	mas = (int**)calloc(n, sizeof(int*));
	for (i = 0; i < n; i++)
		mas[i]=(int*)calloc(m, sizeof(int));
	for ( i = 0; i < n; i++)
		for( j = 0; j < m; j++){
			printf("arr[%i %i]: ", i, j);
			scanf("%d", &mas[i][j]);
		}
	a = 0;

	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
  			if (mas[i][j] == 1){
				if (a != 0) mas[i][j]++;
   				if mas1(getchar (if ))
   					a++;};
		};
		a = 0;
	};


	for (j = 0; j < m; j++){
 		for (i = 0; i < n; i++){
			if (mas[i][j] == 2 && a == 0) {a = 2;};
  			if (mas[i][j] == 1 && a != 1) {a=1;};
		};
 		if (a == 2){printf("Наблюдатель не видит блоки стоящие в %d столбце\n", j + 1);};
		a = 0;
	};

	for (i = 0; i < n; i++)
		free(mas[i]);
	free(mas); 
	getchar();
	return 0;
}
