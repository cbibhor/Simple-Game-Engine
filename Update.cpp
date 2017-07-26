#include "stdafx.h"
#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{

	m_Player->update(dtAsSeconds);
	m_Enemy->update(dtAsSeconds);

	//
	//
	//.....update entities here
	//
	//

}