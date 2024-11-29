//
// Created by Bradley Remedios on 10/27/24.
//

#ifndef COLLIDER_H
#define COLLIDER_H

#include <list>
#include <SDL2/SDL.h>

namespace collider {

    class Collider {
    public:

        static bool IsColliding(const SDL_Rect& rect1, const SDL_Rect& rect2);
        static bool IsColliding(const std::list<SDL_Rect>& rect1, const std::list<SDL_Rect>& rect2);
        static bool IsColliding(const SDL_Rect& rect1, const std::list<SDL_Rect>& rect2);
        static bool IsInBounds(const SDL_Rect& bounds, const SDL_Rect&);

        static bool InVerticalSpace(const SDL_Rect& rect1, const SDL_Rect& obj);
        static bool InVerticalSpace(const std::list<SDL_Rect>& rect1, const std::list<SDL_Rect>& rect2);

        static bool InHorizontalSpace(const SDL_Rect& rect1, const SDL_Rect& obj);
        static bool InHorizontalSpace(const std::list<SDL_Rect>& rect1, const std::list<SDL_Rect>& rect2);

        static bool OnSurface(const SDL_Rect& surface, const SDL_Rect& obj);
    };

} // collider

#endif //COLLIDER_H
