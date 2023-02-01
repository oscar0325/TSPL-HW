#include <stdio.h>
#include <string.h>

int htoi(char s[])
{
    int i, n, len;

    i = 2;
    n = 0;

    while(s[i] != '\0')
    {   
        if( s[i] >= '0' && s[i] <= '9' )
            n = 16 * n + (s[i] - '0');
        else n = 16 * n + (s[i] - '7');
        ++i;
    }
    return n;
}

int main()
{
    char s1[6] = "0X10F";
    char s2[5] = "0x23";

    printf("%d\n", htoi(s1));
    printf("%d\n", htoi(s2));

    return 0;

}