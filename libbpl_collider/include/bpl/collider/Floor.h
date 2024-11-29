//
// Created by bradr on 11/4/24.
//

#ifndef FLOOR_H
#define FLOOR_H
#include "../graphics/Sprite.h"

namespace collider {

    class Floor {
    public:
        //
        //  RETURNS
        //      INT_MAX if there is nothing to the left.
        //      0 if we are next to or colliding with what is to the left.
        //
        static int DistanceToWallLeft(const SDL_Rect& floor, const SDL_Rect& objCollider);
        static int DistanceToWallLeft(const graphics::SpritePtr floor, const SDL_Rect& objCollider);
        static int DistanceToWallLeft(const graphics::SpriteList &floorSprites, const SDL_Rect& objCollider);

        //
        //  RETURNS
        //      INT_MAX if there is nothing to the right.
        //      0 if we are next to or colliding with what is to the right.
        //
        static int DistanceToWallRight(const SDL_Rect& floor, const SDL_Rect& objCollider);
        static int DistanceToWallRight(const graphics::SpritePtr floor, const SDL_Rect& objCollider);
        static int DistanceToWallRight(const graphics::SpriteList &floorSprites, const SDL_Rect& objCollider);

        //
        //  RETURNS
        //      INT_MAX if there is nothing below.
        //      0 if we are next to or colliding with what is below.
        //
        static int DistanceToFloorBelow(const SDL_Rect& floor, const SDL_Rect& objCollider);
        static int DistanceToFloorBelow(const graphics::SpritePtr floor, const SDL_Rect& objCollider);
        static int DistanceToFloorBelow(const graphics::SpriteList& floorSprites, const SDL_Rect& objCollider);
    }; // class Floor

} // collider

#endif //FLOOR_H
