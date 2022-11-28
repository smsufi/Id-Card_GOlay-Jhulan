#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

struct extraEnemy
{
    int height;
    int length;
    int image;

    extraEnemy()
    {

    }
    extraEnemy(int h, int l, int img)
    {
        height=h;
        length=l;
        image=img;
    }
};

#endif // ENEMY_H_INCLUDED
