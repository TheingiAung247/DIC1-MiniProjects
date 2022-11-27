//
// Created by TheinGiAung on 11/27/2022.
//
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("assignment-3.txt", "w");
    int i, n;
    int num;    // storing data from reading
    int dataIndex = 0;

    printf("Enter number that you want: : ");
    scanf("%d", &n);

    int data[n];

    if(fptr == NULL) {
        printf("Cannot open the file: assignment-3.txt\n");
    } else {
        for(i = 1; i <= n; i++) {
            fprintf(fptr, "%d%c", i, '\n');
        }
        printf("Writing in a specific file process is finished.\n");
    }
    fclose((fptr));

    fptr = fopen("assignment-3.txt", "r");
    printf("\nReading numbers from file: :\n");
    while ( fscanf(fptr, "%d", &num) != EOF ) {
//        printf("%d\n", num)
        data[dataIndex] = num;
        dataIndex++;
    }
    for(i = 0; i < n; i++) {
        printf("\t\t\t\t%d\n", data[i]);
    }
    printf("\nEnd of reading from a specific file.\n");
    fclose(fptr);

    return 0;
}