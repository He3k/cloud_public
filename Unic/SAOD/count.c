#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <inttypes.h>

double wtime(){
    struct timeval t;
    gettimeofday(&t, NULL);
    return (double)t.tv_sec + (double)t.tv_usec * 1E-6;
}
void countsort(int* a, int n, int max){
    int* count;
    count = (int*)malloc(max * sizeof(int));
    int i, j;
    for(i = 0; i < n; ++i){
        count[a[i]] = count[a[i]] + 1;
    }
    printf("\nСортировка элементов:");
    for (i = 0; i <= max; ++i){
        for (j=1; j <= count [i]; ++j){
            printf ( "%d ", i);
        }
    }
}
int main(){
    int i, n;
    printf ("Введите размер массива:");
    scanf ("%d", &n);
    int* mas;
    printf ("Сгенерировать массив:\n");
    mas = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i){
        mas[i] = rand() % 100000;
        printf("%d " , mas[i]);
    }
 
    int max;
    int len = n;
    max = mas[0];
    for(int i = 1; i < len; i++){
        if(mas[i] > max){
            max = mas[i];
        }
    }
    double t = wtime();
    countsort(mas, n, max);
    printf("\n%f",wtime() - t);
    return 0;
}