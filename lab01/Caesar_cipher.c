#include <stdio.h>
int main()
{
    char s[101];
    int k;
    scanf("%s %d",s,&k);
    for(int i=0;s[i] !='\0';i++){
        char ch = s[i];
        if (ch >='a'&&ch<='z'){
            printf("%c\n",(ch-'a'+k+26)%26+'a');
        }
        else if (ch>='A'&&ch<='Z'){
            printf("%c\n",(ch-'A'+k+26)%26+'A');
        }
        else {
            printf("%c\n",ch);
        }
    }
    return 0;
}
