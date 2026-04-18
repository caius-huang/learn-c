#include <stdio.h>
int main()
{
    char ch,begin;
    scanf("%c",&begin);
    ch=begin;
    if (ch>='a'&&ch<='z'){
        ch=ch-32;
    }
    int pos=ch -'A'+1;

    int prime[]={2,3,5,7,11,13,17,19,23};
    int is_prime=0;
    for (int i=0;i<9;i++){
        if (pos==prime[i]){         
            is_prime=1;
            break;
        }
    }
    if (pos==1){
        printf("%c\n",begin);
    }
    else if (is_prime){
        if (begin>='a'&& begin<='z'){
            printf("%c\n",(begin-'a'+2)%26+'a');
        }else{
            printf("%c\n",(begin-'A'+2)%26+'A');
        }
    }else{
        printf("%d\n",begin);
    }
    
    return 0;

}
