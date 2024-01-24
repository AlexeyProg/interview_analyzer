#include "mainframe.h"
#include "mypanelitem.h"

MainFrame::MainFrame(const string& title) : wxFrame(nullptr, wxID_ANY, title)
{
    panel = new wxScrolledWindow(this, wxID_ANY);
    panel->SetScrollRate(10, 10);

    wxPanel* hat_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize);

    wxStaticText* fio = new wxStaticText(hat_panel, wxID_ANY, "Sokolov A.I. Developer C++", wxPoint(50,10), wxSize(250,50));
    fio->SetFont(fio->GetFont().Scale(1.5));
    fio->SetForegroundColour(wxColor(56,182,169));

    wxButton* add = new wxButton(hat_panel, wxID_ANY, "add company", wxPoint(200, 20), wxSize(100, 50));
    add->SetFont(add->GetFont().Scale(1.5));
    add->SetInitialSize(wxSize(350,50));


    add->Bind(wxEVT_BUTTON, &MainFrame::addSlot, this);

    wxBoxSizer* hat_sizer = new wxBoxSizer(wxHORIZONTAL);
    hat_sizer->Add(fio, 0, wxEXPAND | wxALL, 5);
    hat_sizer->Add(add, 1, wxEXPAND | wxALL, 5);

    hat_panel->SetSizer(hat_sizer);


    v_sizer = new wxBoxSizer(wxVERTICAL);
    //v_sizer->Add(fio, 0, wxEXPAND | wxALL, 5);
    //v_sizer->Add(add, 1, wxEXPAND | wxALL, 5);

    v_sizer->Add(hat_panel, 0, wxEXPAND | wxALL, 5);
    scrolled_panel_sizer = new wxBoxSizer(wxVERTICAL);
    v_sizer->Add(panel, 1, wxEXPAND | wxALL, 5);
    panel->SetSizer(scrolled_panel_sizer);

    Company* new_comp = new Company;
    MyPanelItem* item = new MyPanelItem(panel, new_comp);

    scrolled_panel_sizer->Add(item, 0, wxEXPAND | wxALL, 5);

    SetSizer(v_sizer);
    Layout();
}

void MainFrame::addSlot(wxCommandEvent& event)
{
    Company* new_comp = new Company;
    MyPanelItem* second_item = new MyPanelItem(panel, new_comp);
    scrolled_panel_sizer->Add(second_item, 0, wxEXPAND | wxALL, 5);

    // Вызываем метод Scroll, чтобы прокрутить список вниз
    int scrollIncrement = second_item->GetSize().GetHeight(); // Получаем высоту добавленного элемента
    panel->Scroll(0, scrollIncrement); // Прокручиваем на высоту элемента
    Layout();
}
