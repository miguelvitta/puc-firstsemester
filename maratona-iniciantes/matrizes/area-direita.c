#include <stdio.h>

int main()
{
    double m[12][12], s = 0;
    char t;
    scanf("%c", &t);
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            scanf("%lf", &m[i][j]);
        }
    }
    for(int i = 1; i < 11; i++) {
        for(int j = 12 - i; i < 6 && j < 12 ; j++) {
            s = s + m[i][j];
        }
        for(int j = i + 1; i > 5 && j < 12 ; j++) {
            s = s + m[i][j];
        }
    }
    if(t == 'S') {
        printf("%.1lf\n", s);
    }
    else {
        printf("%.1lf\n", s/30);
    }

    return 0;
}

