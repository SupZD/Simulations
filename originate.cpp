#include "raylib.h"
#include <cmath>
int main()
{
  float t = 0;
  const int width = 1000;
  const int height = 1000;

  InitWindow(width,height,"Interference");

  while (!WindowShouldClose())
  {
    t+=GetFrameTime();

    float radius = 100*t;

    
    BeginDrawing();

    ClearBackground(BLACK);

    for (int i = 0 ; i < 30 ; i++)
     
    { 
      DrawRing({500-200, 500}, radius - i*50 - 2.50, radius - i*50 , 0, 360, 64, WHITE); 
      DrawRing({500+200, 500}, radius - i*50 - 2.50, radius - i*50 , 0, 360, 64, MAROON);
    }

    EndDrawing();

  }

  CloseWindow();

  return 0;


}