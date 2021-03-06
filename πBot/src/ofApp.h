#pragma once

#include "ofMain.h"
#include "Chat.hpp"
#include "Chatbot.hpp"
#include "InputTextField.hpp"

using namespace std;

class ofApp : public ofBaseApp{

public:
	void setup();
	void update();
	void draw();
	void exit();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseScrolled(int x, int y, float scrollX, float scrollY);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	
	// Custom methods
	void responseMessage(Message &msg);

	// Screen properties
	int w;
	int h;
	
	// GUI
	Chat chat;
	InputTextField input;
	
	// Entities
	Chatbot piBot;
};
