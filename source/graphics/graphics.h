#ifndef GRAPHICS_H_INCLUDED
#define GRAPHICS_H_INCLUDED

#include "../core/game_types.h"
#include "../handlers/event_handler.h"
#include "../handlers/message_handler.h"
#include "../math/matrix.h"

#include <stdlib.h>

void InitGraphics();

void InitSDL2();
void InitOpenGL();


void RenderFrame();


int LoadProgram(GLuint* ID, char* frag, char* vert);


// Prepare all stuff

#endif // GRAPHICS_H_INCLUDED
