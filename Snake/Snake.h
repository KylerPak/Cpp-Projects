#ifndef SNAKE_H
#define SNAKE_H

#include <windows.h>
#include <vector>

#define WIDTH 75
#define HEIGHT 30

using namespace std;

class Snake
{
private:
  COORD pos;
  int vel;
  char dir;
  int len;
  vector<COORD> body;

public:
  Snake(COORD pos, int vel);

  void grow();
  void move_snake();
  void direction(char dir);

  vector<COORD> get_body();

  bool collided();
  bool eaten(COORD food);

  COORD get_pos();
};

#endif // SNAKE_H
