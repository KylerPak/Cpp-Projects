#ifndef FOOD_H
#define FOOD_H

#include <Windows.h>
#include <cstdlib>

#define WIDTH 75
#define HEIGHT 30

class Food
{
  private:
    COORD pos;

  public:
    void gen_food();

    COORD get_pos();
};

#endif

