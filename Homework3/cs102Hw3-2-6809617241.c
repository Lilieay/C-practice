#include <stdio.h>

int main() {
    char str[27];
    scanf("%s", str);
    
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    int count[26] = {0};
    int i;
    for (i = 0; i < length; i++) {
        count[str[i] - 'A']++;
    }
    
    int Multiletter = 0;
    int Missingletter = 0;
    
    for (i = 0; i < 26; i++) {
        if (count[i] > 1) {
            Multiletter = 1;
        }
    }
    
    for (i = 0; i < length; i++) {
        if (count[i] == 0) {
            Missingletter = 1;
        }
    }
    
    if (Multiletter == 0 && Missingletter == 0) {
        printf("NO MISSING\n");
    } else {
        for (i = 0; i < 26; i++) {
            if (count[i] > 1) {
                printf("%c", 'A' + i);
            }
        }
        printf("\n");
        
        for (i = 0; i < length; i++) {
            if (count[i] == 0) {
                printf("%c", 'A' + i);
            }
        }
        printf("\n");
    }

    return 0;
}