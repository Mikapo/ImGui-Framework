#include "Examble_ui.h"
#include "Elements/Input_text.h"
#include "Elements/Text.h"
#include <iostream>

void Examble_ui::start()
{
    m_application.set_render_callback(this, &Examble_ui::render);
    m_application.set_on_window_open_callback(this, &Examble_ui::on_window_open);
    m_application.start();
}

void Examble_ui::on_window_open()
{
    Gui::initialize(m_application.get_window());
    auto window = m_ui.create_window("Best window");

    auto text = window->add_children<Gui::Text>("Text");
    text->set_text("Hello World!");
    text->set_text_type(Gui::Text_type::colored);
    text->set_color({1.0f, 0.0f, 0.0f, 1.0f});

    auto combo = window->add_children<Gui::Input_text<20>>("My_combo");
    combo->set_on_changed_callback([](const char* value) { std::cout << value << "\n"; });
}

void Examble_ui::render()
{
    m_ui.draw();
    m_ui.update();
}
