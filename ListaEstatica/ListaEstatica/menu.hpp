#ifndef _MENU_H
#define _MENU_H

#include <string>
#include <iostream>
#include <windows.h>
#include "gatodomestico.cpp"


#define TAM 50


class Menu {
    private:
        Lista l;
    public:
        Menu();
        void showMenu();
        void add();
        void src();
        void del();
        void ins();
        void show();

    };

#endif //_MENU_H


