#pragma once

#include "ImGui/imgui.h"
#include "Parent.h"

namespace Gui
{
    class Window : public Parent
    {
    public:
        Window(std::string_view name) : Parent(name)
        {
        }

        void draw_element() override;
        void update() override;

        void add_flag(ImGuiWindowFlags_ flag) noexcept;
        [[nodiscard]] bool is_open() const noexcept;

    private:
        bool m_is_open = true;
        ImGuiWindowFlags m_flags = ImGuiWindowFlags_::ImGuiWindowFlags_None;

        ADD_GUI_EVENT(on_closed, bool, true)
    };
} // namespace Gui
