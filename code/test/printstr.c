#include "syscall1.h"

main() {
    int len;
    len = Print("Hello NachOS2025!\n");
    PrintInt(len);
    len = Print("ABCDEFGHIJKLMNabcdefghijklmn\n");
    PrintInt(len);
}