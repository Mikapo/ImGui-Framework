#include "Window.h"

#include "ImGui/imgui.h"

void Gui::Window::draw_element()
{
    if (m_is_open)
    {
        ImGui::Begin(get_name().data(), &m_is_open, m_flags);
        draw_children();
        ImGui::End();
    }
}

void Gui::Window::update()
{
    Parent::update();

    broadcast_on_closed_if_changed(m_is_open, false);
}

void Gui::Window::add_flag(ImGuiWindowFlags_ flag) noexcept
{
    m_flags |= static_cast<ImGuiWindowFlags>(flag);
}

bool Gui::Window::is_open() const noexcept
{
    return m_is_open;
}
