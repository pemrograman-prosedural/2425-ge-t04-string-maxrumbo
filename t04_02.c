// 12S24037 - Maxwell Avinda Rumahorbo
// 12S24020 - Joice Anastasya Napitupulu

#include <stdio.h>
#include <string.h>

typedef struct {
    char str[21];
} Input;

int main() {
    Input input;
    int i, len;

    fgets(input.str, sizeof(input.str), stdin);
    input.str[strcspn(input.str, "\n")] = 0;

    len = strlen(input.str);

    for (i = 0; i < len; i++) {
        int ascii = (int)input.str[i];
        printf("%03d", ascii);
    }

    printf("\n");

    return 0;
}
