#include <stdio.h>
int binarysearch(int a[], int x, int left, int right)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == x)
            return 1;
        else if (x > a[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, x;
    printf("nhap kich thuoc mang: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int t; // nhap so luong can tim

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &x);
        int res = binarysearch(a, x, 0, n - 1);
        if (res == 1)
        {
            printf("yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}