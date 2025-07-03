/* Minimal main program -- everything is loaded from the library */

#include "Python.h"

#ifdef MS_WINDOWS
// Don't really care about Python coding style here
// This fork is a hack to add Agility SDK support
__declspec(dllexport) extern const uint32_t D3D12SDKVersion = 616;
__declspec(dllexport) extern const char* D3D12SDKPath = u8".\\D3D12\\";

int
wmain(int argc, wchar_t **argv)
{
    return Py_Main(argc, argv);
}
#else
int
main(int argc, char **argv)
{
    return Py_BytesMain(argc, argv);
}
#endif
