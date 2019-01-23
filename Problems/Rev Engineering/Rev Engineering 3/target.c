#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

    // Setup buffers to store flag and guess
    char flag[38] = { 0 };
    char guess[38] = { 0 };
    int len = 0;

    // Obfuscate the flag!
    flag[21] = '_';
    flag[6] = 'e';
    flag[32] = '6';
    flag[14] = 'c';
    flag[31] = 'F';
    flag[27] = '1';
    flag[1] = 'T';
    flag[2] = 'F';
    flag[11] = '_';
    flag[4] = 's';
    flag[18] = 'c';
    flag[0] = 'C';
    flag[9] = 'e';
    flag[13] = '_';
    flag[25] = 'e';
    flag[19] = 'e';
    flag[15] = 'e';
    flag[10] = 'a';
    flag[17] = '_';
    flag[26] = '_';
    flag[30] = '2';
    flag[28] = 'B';
    flag[22] = 'c';
    flag[16] = 'e';
    flag[20] = 'a';
    flag[7] = '_';
    flag[12] = 'c';
    flag[24] = 'd';
    flag[33] = '}';
    flag[23] = 'o';
    flag[3] = '{';
    flag[29] = 'B';
    flag[5] = 'e';
    flag[8] = 's';
    
    
    printf("Enter the flag: ");

    // Read in guess
    fgets(guess,38,stdin);
    len = strlen(guess);
    guess[len-1] = 0;

    // Compare guess to my obfuscated flag
    if (!(strcmp(flag,guess))) {
        printf("Correct!\n");
    } else {
        printf("Wrong!\n");
    }

}
