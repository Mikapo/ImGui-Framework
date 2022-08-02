#include "Dummy.h"

void Gui::Dummy::draw_element()
{
    ImGui::Dummy(m_size);
}

void Gui::Dummy::update()
{
}

void Gui::Dummy::set_size(ImVec2 new_size) noexcept
{
    m_size = new_size;
}
