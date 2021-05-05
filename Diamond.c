/** Nicholas Rudolph */
/** Project1.C       */
/** Jan 29, 2020     */
#include <stdio.h> 

/** function Diamond191() */
void Diamond191() {
    printf("\n");
    for (int i=1, j=0; i < 18 ; i++) { /** iterates numbers, j represents current number */
        if (i > 9) { /** prints numbers 9-1 17 times */
            j--;
            int space = (9 - j);
            for (int x=0; x < space; x++) { /** for loop that prints (9 - current number) amount of spaces */
                printf(" ");
            } // for loop
            for (int x=0; x < (j * 2) - 1; x++) { /** for loop that prints j, (j * 2) - 1 times */
                printf("%d", j);
            } // for loop
            printf("%d\n", j);
        } // if
        else { /** prints numbers 1 - 9 17 times */
            j++;
            int space = (9 - j);
            for (int x=0; x < space; x++) { /** for loop that prints (9 - current number) amount of spaces */
                printf(" ");
            } // for loop
            for (int x=0; x < (j * 2) - 1; x++) { /** for loop that prints j, (j * 2) - 1 times */
                printf("%d", j);
            } // for loop
            printf("%d\n", j);
        } // else
    } // for loop
} // function Diamond191()

/** function Diamond919() */
void Diamond919() {
    printf("\n");
    for (int i=1, j=10; i < 18 ; i++) { /** iterates numbers, j represents current number */
        if (i > 9) { /** prints numbers 1 - 9 */
            j++;
            for (int k=0; k < 2; k++) { /** for loop loops everything 2 times */
                for (int x=0; x < j; x++) { /** for loop that prints j, j times */
                    printf("%d", j);
                } // for loop
                int space = (9 - j) * 2;
                for (int x=0; x < space; x++) { /** for loop that prints spaces = 9 - j and prints those spaces */
                    printf(" ");
                } // for loop
            } // for loop
            printf("\n");
        } // if
        else { /** prints numbers 9 - 1 */
            j--; 
            for (int k=0 ; k < 2; k++) { /** for loop loops everything 2 times */
                for (int x=0; x < j; x++) { /** for loop that prints j, j times */
                    printf("%d", j);
                } // for loop
                int space = (9 - j) * 2;
                for (int x=0; x < space; x++) { /** for loop that prints spaces = 9 - j and prints those spaces */
                    printf(" ");
                }  // for loop
            } // for loop
            printf("\n");
        } // else 
    } // for loop
} // function Diamond919()

/** Main */
int main() {

 /** repesents number that is inputted by user */
    while (1) { 
        printf("\nEnter either 191 or 919, anything else will quit:");
        char a, b, c;
        while ((a = getchar()) == ' '); /* skips blanks, char will contain the first nonblank char */
        if (a != '1' & a != '9') {
            printf("\nGood Bye\n");
            break;
        }
        while ((b = getchar()) == ' ');
        if (b != '1' & b != '9') {
            printf("\nGood Bye\n");
            break;
        }
        while ((c = getchar()) == ' ');
        if (c != '1' & c != '9') {
            printf("\nGood Bye\n");
            break;
        }
        while (getchar() != '\n')  /* skips rest of line */  
        ;

        if ((a != '9' && b != '1' && c != '9') && (a != '1' && b != '9' && c != '1')) {
            printf("\nGood bye!\n");
            break;
        } // if
        else {
            a == '9' && b == '1' && c == '9' ? Diamond919() : Diamond191();
        } // else
    } // while loop
    return 0;
} // main


