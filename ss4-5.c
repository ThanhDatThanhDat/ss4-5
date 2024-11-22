#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    if ((c > a && c < b) || (c > b && c < a)) {
        printf("Nam giua so thu nhat va so thu hai.\n");
    } else {
        printf("Khong nam giua so thu nhat va so thu hai.\n");
    }

    return 0;
}
