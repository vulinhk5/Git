SDL_Init()
 #include <iostream>
 #include <SDL.h>
 using namespace std;
 sử dụng thư
viện SDL2
 int main(int argc, char* argv[])
 {
 return 0;
 }
 const int SCREEN_WIDTH = 800;
 const int SCREEN_HEIGHT = 600;
 const string WINDOW_TITLE = "An Implementation of Code.org Painter";
 void initSDL(SDL_Window* &window, SDL_Renderer* &renderer)
