//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;
    int start = 0;         
    int lastIndex[256];     

    
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (int end = 0; end < n; end++) {
        
        if (lastIndex[(int)s[end]] >= start)
            start = lastIndex[(int)s[end]] + 1;

        
        lastIndex[(int)s[end]] = end;

        
        int currentLen = end - start + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("%d", maxLen);
    return 0;
}