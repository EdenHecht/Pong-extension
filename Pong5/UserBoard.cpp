#include "UserBoard.h"



//Taken from Amir's class
void UserBoard::handleKey(char c, Ball& ball)
{
	if (c == kbChars[IsUp] && getUpY() > 4) {
		down.erase();
		down.move(0, -1);
		up.move(0, -1);
		setColor(COLOR::GRAY_BACKGROUND);
		up.draw();
	}
	else if (c == kbChars[IsDown] && getDownY() < 24) {
		up.erase();
		up.move(0, 1);
		down.move(0, 1);
		setColor(COLOR::GRAY_BACKGROUND);
		down.draw();
	}
	else if (c == kbChars[IsBomb]) {
		ball.setFlag(true);
		
	}
}