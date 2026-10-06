# include <stdio.h>
# include <math.h>
# include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    
    int x, y, z;
    float arithAveragen, geomAveragen;
    printf("Введіть 3 числа: ");
    scanf("%d %d %d",&x, &y, &z);
    arithAveragen = (x+y+z)/3.;
    geomAveragen = cbrt(x*y*z);
    if(arithAveragen > geomAveragen){
        printf("Середнє арифметичне більше");
    }else if (arithAveragen == geomAveragen){
        printf("Середнє арифметичне = середньому геометричному");
    }else{
        printf("Середнє геометричне більше");
    }
    return 0;
}