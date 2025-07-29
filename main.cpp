#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    setlocale(LC_ALL, "English");
    string n;
    SetConsoleTextAttribute(console, FOREGROUND_GREEN);
    cout << "Type password: ";
    SetConsoleTextAttribute(console, FOREGROUND_RED);
    cin >> n;
    if (n == "123456")
    {
        SetConsoleTextAttribute(console, FOREGROUND_GREEN);
        cout << "Macros run" << endl;
        static const TCHAR* myTitle = TEXT("MacrosBrdige by m0ln1z");
        int style;
        cout << "Type macros" << endl;
        SetConsoleTextAttribute(console, FOREGROUND_GREEN);
        cout << "1. ";
        SetConsoleTextAttribute(console, FOREGROUND_RED);
        cout << "NinjaBridging" << endl;
        SetConsoleTextAttribute(console, FOREGROUND_GREEN);
        cout << "2. ";
        SetConsoleTextAttribute(console, FOREGROUND_RED);
        cout << "Andromeda" << endl;
        SetConsoleTextAttribute(console, FOREGROUND_GREEN);
        cout << "3. ";
        SetConsoleTextAttribute(console, FOREGROUND_RED);
        cout << "Bridge v1" << endl;
        SetConsoleTextAttribute(console, FOREGROUND_GREEN);
        cout << "4. ";
        SetConsoleTextAttribute(console, FOREGROUND_RED);
        cout << "Bridge v2" << endl;
        SetConsoleTextAttribute(console, FOREGROUND_GREEN);
        cout << "Choice type macros: ";
        SetConsoleTextAttribute(console, FOREGROUND_RED);
        cin >> style;
        while (true)
        {
            if (style == 1)
            {
                if (GetAsyncKeyState(0x52)) 
                {
                    mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    keybd_event(0x53, 0x39, NULL, NULL);

                    Sleep(230);
                    keybd_event(0x10, 0x39, NULL, NULL);

                    Sleep(260);
                    keybd_event(0x53, 0x39, KEYEVENTF_KEYUP, NULL);
                    Sleep(5);
                    keybd_event(0x10, 0x39, KEYEVENTF_KEYUP, NULL);

                    mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                }
            }
            if (style == 2)
            {
                if (GetAsyncKeyState(0x52)) 
                {
                    mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    Sleep(32);
                    mouse_event(MOUSEEVENTF_MOVE, 0, -850, 0, 0);
                    Sleep(16);
                    mouse_event(MOUSEEVENTF_MOVE, 0, -850, 0, 0);
                    Sleep(16);
                    mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    keybd_event(0x53, 0x39, NULL, NULL);

                    Sleep(230);
                    keybd_event(0x10, 0x39, NULL, NULL);

                    Sleep(260);
                    keybd_event(0x53, 0x39, KEYEVENTF_KEYUP, NULL);
                    Sleep(5);
                    keybd_event(0x10, 0x39, KEYEVENTF_KEYUP, NULL);
                    mouse_event(MOUSEEVENTF_MOVE, 0, 850, 0, 0);
                    Sleep(32);
                    mouse_event(MOUSEEVENTF_MOVE, 0, 850, 0, 0);
                    mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    Sleep(32);
                    mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);

                }
            }
            if (style == 3)
            {
                if (GetAsyncKeyState(0x52)) 
                {
                    if (GetAsyncKeyState(0x52)) 
                    {
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_MOVE, 600, -800, 0, 0);
                        Sleep(8);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        keybd_event(0x44, 0x39, NULL, NULL);

                        Sleep(230);
                        keybd_event(0x10, 0x39, NULL, NULL);

                        Sleep(90);
                        keybd_event(0x44, 0x39, KEYEVENTF_KEYUP, NULL);
                        Sleep(2);
                        keybd_event(0x10, 0x39, KEYEVENTF_KEYUP, NULL);
                        mouse_event(MOUSEEVENTF_MOVE, -600, 800, 0, 0);
                        Sleep(16);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        Sleep(16);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    }
                }
            }
            if (style == 4)
            {
                if (GetAsyncKeyState(0x52)) 
                {
                    if (GetAsyncKeyState(0x52)) 
                    {
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_MOVE, 600, -800, 0, 0);
                        Sleep(16);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        keybd_event(0x44, 0x39, NULL, NULL);

                        Sleep(230);
                        keybd_event(0x10, 0x39, NULL, NULL);

                        Sleep(90);
                        keybd_event(0x44, 0x39, KEYEVENTF_KEYUP, NULL);
                        Sleep(5);
                        keybd_event(0x10, 0x39, KEYEVENTF_KEYUP, NULL);
                        mouse_event(MOUSEEVENTF_MOVE, -600, 800, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    }
                    if (GetAsyncKeyState(0x52)) 
                    {
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_MOVE, -600, -800, 0, 0);
                        Sleep(16);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        keybd_event(0x41, 0x39, NULL, NULL);

                        Sleep(230);
                        keybd_event(0x10, 0x39, NULL, NULL);

                        Sleep(90);
                        keybd_event(0x41, 0x39, KEYEVENTF_KEYUP, NULL);
                        Sleep(5);
                        keybd_event(0x10, 0x39, KEYEVENTF_KEYUP, NULL);
                        mouse_event(MOUSEEVENTF_MOVE, 600, 800, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    }
                    if (GetAsyncKeyState(0x52)) 
                    {
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_MOVE, 0, -1550, 0, 0);
                        Sleep(16);
                        mouse_event(MOUSEEVENTF_MOVE, 0, -1550, 0, 0);
                        Sleep(16);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        keybd_event(0x53, 0x39, NULL, NULL);

                        Sleep(230);
                        keybd_event(0x10, 0x39, NULL, NULL);

                        Sleep(90);
                        keybd_event(0x53, 0x39, KEYEVENTF_KEYUP, NULL);
                        Sleep(5);
                        keybd_event(0x10, 0x39, KEYEVENTF_KEYUP, NULL);
                        mouse_event(MOUSEEVENTF_MOVE, 0, 1550, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_MOVE, 0, 1550, 0, 0);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    }
                    if (GetAsyncKeyState(0x52)) 
                    {
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_MOVE, 0, -850, 0, 0);
                        Sleep(16);
                        mouse_event(MOUSEEVENTF_MOVE, 0, -850, 0, 0);
                        Sleep(16);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        keybd_event(0x53, 0x39, NULL, NULL);

                        Sleep(230);
                        keybd_event(0x10, 0x39, NULL, NULL);

                        Sleep(90);
                        keybd_event(0x53, 0x39, KEYEVENTF_KEYUP, NULL);
                        Sleep(5);
                        keybd_event(0x10, 0x39, KEYEVENTF_KEYUP, NULL);
                        mouse_event(MOUSEEVENTF_MOVE, 0, 850, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_MOVE, 0, 850, 0, 0);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                        Sleep(32);
                        mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    }
                }
            }
            if (style == 5)
            {
                if (GetAsyncKeyState(0x52)) 
                {
                    mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    Sleep(32);
                    mouse_event(MOUSEEVENTF_MOVE, 0, -1550, 0, 0);
                    Sleep(16);
                    mouse_event(MOUSEEVENTF_MOVE, 0, -1550, 0, 0);
                    Sleep(16);
                    mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    keybd_event(0x53, 0x39, NULL, NULL);

                    Sleep(230);
                    keybd_event(0x10, 0x39, NULL, NULL);

                    Sleep(90);
                    keybd_event(0x53, 0x39, KEYEVENTF_KEYUP, NULL);
                    Sleep(5);
                    keybd_event(0x10, 0x39, KEYEVENTF_KEYUP, NULL);
                    mouse_event(MOUSEEVENTF_MOVE, 0, 1550, 0, 0);
                    Sleep(32);
                    mouse_event(MOUSEEVENTF_MOVE, 0, 1550, 0, 0);
                    mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                    Sleep(32);
                    mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
                }
            }
        }
    }
}