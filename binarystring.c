int maxScore(char* s) {
    int sum = 0;
    int left = 0;
 
    int max = -1;
    int summax = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '1') {
            sum++;
        }
    }

    for (int i = 0; i < strlen(s)-1; i++) {
        if (s[i] == '0') {
            left++;
        } else {
            sum--;
        }
        summax = left + sum;
        if (summax > max) {
            max = summax;
        }
    }
    return max;
}
