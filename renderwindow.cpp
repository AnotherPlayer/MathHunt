/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "RenderWindow.h"
#include <iostream>


void RenderWindow::RenderWindow(){
    //
}

void RenderWindow::crear(const char* title, int width, int height){
    window = SDL_CreateWindow(title, SDL_SINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
    
    if(window == NULL)
        std::cout << "No se pudo iniciar la ventana, " << SDL_GetError() << std::endl;
    
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
}

void RenderWindow::limpiarPantalla(){
    SDL_RenderClear(renderer);
}

void RenderWindow::limpiar(){
    SDL_DestroyWindow(window);
}

void render(){

}

void renderColor(){

}

void display(){
    SDL_RenderPresent(renderer);
}