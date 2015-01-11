#ifndef GAME_H
#define GAME_H

#include <memory>
#include <vector>

class Sprite;
class Graphic;
class Sound;
class Backdrop;
class Cannon;
class Castle;
class SDL_Rect;
class Input;
class CastleBlock;
class Mountain;
class Map;
class King;

class Game
{
public:
    Game();
    ~Game();

    static int kTileSize;
    static int kSmallPlayerWidth;
    static int kSmallPlayerHeight;
    static int kBigPlayerWidth;
    static int kBigPlayerHeight;
    static int kScreenWidth;
    static int kScreenHeight;

private:
    void gameLoop();
    void update(int elapsedTime, Map &map, Input &input, Sound &sound);
    void draw(Graphic& graphics);

    std::unique_ptr<Backdrop> background;
    std::unique_ptr<Cannon> cannon;
    std::unique_ptr<Sound> sounds;
    std::unique_ptr<Map> map;


};

#endif // GAME_H
