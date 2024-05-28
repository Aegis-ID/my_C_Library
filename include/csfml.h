/*
** EPITECH PROJECT, 2024
** useful_funcs
** File description:
** CSFML
*/

#ifndef __MY_CSFML_FUNCS__
    #define __MY_CSFML_FUNCS__
    #include <SFML/OpenGL.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>
    #include <stdlib.h>
    #include <math.h>

enum bool {
    false,
    true,
};

struct animation {
    sfSprite *sprite;
    sfClock *clock;
    const char **frames;
    int currentFrame;
    int size;
    float scale;
};

typedef struct coordinates_s {
    sfVector2f departure;
    sfVector2f destination;
    int speed;
    int delay;
    struct node *next;
} coordinates_t;

sfRenderWindow *init_window(const char *name,
    int width, int height, unsigned int framerate);
sfSprite *set_sprite(const char *filePath);
void set_scale(sfSprite *sprite, float scaleNb);
void set_pos(sfSprite *sprite, int X, int Y);
void set_center(sfSprite *sprite);

void destroy_sprite(sfSprite *sprite);
void replace_texture(sfSprite *sprite, const char *filePath);
sfBool click_sprite(sfRenderWindow *window, sfSprite *sprite, sfEvent event);
void animate(sfRenderWindow *window, struct animation *sprite,
    float ips);

void rand_pos(sfRenderWindow *window,
    sfSprite *sprite);
void move_rand(sfRenderWindow *window, sfSprite *sprite,
    float speed);

sfCircleShape *set_circle(float radius, float thickness);
sfRectangleShape *set_rect(float height, float width);
sfText *display_text(sfRenderWindow *window, const char *fontPath,
    const char *message, int characterSize);

#endif /* !__MY_CSFML_FUNCS__ */
