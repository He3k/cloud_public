#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <inttypes.h>

double wtime(){
    struct timeval t;
    gettimeofday(&t, NULL);
    return (double)t.tv_sec + (double)t.tv_usec * 1E-6;
}
void bubble_sort(int a[], int n) {
    int i = 0, j = 0, tmp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}
int main(){
    int i, n;
    printf ("Введите размер массива: ");
    scanf ("%d", &n);
    int* mas;
    printf ("Сгенерировать массив:\n");
    mas = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i){
        mas[i] = rand() % 100000;
        printf("%d " , mas[i]);
    }
    double t = wtime();
    bubble_sort(mas, n);
    printf ("\nСортированный массив:");
    for (i = 0; i < n; i++)
        printf("%d", mas[i]);
    printf("\n%f",wtime() - t);
    return 0;
}
