#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

struct Equation {
    float a, b, c;
};

float sqrt(float n) {
    float l = 0, r = n, ans = -1;
    while (r - l >= 1e-9) {
        float mid = (l + r) / 2;

        if (mid * mid >= n) {
            ans = mid;
            r = mid - 1;
        }

        else l = mid + 1;
    }

    return ans;
}

int strToInt(char s[]) {
    if(s[0] == '\0') return 1;
    int sz = strlen(s);
    int ans = 0;

    // printf("%d %s \n", sz, s);
    for (int i = 0; i < sz; ++i) {
        ans *= 10;
        ans += s[i] - '0';
    }

    return ans;
}
 
float sqr(float a) {
    return a * a;
}

bool isSqrX(char s[]) {
    int sz = strlen(s);
    if (sz < 3) return false;
    if (s[sz - 1] == '2' && s[sz - 2] == '^') return true;

    return false;
}

bool isX(char s[]) {
    int sz = strlen(s);
    if (sz < 1) return false;
    if (s[sz - 1] == 'x') return true;

    return false;
}

int getCoefSqrX(char s[]) {
    int sz = strlen(s);
    char temp[100] = {'\0'};
    for (int i = 0; i < sz - 3; ++i) {
        temp[i] = s[i];
    }

    return strToInt(temp);
}

int getCoefX(char s[]) {
    int sz = strlen(s);
    char temp[100] = {'\0'};
    for (int i = 0; i < sz - 1; ++i) {
        temp[i] = s[i];
    }

    return strToInt(temp);
}

struct Equation simplify(char s[]) {
    int sz = strlen(s) - 1;
    char temp[100] = {'\0'};
    char curSign = '+';

    // printf("%d %s \n", sz, s);

    struct Equation ans; ans.a = ans.b = ans.c = 0;
    int cnt = -1;
    for (int i = 0; i < sz; ++i) {
        if (s[i] == ' ') {
            if (temp[0] == '\0') continue;

            if (isSqrX(temp)) {
                int coef = getCoefSqrX(temp);
                ans.a += (curSign == '+' ? 1 : -1) * coef; 
            }

            else if (isX(temp)) {
                int coef = getCoefX(temp);
                ans.b += (curSign == '+' ? 1 : -1) * coef; 
            }

            else {
                int coef = strToInt(temp);
                ans.c += (curSign == '+' ? 1 : -1) * coef; 
            }

            // printf("%s \n", temp);
            memset(temp, '\0', sizeof(temp)); 
            cnt = -1;
        }

        else if (s[i] == '+' || s[i] == '-') {
            curSign = s[i];
        }

        else {
            temp[++cnt] = s[i];
            // printf("%d %c \n", cnt, s[i]);
        }
    }

    // printf("%d \n", cnt);
    if (temp[0] != '\0') {
        if (isSqrX(temp)) {
            int coef = getCoefSqrX(temp);
            ans.a += (curSign == '+' ? 1 : -1) * coef; 
        }

        else if (isX(temp)) {
            int coef = getCoefX(temp);
            ans.b += (curSign == '+' ? 1 : -1) * coef; 
        }

        else {
            int coef = strToInt(temp);
            ans.c += (curSign == '+' ? 1 : -1) * coef; 
        }

        // printf("%s %d \n", temp, strToInt(temp)); 
        memset(temp, '\0', sizeof(temp)); 
        cnt = -1;
    }

    // printf("%f %f %f \n", ans.a, ans.b, ans.c);
    return ans;
}

void solve(struct Equation x) {
    float a = x.a, b = x.b, c = x.c;
    float delta = sqr(b) - 4 * a * c;
    if (delta < 0) {
        printf("Phuong trinh vo nghiem");
    }

    else if (delta == 0) {
        printf("Phuong trinh co 1 nghiem kep la: %.2f", -b / (2 * a));
    }
    
    else {
        printf("Phuong trinh co 2 nghiem la: %.2f va %.2f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    }
}

int main() {
    char s[1000] = {'\0'};
    fgets(s, 1000, stdin);
    // printf("%s \n", s);
    solve(simplify(s));
}
