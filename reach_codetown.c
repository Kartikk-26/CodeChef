#include <stdio.h>

int vowel(char char1) {
    return (char1=='A'||char1=='E'||char1=='I'||char1=='O'||char1=='U');
}

char reachstring(char str1[]) {
    char tgt2[] = "CODETOWN";
    for (int i = 0; i < 8; i++) {
        if ((vowel(str1[i]) && !vowel(tgt2[i])) || (!vowel(str1[i]) && vowel(tgt2[i]))) {
            return 'B';
        }
    }

    return 'A';
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
    char str[9];
    scanf("%s", &str);
    char result = reachstring(str);
    if (result == 'A') {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    }
    return 0;
}
