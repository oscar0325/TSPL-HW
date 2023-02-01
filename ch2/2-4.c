

void squeeze(char s[], char t[])
{
    int i, j , k;
    for (i = 0, k = 0; s[i] != '\0'; i++)
        for( j = 0; s[i] != t[j] && t[j] != '\0'; j++)
            ;
        if( t[j] == '\0')
            s[k++] = s[i]; 
    s[k] = '\0';
}