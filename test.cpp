#include <iostream>

// BuildGame()//Возращает какой то объект игры у которой вызывается метод start
// {

//     return 
// }

// abstract class
// class Room
// {
//  public:
//     virtual void introduce_room() = 0;
// };

class Kitchen
{
    int number;
 public:
    void introduce_room()
    {
        std::cout << "You're in the kitchen. What will you do?\n" << std::endl;
        std::cout << " 1) Go back\n 2) Drink some water\n 3) Take a sandwiche\n " << std::endl;
    }

    void action()
    {
        std::cin >> number;
        switch (number)
        {
            case 1:
                go_back();
                break;

            default:
                break;
        }
    }

    void go_back()
    {

    }
};

class Hallway 
{
    int number;
 public:
    void introduce_room()
    {
        std::cout << "You're in the hallway. There are 3 doors in front of you. What will you do?\n" << std::endl;  
        std::cout << "Options (enter the number): \n 1) Walk down the corridor\n 2) Open the door to the kitchen\n 3) Open the bedroom door\n 4) Open the door to the living room\n" << std::endl;
    }

    void action()
    {
        std::cin >> number;
        switch (number)
        {
            case 1:
                go();
                break;
            case 2:
                Kitchen room_2;
                room_2.introduce_room();

            default:
                break;
        }
    }

    void go()
    {
        std::cout << "You walked along the corridor, but did not choose any door\n" << std::endl;
        action();
    }
};

// class Bedroom : public Room
// {

// };

class Game
{
 public:
    Game()
    {
        std::cout << "The game has started!\n" << std::endl;
        Hallway room_1;
        room_1.introduce_room();
        room_1.action();
        Kitchen room_2;
        room_2.action();
    }
};

int main()
{
    Game game_1; 
    // auto game = BuildGame();
    // game->start();
    exit(EXIT_SUCCESS);
}