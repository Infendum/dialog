
#include <iostream>
#include <string>

int main()
{
    const char* cstr = "alsdfhaljksf alsdfkhaklsdf adklsjfhasdjkl laksdfhadjkl dlafkhdklafh";


    int podchet = strlen(cstr);
    size_t schet = 0;
    for (int i = 0; i < podchet; i++) {
        if (cstr[i] == ' ') {
            schet++;
        }
    }
    std::cout << schet + 1 << " slova" << std::endl;

    return 0;
}



#include <iostream>
#include <string>

int main()
{
    const char* cstr = "alsdfhaljksf alsdfkhaklsdf";


    int podchet = strlen(cstr);
    size_t schet = 0;
    const char* position = strchr(cstr, ' ');
    while (position != nullptr) {
        schet++;
        position = strchr(++position, ' ');
    }
    std::cout << schet + 1 << std::endl;

    return 0;
}




#include <iostream>
#include <string.h>
#include <stdio.h>

int main()
{

    /*strcpy_s(des, 256, sou)*/

    const char* cstr = "alsdfhaljksf alsdfkhaklsdf";

    char slova[256]{ 0 };
    int podchet{ strlen(cstr) };
    size_t schet{ 0 };
    const char* pre_position{ cstr };
    const char* position{ strchr(cstr, ' ') };
    while (position != nullptr) {
        
        strncpy_s(slova, pre_position, position - pre_position);
        pre_position = position;
        schet++;
        position = strchr(++position, ' ');
    }
    std::cout << schet + 1 << std::endl;

    return 0;
}
