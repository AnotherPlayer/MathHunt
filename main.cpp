/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jorge
 *
 * Created on October 5, 2020, 11:45 AM
 */


/*
 * 
 */

#include <iostream>

#include "RenderWindow.h"
RenderWindow window;
SDL_Texture* debugTexture;
bool gameRunning = true;

bool init(){
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
        std::cout << "Failed SDL2 Init, "<< SDL_GetError() << std::endl;
        return false;
    }
        
    if(!IMG_Init(IMG_INIT_PNG)){
        std::cout << "SDL2Image failed init "<< SDL_GetError() << std::endl;
        return false;
    }
    
    SDL_ShowCursor(SDL_DISABLE); // adios cursor.
    window.crear("MathHunt - C++ Engine Test", 1280,720);
    debugTexture = window.cargarTextura("images/debug.png");
    return true;
}

bool loadingPass = init();
Entity debugEntity(Vector2f((1280/2)-64,(720/2)-64),debugTexture,64,64);
void gameLoop(){
    SDL_Event event;
    while(SDL_PollEvent(&event)){
        switch(event.type){
            case SDL_QUIT:
                gameRunning = false;
                break;
            // aqui van los eventos.
        }
    }
    
    window.limpiarPantalla();
    
    window.renderAnimated(debugEntity,8,100,true);
    window.display();
}


int main(int argc, char** argv) {
    // Main File
    while(gameRunning)
    {
        gameLoop();
        SDL_Delay(16);
    }
    window.limpiar();
    SDL_Quit();
    return 0;
}

