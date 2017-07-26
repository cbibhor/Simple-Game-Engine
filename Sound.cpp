#include "stdafx.h"
#include "Sound.h"

SoundClass::SoundClass(){
	buffer.loadFromFile("");
	sound.setBuffer(buffer);

	music.openFromFile("");
	music.play();
	music.setLoop(true);
}

void SoundClass::playSound(){
	sound.play();
}