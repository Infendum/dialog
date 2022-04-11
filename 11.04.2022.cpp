
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
