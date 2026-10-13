#include <stdio.h>

int main(void) {
    int zahl;
    const int PeterBday = 15;

    printf("Deine Zahl ist: ");
    scanf("%d", &zahl);

    printf("Deine Zahl ist: %d\n", zahl);

    if (zahl < PeterBday) {
        printf("aw hell nahhhhh, du bist juenger als Petar, aber egaaal hab dich lieb\n");
    }
    else if (zahl == PeterBday) {
        printf("ALLEEEEEEEEEEEEEEEEEESSSSSSSSSSSSSSSS GUTEEEEEEEEE ZUM GEBURTSTAG\n");
    }
    else {
        printf("aw hell YEAEAH, du bist aelter als Petar, hab dich lieb\n");
    }

    return 0;
}
