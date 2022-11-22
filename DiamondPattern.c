// Created by TheinGiAung on 11/12/2022.

/**  (1) Diamond Pattern
 *          - - - - - - -     - - - - - - -
 *          - - - % - - -     - - -   - - -
 *          - - % % % - -     - -       - -
 *          - % % % % % -     -           -
 *          - - % % % - -     - -       - -
 *          - - - % - - -     - - -   - - -
 *          - - - - - - -     - - - - - - -
 **/

#include <stdio.h>

int main() {

    int size = 5;       // For Pattern's size
    int diamond;    // For Diamond Pattern
    int dash;       // For Dash
    int i =0, j=0;

    printf("Enter Any Number For Pattern's Size: ");
    scanf("%d", &size);

//   For Upper Half
    for(i = 0; i < size; i++) {
        printf("\t");
        for(dash = size; dash > i; dash--) {     // 'for' loop for upper left half '-'
            printf(" - ");
        }
        for(diamond = 0; diamond < (i*2)-1; diamond++) {    // 'for' loop for upper half '@'
            printf(" @ ");
        }
        for(dash = size; dash > i; dash--) {     // 'for' loop for upper left half '-'
            printf(" - ");
        }

        // Another Column
        for(dash = size; dash > i; dash--) {     // 'for' loop for upper left half '-'
            printf(" - ");
        }
        for(diamond = 0; diamond < (i*2)-1; diamond++) {    // 'for' loop for upper half '@'
            printf("   ");
        }
        for(dash = size; dash > i; dash--) {     // 'for' loop for upper left half '-'
            printf(" - ");
        }
        printf("\n");
    }

//    For Lower Half

    for(i = size - 1; i > 0; i--) {
        printf("\t");

        for(dash = i; dash <= size; dash++) {
            printf(" - ");
        }
        for(diamond = 1; diamond < (i*2)-2; diamond++) {
            printf(" @ ");
        }
        for(dash = size; dash >= i; dash--) {
            printf(" - ");
        }
//  Another Diamond
        for(dash = i; dash <= size; dash++) {
            printf(" - ");
        }
        for(diamond = 1; diamond < (i*2)-2; diamond++) {
            printf("   ");
        }
        for(dash = size; dash >= i; dash--) {
            printf(" - ");
        }
        printf("\n");
    }
    return 0;
}
