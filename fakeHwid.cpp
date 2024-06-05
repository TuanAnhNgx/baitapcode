#include <windows.h>
#include <iostream>

int main() {
    HKEY hKey;
    LPCSTR sk = "SYSTEM\\CurrentControlSet\\Control\\IDConfigDB\\Hardware Profiles\\0001";

    // M? khóa registry
    if (RegOpenKeyExA(HKEY_LOCAL_MACHINE, sk, 0, KEY_SET_VALUE, &hKey) == ERROR_SUCCESS) {
        LPCSTR newID = "{12345678-1234-1234-1234-123456789ABD}";
        // Thay d?i giá tr? c?a HwProfileGuid
        if (RegSetValueExA(hKey, "HwProfileGuid", 0, REG_SZ, (LPBYTE)newID, strlen(newID) + 1) == ERROR_SUCCESS) {
            std::cout << "HWID has been changed successfully!" << std::endl;
        } else {
            std::cout << "Failed to change HWID." << std::endl;
        }
        RegCloseKey(hKey);
    } else {
        std::cout << "Failed to open registry key." << std::endl;
    }
    return 0;
}

