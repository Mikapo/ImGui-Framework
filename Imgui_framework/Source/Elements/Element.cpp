#include "Element.h"

#include "ImGui/imgui.h"

void Gui::Element::draw()
{
    ImGui::PushID(m_id);

    if (m_same_line)
        ImGui::SameLine(m_same_line_offset, m_same_line_spacing);

    draw_element();
    ImGui::PopID();
}

void Gui::Element::set_id(int32_t new_id) noexcept
{
    m_id = new_id;
}

void Gui::Element::set_on_same_line(bool enabled, float offset, float spacing) noexcept
{
    m_same_line = enabled;
    m_same_line_offset = offset;
    m_same_line_spacing = spacing;
}

std::string_view Gui::Element::get_name() const noexcept
{
    return m_name;
}
