#include <stdio.h>
#include <Windows.h>

BOOL main(int argc, char* argv[])
{
    if (argc < 2) {
        printf("[-] Invalid command. Usage LocalPayloadExecDLL.exe <path\\to\\dll>");
        return FALSE;
    }

    HMODULE hDll = NULL;

    printf("[+] Loading DLL: %s into PID %d\n", argv[1], GetCurrentProcessId());

    hDll = LoadLibraryA(argv[1]);

    if (!hDll) {
        printf("Error loading DLL, Code: %d", GetLastError());
        return FALSE;
    }

    printf("[+] Done\n[+] Press any key to exit...\n");
    getchar();


    return TRUE;
}
