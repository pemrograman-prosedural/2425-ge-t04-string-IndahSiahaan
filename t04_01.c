// 12S24017 - Arya Pratama Sinambela
// 12S24052 - Indah Triyuni Siahaan

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int _argv, char **_argc) {
    char input[60];
    scanf("%s", input);

    int length = strlen(input);
    int num_blocks = length / 3;
    char blocks[num_blocks][4];
    char hasil[num_blocks + 1];

    int x, z = 0;
    for (x = 0; x < num_blocks; x++) {
        strncpy(blocks[x], &input[z], 3);
        blocks[x][3] = '\0';
        z += 3;
        hasil[x] = (char)atoi(blocks[x]);
    }
    hasil[num_blocks] = '\0';
    
    printf("%s\n", hasil);

    return 0;
}
