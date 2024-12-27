#include "raylib.h"
#include "main.h"
#include "iostream"

using namespace std;

const int screenWidth = 1280;
const int screenHeight = 800;
const string gameTitle = "The pong Game";

const int gameTargetFps = 60;

const float pongBallRadius = 15.0f;

const int pongPaddlesWidth = 25;
const int pongPaddlesHeight = 120;
const int pongPaddlesYPosition = screenHeight / 2 - pongPaddlesHeight / 2;//center the paddle on the screen
const int leftPongPaddleXPosition = 25;
const int rightPongPaddleXPosition = screenWidth - 25 - leftPongPaddleXPosition;

int main(void)
{
	cout << "Starting The Game" << endl;//this message will be displayed in terminal

	InitWindow(screenWidth, screenHeight, gameTitle.c_str());//initialize the window
	SetTargetFPS(gameTargetFps);//set the frame rate

	while (WindowShouldClose() == false)//loop until the window is closed and inside of this while loop we will put our game logic
	{
		BeginDrawing();//begin drawing

		DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);//draw the center line
		DrawCircle(screenWidth / 2, screenHeight / 2, pongBallRadius, WHITE);//draw the pong ball
		DrawRectangle(leftPongPaddleXPosition, pongPaddlesYPosition, pongPaddlesWidth, pongPaddlesHeight, ORANGE);//draw the left paddle
		DrawRectangle(rightPongPaddleXPosition, pongPaddlesYPosition, pongPaddlesWidth, pongPaddlesHeight, ORANGE);//draw the right paddle

		EndDrawing();//end drawing
	}

	CloseWindow();//close the window	
	return 0;
}