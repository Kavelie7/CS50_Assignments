#include <stdio.h>
#include <string.h>
#include <math.h>

void binaryToHexadecimal(char binary[]) {
    int length = strlen(binary);
    int remainder = length % 4;
    
    // If the length is not a multiple of 4, pad with leading zeros
    if (remainder != 0) {
        int pad = 4 - remainder;
        for (int i = length; i >= 0; i--) {
            binary[i + pad] = binary[i];
        }
        for (int i = 0; i < pad; i++) {
            binary[i] = '0';
        }
    }

    int hexLength = strlen(binary) / 4;
    printf("Hexadecimal: ");
    for (int i = 0; i < hexLength; i++) {
        char hexChar[5];
        strncpy(hexChar, &binary[i * 4], 4);
        hexChar[4] = '\0';
        
        int value = 0;
        for (int j = 0; j < 4; j++) {
            if (hexChar[j] == '1') {
                value += pow(2, 3 - j);
            }
        }

        // Print the corresponding hexadecimal character
        if (value < 10) {
            printf("%d", value);
        } else {
            printf("%c", value + 87);  // Convert to hexadecimal 'a'-'f'
        }
    }
    printf("\n");
}

int main() {
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);

    binaryToHexadecimal(binary);

    return 0;
}
