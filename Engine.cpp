#include "stdafx.h"
#include "Engine.h"


Engine::Engine(){
	windowWidth = VideoMode::getDesktopMode().width;
	windowHeight = VideoMode::getDesktopMode().height;
	//windowWidth = 800;
	//windowHeight = 600;

	m_Window.create(VideoMode(windowWidth, windowHeight),
		"Simple Game Engine",
		Style::Fullscreen);

	m_BackgroundTexture.loadFromFile("");
	m_BackgroundSprite.setTexture(m_BackgroundTexture);

	m_Player = new player(-50,280);
	m_Enemy = new Enemy(550,0);
	m_Sound = new SoundClass();

	timeDelay=0;
}

void Engine::start()
{	 
	Clock clock;

	while (m_Window.isOpen())
	{
		// Restart the clock and save the elapsed time into dt
		Time dt = clock.restart();
		
		// Make a fraction from the delta time
		float dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds);
		draw();
	}
}