#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int num, ones, tens, hundreds, thousands;
    printf("Введіть число n (n<=9999): ");
    scanf("%d", &num);
        ones = num%10;
        tens = (num/10)%10;
        hundreds = (num/100)%10;
        thousands = (num/1000)%10;
    if(num>=1 && num<=9){
        printf("Число %d є паліндромічним",num);
    }else if ((num>=10 && num<=99)&&(ones == tens))
    {
        printf("Число %d є паліндромічним",num);
    }else if ((num>=100 && num<=999)&&(ones==hundreds))
    {
        printf("Число %d є паліндромічним",num);
    }else if ((num>=1000 && num<=9999)&&(ones==thousands && tens == hundreds))
    {
        printf("Число %d є паліндромічним",num);
    }else if (num<=0 || num>10000)
    {
        printf("Введене число за дозволеним діапазоном");
    }else{
        printf("Число %d не є паліндромічним",num);
    }
    return 0;
}