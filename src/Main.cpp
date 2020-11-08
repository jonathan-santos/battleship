#include <iostream>
#include <thread>
#include <chrono>

void Clear()
{
    std::cout << "\033c" << std::endl;
}

void Wait(int milliseconds)
{
    std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::milliseconds(milliseconds));
}

void MainMenu()
{
    char option = ' ';

    while (option == ' ')
    {
        Clear();
        std::cout << "\nBATTLESHIP\n" << std::endl;
        std::cout << "1. Play against CPU" << std::endl;
        std::cout << "2. Play against other player" << std::endl;
        std::cout << "3. Exit\n" << std::endl;
        std::cout << "Input your desired option: ";;

        option = std::cin.get();
        std::cout << std::endl;

        if (option == '1') {
            std::cout << "CPU MODE" << std::endl;
        } else if (option == '2') {
            std::cout << "VS MODE" << std::endl;
        } else if (option == '3') {
            std::cout << "Exiting" << std::endl;
        } else {
            std::cout << "Invalid option, try again" << std::endl;
            std::getchar();
            option = ' ';
            Wait(1000);
        }
    }
}

int main()
{
    MainMenu();
    std::cout << "\nPress anything to exit..." << std::endl;
    std::getchar();
}
