#include <iostream>

// BuildGame()//Возращает какой то объект игры у которой вызывается метод start
// {
    
//     return 
// }

class Room
{
 protected:
    int number;
    int flag = 0;
 public:
    virtual void introduce_room() = 0;
    virtual void action() = 0;
    virtual void go_back() = 0;
};
// class Hallway : public;

class Kitchen : public Room
{
 public:
    void introduce_room()
    {
        std::cout << "You're in the kitchen. What will you do?\n" << std::endl;
        std::cout << " 1) Go back\n 2) Drink some water\n 3) Take a sandwiche\n " << std::endl;
        while(1)
        {
            action();
        }
    }

    void action()
    {
        std::cin >> number;
        switch (number)
        {
            case 1:
                go_back();
                break;
        }
    }

    // void go_back()
    // {
    //     Hallway room_1;
    //     room_1.introduce_room;
    // }
};

class Bedroom : public Room
{
 public:
    void introduce_room()
    {
        std::cout << "You're in the living room. What will you do?\n 1) Turn on the TV\n 2) Go to the bad\n 3) Go back!\n" << std::endl;
        while(1)
        {
            action();
        }
    }

    void action()
    {
        std::cin >> number;
        switch (number)
        {
            case 1:
                std::cout << "You lost the remote controller:(\n You can enter 0 to find it!\n";
                std::cin >> number;
                if (number == 0)
                {
                    std::cout << "----" << std::endl;
                }
                break;
            case 2:
                std::cout << "You finishes the game!\n" << std::endl;
                exit(EXIT_SUCCESS); 
            case 3:
                go_back();
                break;
        }
    }

};

class Livingroom : public Room
{
 public:
    void introduce_room()
    {
        std::cout << "It's living room. Options:\n 1) Take a book\n 2) Open a window\n 3) Go back\n" << std::endl;
        while(1)
        {
            action();
        }
    }

    void action()
    {
        std::cin >> number;
        switch (number)
        {
            case 1:
                std::cout << "You took the book but tore the page!!! What to do?\n" << std::endl;
                std::cout << "1) Put the book back in place, close\n 2) Let's fix it!\n" << std::endl;
                std::cin >> number;
                if (number == 1)
                {
                    std::cout << "Now you have to leave the room and never come back!" << std::endl;
                    flag = 1; //Запрет вернуться в комнату
                }
                else
                {
                    std::cout << "You fixed the book!\n" << std::endl;
                }
                break;
            case 2:
                std::cout << "You opened the window\n" << std::endl;
                break;
        }
    }
};

class Hallway : public Room
{
 public:
    void introduce_room()
    {
        std::cout << "You're in the hallway. There are 3 doors in front of you. What will you do?\n" << std::endl;  
        std::cout << "Options (enter the number): \n 1) Walk down the corridor\n 2) Open the door to the kitchen\n 3) Open the bedroom door\n 4) Open the door to the living room\n" << std::endl;
        while(1)
        {
            action();
        }
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
                break;
            // case 3:
            //     std::cout << "" << std::endl;
            //     break;
            // case 4:
            //     if (flag == 1)
            //     {
            //         std::cout << "You can't go to this room\n" << std::endl;
            //     }

            //     Livingroom room_3;
            //     room_3.introduce_room();
            //     break;
        }
    }

    void go()
    {
        std::cout << "You walked along the corridor, but did not choose any door\n" << std::endl;
        action();
    }
};

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
    
    // void build_game()
    // {

    // }
};

int main()
{
    Game game_1;

    // auto game = BuildGame();
    // game->start();
    exit(EXIT_SUCCESS);
}