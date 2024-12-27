#include "raylib.h"
#include "main.h"
#include "iostream"

using namespace std;

const int screenWidth = 1280;
const int screenHeight = 800;
const string gameTitle = "The pong Game";

const float gameTargetFps = 60.0f;

int main(void)
{
	cout << "Starting The Game" << endl;//this message will be displayed in terminal

	InitWindow(screenWidth, screenHeight, gameTitle.c_str());//initialize the window
	SetTargetFPS(gameTargetFps);//set the frame rate

	while (WindowShouldClose() == false)//loop until the window is closed and inside of this while loop we will put our game logic
	{
		BeginDrawing();//begin drawing



		EndDrawing();//end drawing
	}

	CloseWindow();//close the window	
	return 0;
}