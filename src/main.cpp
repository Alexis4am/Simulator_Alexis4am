#include <SFML/Graphics.hpp>
#include <iostream>
#include "vectors/core.h"

int main()
{
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
}
