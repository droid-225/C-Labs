#include <stdio.h>
int main()
{
    int n, i;
    int arr[20], *pArr = arr;
    int arr2[20], *pArr2 = pArr2;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", pArr);
        pArr++;
    }

    pArr = arr;
    pArr2 = pArr2;
    printf("Elements in Second Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *pArr2);
        pArr2++;
    }
    printf("\n");

    return 0;
}
