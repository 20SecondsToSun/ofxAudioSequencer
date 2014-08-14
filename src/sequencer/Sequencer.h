#pragma once
#include "ofMain.h"

class Sequencer {

public:
	void loadSound();
	void updateSound();
	void playAmbient();
private:
	std::vector<ofSoundPlayer>  ambient;
	int							ambientSampleNum;
	ofSoundPlayer*				ambientCurrent;
};