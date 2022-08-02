#pragma once

#include "Element.h"

#include "ImGui/imgui.h"

namespace Gui
{
    class Dummy : public Element
    {
    public:
        Dummy(std::string_view name) : Element(name)
        {
        }

        void draw_element() override;
        void update() override;

        void set_size(ImVec2 new_size) noexcept;

    private:
        ImVec2 m_size = {0.0f, 0.0f};
    };
} // namespace Gui
