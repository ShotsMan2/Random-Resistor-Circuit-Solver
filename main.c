#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double tasarım(double direncler[], int bas, int son)
{
    if (bas == son)
    {
        return direncler[bas];
    }

    int bolmenoktası = bas + (rand() % (son - bas));

    double r1 = tasarım(direncler, bas, bolmenoktası);
    double r2 = tasarım(direncler, bolmenoktası + 1, son);

    int tip = rand() % 2;

    if (tip == 0)
    {
        printf("   [Grup %.2f] ile [Grup %.2f] --> SERI baglandi.\n", r1, r2);
        return r1 + r2;
    }
    else
    {
        printf("   [Grup %.2f] ile [Grup %.2f] --> PARALEL baglandi.\n", r1, r2);
        return (r1 * r2) / (r1 + r2);
    }
}

int main()
{
    int n, i;

    srand(time(NULL));

    printf("n i girin");
    scanf("%d", &n);

    double direncler[n];

    for (i = 0; i < n; i++)
    {
        direncler[i] = rand() % 90 + 10;
        printf("%lf \n", direncler[i]);
    }

    double sonuc = tasarım(direncler, 0, n - 1);

    printf("%lf", sonuc);
}
