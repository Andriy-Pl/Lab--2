# include <stdio.h>
# include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    
    float x1, x2, x3;
    printf("Введіть 3 числа: ");
    scanf("%f %f %f",&x1, &x2, &x3);
    
    if((x1<x2 && x2<x3) || (x3<x2 && x2<x1)){
        printf("Точка %g лежить між %g та %g",x2, x1, x3);
    }else if ((x3<x1 && x1<x2) || (x2<x1 && x1<x3))
    {
        printf("Точка %g лежить між %g та %g",x1 ,x3, x2);
    }else if ((x1<x3 && x3<x2)||(x2<x3 && x3<x1))
    {
       printf("Точка %g лежить між %g та %g",x3 ,x1, x2);
    }else{
        printf("Координати співпадають");
    }

    return 0;
}