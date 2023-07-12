#include<stdio.h>
int main(void)
{
    int i , cnt = 0 ;
    char words[100] ;
    printf("Enter Words ::");
    scanf("%s",&words);
        printf("U have enter --> %s\n\n",words);

    while(words[cnt] != '\0')
    {
        cnt++;
    }
        printf("Length of [%s] is %d\n\n",words ,cnt);
printf("The reverse string is");
for(i=cnt ; i>=0 ; i--)
{
    printf("%c",words[i]);
}



return 0 ;
}
