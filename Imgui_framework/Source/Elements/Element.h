#pragma once

#include "../Add_event_macro.h"
#include <string>
#include <type_traits>

namespace Gui
{
    class Element
    {
    public:
        Element(std::string_view name) : m_name(name)
        {
        }

        void draw();
        void set_id(int32_t new_id) noexcept;
        void set_on_same_line(bool enabled, float offset = 0.0f, float spacing = -0.0f) noexcept;
        virtual void update() = 0;

    protected:
        [[nodiscard]] std::string_view get_name() const noexcept;

    private:
        virtual void draw_element() = 0;

        int32_t m_id = 0;
        bool m_same_line = false;
        float m_same_line_offset = 0.0f, m_same_line_spacing = -1.0f;

        std::string m_name = "";
    };

    template <typename T>
    concept Element_concept = std::is_base_of_v<Element, T>;

} // namespace Gui
