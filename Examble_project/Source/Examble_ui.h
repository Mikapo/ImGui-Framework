#pragma once

#include "Application.h"
#include "Gui_framwork.h"

class Examble_ui
{
public:
    void start();

private:
    void on_window_open();
    void render();

    Application m_application;
    Gui::Ui m_ui;
};
