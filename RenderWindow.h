/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RenderWindow.h
 * Author: Jorge
 *
 * Created on October 5, 2020, 12:11 PM
 */
#pragma once
#ifndef RENDERWINDOW_H
#define RENDERWINDOW_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class RenderWindow{
public:
    RenderWindow();
    void crear(const char* titulo, int width, int height);
    void limpiarPantalla();
    void limpiar();
    void render();
    void renderColor();
    void display();
private:
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
};

#endif /* RENDERWINDOW_H */

