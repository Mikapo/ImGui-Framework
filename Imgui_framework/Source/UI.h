#pragma once

#include "Elements/Parents/Window.h"
#include <mutex>
#include <vector>

namespace Gui
{
    class Ui
    {
    public:
        void draw();
        void update();
        std::shared_ptr<Window> create_window(std::string_view name);

    private:
        std::vector<std::shared_ptr<Window>> m_windows;
        std::mutex m_draw_mutex;
        std::mutex m_update_mutex;
    };
} // namespace Gui
