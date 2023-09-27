#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_num - function to check the string for number
 * @st: string being passed
 * Return: 1 for number 0 for not
 */

int check_num(const char *st) {
    // Add more robust number validation here if needed
    for (int a = 0; st[a] != '\0'; a++) {
        if (st[a] < '0' || st[a] > '9')
            return 0;
    }
    return 1;
}

unsigned int string_length(const char *str) {
    unsigned int a;
    for (a = 0; str[a] != '\0'; a++) {}
    return a;
}

void print_string(const char *st) {
    while (*st != '\0') {
        _putchar(*st);
        st++;
    }
    _putchar('\n');
}

void *_calloc(unsigned int number, unsigned int size) {
    void *p;
    if (number == 0 || size == 0)
        return NULL;
    p = malloc(number * size);
    if (p == NULL)
        return NULL;
    for (unsigned int a = 0; a < number * size; a++)
        ((char *)p)[a] = 0;
    return p;
}

int main(int argc, char **argv) {
    if (argc < 3 || !check_num(argv[1]) || !check_num(argv[2])) {
        fprintf(stderr, "Error\n");
        return EXIT_FAILURE;
    }

    const char *n1 = argv[1];
    const char *n2 = argv[2];
    const unsigned int l1 = string_length(n1);
    const unsigned int l2 = string_length(n2);
    const unsigned int l = l1 + l2;

    char *multi_res = _calloc(l + 1, sizeof(char));
    if (multi_res == NULL) {
        fprintf(stderr, "Error\n");
        return EXIT_FAILURE;
    }

    // Perform the multiplication and store the result in multi_res

    print_string(multi_res);
    free(multi_res);

    return 0;
}
