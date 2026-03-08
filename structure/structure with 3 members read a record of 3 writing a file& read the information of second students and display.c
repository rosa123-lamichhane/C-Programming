//structure with 3 members read a record of 3 writing a
//file& read the information of second students and display.c
#include<stdio.h>

struct S { int roll; char name[20]; float marks; };

int main() {
    struct S s[3], temp;
    FILE *f;

    for(int i = 0; i < 3; i++)
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);

    f = fopen("data.dat", "wb");
    fwrite(s, sizeof(s), 1, f);
    fclose(f);

    f = fopen("data.dat", "rb");
    fseek(f, sizeof(struct S), SEEK_SET);
    fread(&temp, sizeof(struct S), 1, f);
    fclose(f);

    printf("%d %s %.2f\n", temp.roll, temp.name, temp.marks);
    return 0;
}
