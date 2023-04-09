#include <stdio.h>
struct student {
    char Name[50];
    int PRN;
    float Marks;
} s;

int main() {
    printf("Enter information:\n");
    printf("Enter Name: ");
    fgets(s.Name, sizeof(s.Name), stdin);

    printf("Enter PRN: ");
    scanf("%d", &s.PRN);
    printf("Enter Marks: ");
    scanf("%f", &s.Marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.Name);
    printf("PRN: %d\n", s.PRN);
    printf("Marks: %.1f\n", s.Marks);

    return 0;
}
