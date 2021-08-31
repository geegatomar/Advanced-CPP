#include <bits/stdc++.h>
using namespace std;

enum class TypeMonster
{
    ogre,
    dragon,
    orc,
    giant_spider,
    slime
};

struct Monster
{
    TypeMonster type;
    string name;
    int health;
};

int main()
{
    Monster ogre{TypeMonster::ogre, "Torg", 145};
}