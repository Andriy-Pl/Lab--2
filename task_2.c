#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    float x;
    printf("Введіть число x : ");
    scanf("%f", &x);
    int n = (int)x;
    printf("Ціла частина числа: %d\n", n);
    if(x>=0){
        printf("Заокруглення до найблищого цілого: %d", (int)(x+0.5));
    }else{
        printf("Заокруглення до найблищого цілого: %d", (int)(x-0.5));
    }
    return 0;
}