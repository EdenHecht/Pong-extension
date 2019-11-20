#pragma once
#include "Board.h"
#include "Ball.h"


class UserBoard : public Board {
	const char* kbChars;

public:
	UserBoard(const Point& p1,const Point& p2, const char* keys) : Board(p1,p2),kbChars(keys) {}
	void handleKey(char c, Ball& ball);
	const char* getKbChars() {
		return kbChars;
	}






};