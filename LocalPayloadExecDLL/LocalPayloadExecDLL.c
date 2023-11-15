// LocalPayloadExecDLL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
