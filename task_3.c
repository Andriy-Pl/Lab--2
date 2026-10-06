#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int ch;
    printf("Позначення для відмінків \n\"називний\" — \"н\" або \"Н\";\n\"родовий\" — \"р\" або \"Р\";\n\"давальний\" — \"д\" або \"Д\";\n\"знахідний\" — \"з\" або \"З\";\n\"орудний\" — \"о\" або \"О\";\n\"місцевий\" — \"м\" або \"М\"\n\"кличний\" — \"к\" або \"К\"");
    printf("\nВведіть відмінок (одну літеру): ");
    ch = getchar();
    switch (ch)
    {
    case 173: case 141: printf("\"називний\" - \"хто?, що?\""); break;
    case 224: case 144: printf("\"родовий\" - \"кого?, чого?\""); break;
    case 164: case 132: printf("\"давальний\" - \"кому?, чому?\""); break;
    case 167: case 135: printf("\"знахідний\" - \"кого?, що?\""); break;
    case 174: case 142: printf("\"орудний\" - \"ким?, чим?\""); break;
    case 172: case 140: printf("\"місцевий\" - \"(на) кому?, (на) чому?\""); break;
    case 170: case 138: printf("\"кличний\" ----"); break;
    default:
        printf("Такого відмінка не існує!"); break;
    }
    return 0;
}