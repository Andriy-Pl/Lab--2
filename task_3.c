#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int n, l=1;
    printf("Зима - 1\nВесна - 2\nЛіто - 3\nОсінь - 4\nВведіть пору року: ");
    scanf("%d", &n);
    switch (n){
    case 1: printf("Грудень, Січень, Лютий"); break;
    case 2: printf("Березень, Квітень, Травень"); break;
    case 3: printf("Червень, Липень, Серпень"); break;
    case 4: printf("Вересень, Жовтень, Листопад"); break;
    default: printf("Введене число неправильне"); break;
    }
    return 0;
}