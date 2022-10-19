#include <stdio.h>
int main()
{
    char letter;
    printf("Enter alphabet");
    scanf("%c", &letter);
    switch (letter)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is vowel", letter);
            break;
        default:
            printf("%c is consonant", letter);
            break;
    }
    
    return 0;
}