
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



struct twins{
    size_t podchet_twins;
    char[];
};



int strcmp(char* s2, size_t s1, size_t s0 ) {
    for (int i; i < 113; i++) {
        if (s2 == )
    }

};


int main()
{

    /*strcpy_s(des, 256, sou)*/

    const char* cstr = "Almaty is the former capital of Kazakhstan and its current financial, scientific, cultural, historical and industrial center. With nearly 2 million inhabitants, it is also Kazakhstan’s largest city and the one most visited by tourists. Whether you plan to spend a long layover or an extended time in the area, this Almaty travel guide is designed to help you make the most of your time in this wonderfully unique city."

        "Located in southeast Kazakhstan at the foot of the Zailiyskiy Alatau branch of the Tian Shan Mountains, the city is naturally divided into upperand lower sections.There is a joke that every citizen of Almaty can travel to any city in the worldand divide it into “upperand lower”, and there is some truth to this claim."

        "Few people in Almaty use landmarks when giving directions, for the city was designed in squares which make it easy to use intersections as references.So, someone might guide you to Seifullin / Kazybek Bi or to Abai / Shevchenko.If you really want to pass for an Almaty native, learn the old street names!"

        "Almaty is a very green city, with more than eight thousand hectares of parks, gardensand squares.Modern Almaty is also an international sporting center which has hosted the prestigious 2011 Asian Winter Games, the 2013 World Boxing Championship, portions of the World Judo Championships, FIS Ski Jumping World Cup, portions of the 2013 Volleyball Grand Prix, the professional cycling race Tour of Almatyand Winter Universiade.Annual marathons held in Almaty likewise attract participants from around the world.";

    char slova[256]{ 0 };
    char twans[256]{ 0 };
    size_t podchet{ strlen(cstr) };
    size_t schet{ 0 };
    const char* pre_position{ cstr };
    const char* position{ strchr(cstr, ' ') };
    while (position != nullptr) {
        
        strncpy_s(slova, pre_position, position - pre_position);
        pre_position = position + 1;
        std::cout << slova << std::endl;
        schet++;
        position = strchr(++position, ' ');
    }
    std::cout << pre_position << std::endl;
    std::cout << schet + 1 << std::endl;
    char sravnenie = strcmp(twans, pre_position, position );
    return 0;
}
