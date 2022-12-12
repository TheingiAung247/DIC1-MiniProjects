//
// Created by TheinGiAung on 12/12/2022.
// Assignment(4) : Searching the desire strings' times from a file
//

#include "stdio.h"
#include "string.h"

int main() {
    char search1[] = "winhtut";
    char search2[]= "NationalCyberCity";
    int index1 = 0;         // for search1
    int index2 = 0;         // for search2
    int data_index = 0;     // for data string
    int times1 = 0;         // for search1
    int times2 = 0;         // for search2
    int length1 = strlen(search1);  // for search1 length
    int length2 = strlen(search2);  // for search2 length
    char data_string[200];
    int word_line = 57;

    FILE *fptr;
    fptr = fopen("word.txt", "r");
    if(fptr == NULL) {
        printf("\nCannot open the file: word.txt\n");
    } else {
        for(int i = 0; i < word_line; i++) {
            (fgets(data_string, 200, fptr) );
            data_index = 0;

            while(data_string[data_index] != '\0') {
                if(data_string[data_index] == search1[index1]) {
                    while(data_string[data_index] == search1[index1] && data_string[data_index] != '\0') {
                        data_index++;
                        index1++;
                    }
                    if(index1 == length1 && (data_string[data_index] == ' ' || data_string[data_index] == '\0')){
                        times1++;
                    } else {
                        while(data_string[data_index] != ' ') {
                            data_index++;
                            if(data_string[data_index] == '\0')
                                break;
                        }
                    }
                } else if (data_string[data_index] == search2[index2]) {
                    while(data_string[data_index] == search2[index2] && data_string[data_index] != '\0') {
                        data_index++;
                        index2++;
                    }
                    if(index2 == length2 && (data_string[data_index] == ' ' || data_string[data_index] == '\0')){
                        times2++;
                    } else {
                        while(data_string[data_index] != ' ') {
                            data_index++;
                            if(data_string[data_index] == '\0' || data_string[data_index] == '\n')
                                break;
                        }
                    }
                }
                data_index++;
                index1 = 0;
                index2 = 0;
            }
        }

        if(times1 > 0) {
            printf("'%s' appears %d time(s)\n", search1, times1);
        } else {
            printf("'%s' does not appear in the sentence.\n", search1);
        }
        if(times2 > 0) {
            printf("'%s' appears %d time(s)\n", search2, times2);
        } else {
            printf("'%s' does not appear in the sentence.\n", search2);
        }
    }
    fclose(fptr);
    return 0;
}
