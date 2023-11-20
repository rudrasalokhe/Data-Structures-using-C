#include <stdio.h>
#include <conio.h>

struct array {
    int mid, y;
} s;

void aentry(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void ashow(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}

void asort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void asearch(int a[], int n, int x) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        s.mid = (lo + hi) / 2;
        if (x != a[s.mid]) {
            if (x > a[s.mid]) {
                lo = s.mid + 1;     // if the elemet you want to search is greater then mid+1
            } else {
                hi = s.mid - 1;     // if the elemet you want to search is lessthen mid-1
            }
        } else {
            s.y = 1;   // if the element is found flag = 1
            break;
        }
    }
}

void main() {
    int a[50], n, x;
    clrscr();

    printf("HAWAIZA SIDDIQUI 19431\n");

    printf("Enter the number of elements that you want to enter\n");
    scanf("%d", &n);

    printf("Enter the elements\n");
    aentry(a, n);
    asort(a, n);

    printf("\n\n");

    printf("Enter the number you want to search in the array.\n");
    scanf("%d", &x);

    asearch(a, n, x);

    if (s.y == 1)
        printf("The number %d you have entered exists at the location a[%d]\n", x, s.mid);
    else
        printf("The number %d you have entered does not exist.\n");

    getch();
}
