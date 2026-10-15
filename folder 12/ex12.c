#include <stdio.h>
int engKattaRaqam(int n){
    int max = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit > max)
        {
            max = digit;
        }
        n /= 10;
    }
    return max;
}

int main(){
    int son = 582973;
    int natija = engKattaRaqam(son);
    printf("Katta raqam: %d\n", natija);
    return 0;
}