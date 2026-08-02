#include <stdio.h>

int main()
{
    int er = 0;
    float account, cash, money;
    char menu;

    scanf("%f", &account);
    scanf("%f", &cash);

    while (1)
    {
        scanf("%c %f", &menu, &money);
        if (menu == 'E') break;

        if (menu == 'D')
        {
            if (money > cash)
                er++;
            else
            {
                account += money;
                cash -= money;
                er = 0;
            }
        }
        else if (menu == 'W')
        {
            if (money > account)
                er++;
            else
            {
                account -= money;
                cash += money;
                er = 0;
            }
        }

        if (er >= 3) break;
    }

    printf("%.2f\n", account);
    printf("%.2f", cash);

    return 0;
}
