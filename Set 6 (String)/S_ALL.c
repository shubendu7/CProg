// MENU DRIVEN ALL STRING FUNCTIONS

#include <stdio.h>
#include <string.h>
int stringLength(char str[]) {
    int i=0;
    while(str[i] != '\0') i++;
    return i;
}
void stringReverse(char str[]) {
    int i, len;
    char temp;
    len = stringLength(str);
    for(i=0; i<len/2; i++) {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }}
int isPalindrome(char str[]) {
    int i, len = stringLength(str);
    for(i=0; i<len/2; i++) {
        if(str[i] != str[len-1-i])
            return 0;
    }
    return 1;
}

void countCharacters(char str[]) {
    int i, v=0, c=0, d=0, s=0;
    for(i=0; str[i]!='\0'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            v++;
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            c++;
        else if(str[i]>='0' && str[i]<='9')
            d++;
        else if(str[i]==' ')
            s++;
    }
    printf("Vowels=%d, Consonants=%d, Digits=%d, Spaces=%d\n", v,c,d,s);
}

int stringCompare(char s1[], char s2[]) {
    int i=0;
    while(s1[i] != '\0' && s2[i] != '\0') {
        if(s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

void stringConcat(char s1[], char s2[]) {
    int i=0, j=0;
    while(s1[i] != '\0') i++;
    while(s2[j] != '\0') {
        s1[i++] = s2[j++];
    }
    s1[i] = '\0';
}

void toUpperCase(char str[]) {
    int i;
    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='a' && str[i]<='z')
            str[i] = str[i]-32;
    }
}

void toLowerCase(char str[]) {
    int i;
    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i]+32;
    }
}

void charFrequency(char str[], char ch) {
    int i, count=0;
    for(i=0; str[i]!='\0'; i++) {
        if(str[i]==ch) count++;
    }
    printf("Frequency of '%c' = %d\n", ch, count);
}

int main() {
    char str1[200], str2[200], temp[200], ch;
    int choice;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    do {
        printf("\n===== STRING MENU =====\n");
        printf("1. Length of string\n");
        printf("2. Reverse string\n");
        printf("3. Palindrome check\n");
        printf("4. Count vowels, consonants, digits, spaces\n");
        printf("5. Compare two strings\n");
        printf("6. Concatenate two strings\n");
        printf("7. Convert to UPPERCASE\n");
        printf("8. Convert to lowercase\n");
        printf("9. Frequency of a character\n");
        printf("10. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        switch(choice) {
            case 1:
                printf("Length of str1 = %d\n", stringLength(str1));
                printf("Length of str2 = %d\n", stringLength(str2));
                break;

            case 2:
                strcpy(temp, str1);
                stringReverse(temp);
                printf("Reverse of str1 = %s\n", temp);
                strcpy(temp, str2);
                stringReverse(temp);
                printf("Reverse of str2 = %s\n", temp);
                break;

            case 3:
                if(isPalindrome(str1)) printf("str1 is Palindrome\n");
                else printf("str1 is Not Palindrome\n");
                if(isPalindrome(str2)) printf("str2 is Palindrome\n");
                else printf("str2 is Not Palindrome\n");
                break;

            case 4:
                printf("For str1:\n");
                countCharacters(str1);
                printf("For str2:\n");
                countCharacters(str2);
                break;

            case 5:
                if(stringCompare(str1,str2)==0) printf("Strings are equal\n");
                else printf("Strings are not equal\n");
                break;

            case 6:
                strcpy(temp, str1);
                stringConcat(temp, str2);
                printf("Concatenated string = %s\n", temp);
                break;

            case 7:
                strcpy(temp, str1);
                toUpperCase(temp);
                printf("str1 in UPPERCASE = %s\n", temp);
                strcpy(temp, str2);
                toUpperCase(temp);
                printf("str2 in UPPERCASE = %s\n", temp);
                break;

            case 8:
                strcpy(temp, str1);
                toLowerCase(temp);
                printf("str1 in lowercase = %s\n", temp);
                strcpy(temp, str2);
                toLowerCase(temp);
                printf("str2 in lowercase = %s\n", temp);
                break;

            case 9:
                printf("Enter a character: ");
                scanf("%c", &ch);
                charFrequency(str1, ch);
                charFrequency(str2, ch);
                break;

            case 10:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 10);

    return 0;
}
