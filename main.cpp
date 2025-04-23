#include<iostream>
//#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 400), "SFML");

    sf::CircleShape shape(90.45); 
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(260, 115);

    sf::ConvexShape star1;
    star1.setFillColor(sf::Color::Blue);
    
    star1.setPointCount(4);
    star1.setPoint(0, {0.f, 0.f});
    star1.setPoint(1, {30.f, 0.f});
    star1.setPoint(2, {0.f, -100.f});
    star1.setPoint(3, {-30.f, 0.f});

    star1.setPosition(130, 210);

    sf::ConvexShape star2 = star1;
    star2.setRotation(72);

    sf::ConvexShape star3 = star1;
    star3.setRotation(144);

    sf::ConvexShape star4 = star1;
    star4.setRotation(216);

    sf::ConvexShape star5 = star1;
    star5.setRotation(288);

    sf::RectangleShape rectangle({180.9, 180.9});
    rectangle.setFillColor(sf::Color::Black);
    rectangle.setOutlineThickness(5);
    rectangle.setOutlineColor(sf::Color::Red);
    rectangle.setPosition(480, 115);

    sf::CircleShape A(125);
    A.setPointCount(3);
    A.setFillColor(sf::Color::Magenta);
    A.setPosition(710, 115);
    


    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            
            if(event.type == sf::Event::Closed)
                window.close();
        }


        window.clear(sf::Color::Black);
        window.draw(star1);
        window.draw(star2);
        window.draw(star3);
        window.draw(star4);
        window.draw(star5);
        window.draw(shape);
        window.draw(rectangle);
        window.draw(A);
        window.display();
    }
    
    return 0;
}