#ifndef TYPES_H_INCLUDED
#define TYPES_H_INCLUDED




#ifdef __linux__
    #include <SDL2/SDL.h>
    #include <SDL2/SDL_image.h>
#elif _WIN32
    #include <SDL.h>
    #include "../extern/glad.h"

#endif


#include <stdio.h>
#include <stdlib.h>


#define True 1
#define False 0

typedef union
{
    struct {
        float r, g, b;
    };
    struct {
        float x, y, z;
    };
} TPoint3_f;

typedef union
{
    struct {
        int x,y;
    };
    struct {
        int width, height;
    };
} TPoint2_i;

typedef union
{
    struct {
        float x,y;
    };
} TPoint2_f;

typedef struct
{
    SDL_Window* m_Window;
    SDL_GLContext m_Context;
    TPoint2_i m_WindowSize;
} TCore;

typedef struct
{
    TPoint3_f m_BgColor;
} TGameState;

enum States {MAIN_MENU, START_MENU, SETTINGS_MENU, QUIT, TEST_MENU, GAME, GAME_MENU, RESEARCH_TREE, STATES_COUNT};

typedef void (*TDrawState)(void);
typedef void (*TButtonFunc)(void);

typedef struct
{
    int m_StateIndex;
    TDrawState m_StateDraw;

} TState;


typedef struct
{
    int a;
} TMap;

typedef struct
{
    int a;
} TSubTile;

typedef struct
{
    int a;
} TTile;

typedef const Uint8* TKeyboard;



typedef struct
{
    GLuint ID;

    GLuint projectionLocation;
    GLuint viewLocation;
    GLuint modelLocation;
    GLuint vertexLocation;
    GLuint textureCoordsLocation;
    GLuint textureLocation;
} TOpenGLProgram_base;

typedef struct
{
    GLuint ID;

    GLuint projectionLocation;
    GLuint modelLocation;

    GLuint vertexLocation;
    GLuint textureCoordsLocation;
    GLuint textureLocation;
    GLuint textColor;

} TOpenGLProgram_text;


typedef struct
{
    GLuint ID;

    GLuint projectionLocation;
    GLuint viewLocation;
    GLuint modelLocation;

    GLuint vertexLocation;
    GLuint colorLocation;
} TOpenGLProgram_color;


typedef struct
{
    unsigned int m_TextureID;
    TPoint2_i m_Size;
    TPoint2_i m_Bearing;
    unsigned int m_Advance;
} TCharTexture;


typedef struct
{
    TPoint2_f m_Size;
    TPoint2_f m_Pos;
    TPoint3_f m_Color;
    unsigned int m_ID;
    char m_Text[20];

} TSimpleButton;



#endif // TYPES_H_INCLUDED
