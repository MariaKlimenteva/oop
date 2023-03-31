#ifndef TEXT_GUEST
#define TEXT_GUEST

#include <iostream>

class Room
{
 protected:
    int number;
    int flag = 0;
 public:
    virtual void introduce_room() = 0;
    void go_back()
    {
        Hallway room_1;
        room_1.introduce_room;
    }
};

class Kitchen : public Room
{
 public:
    void introduce_room();
    void action();
};

class Bedroom : public Room
{
 public:
    void introduce_room();
    void action();
};

class Livingroom : public Room
{
 public:
    void introduce_room();
    void action();
};

class Hallway : public Room
{
 public:
    void introduce_room();
    void action();
    void go();
};

class Game
{
 public:
    Game();
    // void build_game()
    // {

    // }
};

#endif //TEXT_GUEST