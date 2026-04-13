#include <stdio.h>
#include <string.h>


void reverse(char str[]) {
    int len = strlen(str);
    char temp;
    for(int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}


int isPalindrome(char str[]) {
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

int main() {
    char str1[100], str2[100], temp[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Length of first string = %lu\n", strlen(str1));

    
    strcpy(temp, str1); 
    reverse(temp);
    printf("Reversed string = %s\n", temp);

  
    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    if(isPalindrome(str1))
        printf("First string is a palindrome\n");
    else
        printf("First string is not a palindrome\n");

    if(strstr(str1, str2) != NULL)
        printf("Second string is a substring of first string\n");
    else
        printf("Second string is NOT a substring of first string\n");

    return 0;
}
