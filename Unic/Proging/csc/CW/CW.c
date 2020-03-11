#include <stdio.h>

int main()
{
    
    int i,k,n;
    printf("Введите кол-во элементов массива:\n");
    scanf("%d",&n);
    int a[n];
    printf("Введите суффикс:\n");
    scanf("%d",&k);
    printf("Введите все элементы массива по порядку:\n");
    for (i=0;i<6;i++){
       scanf("%d", &(a[i]));
    }
    i=0;
    while (i<6) {
        printf("%d\n",(a[i]));
        i++;
    }
    k=n-k;
    printf("%d\n",(*(a+k)));

}
