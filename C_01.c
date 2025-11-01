#include <windows.h>
#include <stdio.h>

int main(void)
{
    // 実行コンソールの文字コードを指定する。
    SetConsoleOutputCP(CP_UTF8);

    printf("二ホン\n");
    return 0;
}
