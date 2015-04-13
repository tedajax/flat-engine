#include <SDL2/SDL.h>

const int cWindowWidth = 640;
const int cWindowHeight = 480;

int main(int argc, char* argv[])
{
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_CreateWindowAndRenderer(cWindowWidth, cWindowHeight, SDL_WINDOW_SHOWN, &window, &renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_Rect r = { 0, 0, cWindowWidth, cWindowHeight };
    SDL_RenderFillRect(renderer, &r);
    SDL_RenderPresent(renderer);

    bool shouldQuit = false;

    while (!shouldQuit)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_QUIT:
                    shouldQuit = true;
                    break;

                case SDL_KEYDOWN:
                    if (event.key.keysym.scancode == SDL_SCANCODE_ESCAPE)
                    {
                        shouldQuit = true;
                        break;
                    }
            }
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();

    return 0;
}