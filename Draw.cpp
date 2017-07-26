#include "stdafx.h"
#include "Engine.h"

using namespace sf;

void Engine::draw()
{
	m_Window.clear(Color::White);
	m_Window.draw(m_BackgroundSprite);
	
	//
	//
	//.......draw sprites here..........
	//
	//

	m_Window.display();
}