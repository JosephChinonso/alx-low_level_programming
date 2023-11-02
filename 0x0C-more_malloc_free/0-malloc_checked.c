#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n) {
    unsigned int len1 = 0, len2 = 0;
    char *result;
    
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (n >= len2) {
        n = len2;
    }

    result = (char *)malloc(sizeof(char) * (len1 + n + 1));

    if (result == NULL) {
        return NULL;
    }

    strcpy(result, s1);
    strncat(result, s2, n);

    return result;
}

int main() {
    char *s1 = "Hello, ";
    char *s2 = "world!";
    unsigned int n = 5;

    char *result = string_nconcat(s1, s2, n);

    if (result != NULL) {
        printf("Concatenated string: %s\n", result);
        free(result);
    } else {
        printf("Failed to allocate memory for the concatenated string.\n");
    }

    return 0;
}

