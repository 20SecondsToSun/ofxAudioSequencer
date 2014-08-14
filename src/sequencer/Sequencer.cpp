#include "Sequencer.h"

void Sequencer::loadSound()
{
	ofSoundPlayer* sampl ;
	sampl = new ofSoundPlayer();
	sampl->loadSound("sounds/ambient/ambient_01.wav");
	ambient.push_back(*sampl);

	sampl = new ofSoundPlayer();	
	sampl->loadSound("sounds/ambient/ambient_02.wav");
	ambient.push_back(*sampl);

	ambientSampleNum = 0;

	ambientCurrent = &ambient[ambientSampleNum];
}

void Sequencer::updateSound()
{
	ofSoundUpdate();
}

void Sequencer::playAmbient()
{	
	if (!ambientCurrent->getIsPlaying())
	{
		ambientCurrent = &ambient[ambientSampleNum];
		ambientCurrent->play();

		ambientSampleNum++;
		if (ambientSampleNum>=ambient.size())ambientSampleNum = 0;
	}
}