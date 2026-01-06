#include <SFML/Graphics.hpp>
#include <iostream>
#include "vectors/Vector3d/core.h"
#include "vectors/Vector2d/core2.h"
int main()
{
    cyclone::Vector3 lefty(2,3,4);
    cyclone::Vector3 righty(1,2,3.5);
    lefty += righty;
    std::cout << "HELLO THIS IS THE ADDITION:" << std::endl;
    std::cout << lefty << std::endl;


    /*
    auto window = sf::RenderWindow(sf::VideoMode({600u, 600u}), "CMake SFML Project");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();
        sf::CircleShape circle{100.0f};
        circle.setFillColor(sf::Color::Blue);
        window.draw(circle);
        window.display();
    }
     */

}
