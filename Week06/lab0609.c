#include <stdio.h>

int main()
{
    int num;
    int c[26] = {0};
    int s = 0;
    char alpha;
    char order[26];

    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        scanf(" %c", &alpha);

        if (alpha >= 'A' && alpha <= 'Z'){
            alpha += 32;
        }

        c[alpha - 'a']++;

        if(c[alpha - 'a'] == 1)
        {
            order[s] = alpha;
            s++;
        }
    }

    for (int i = 0; i < s; i++)
    {
        printf("%c: %d\n", order[i], c[order[i] - 'a']);
    }

    return 0;
}
