#include <stdio.h>
#include <windows.h>

int main(void)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    wchar_t msg[] = L"\U0001f427\n";
    DWORD len = sizeof(msg) / sizeof(*msg) - 1;
    BOOL err = !WriteConsoleW(h, msg, len, &len, 0);
    return err;
}

