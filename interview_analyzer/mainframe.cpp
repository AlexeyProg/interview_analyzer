#include "mainframe.h"
#include "mypanelitem.h"


MainFrame::MainFrame(const string& title) : wxFrame(nullptr, wxID_ANY, title)
{
	panel = new wxPanel(this);
	//wxStaticText* user_info = new wxStaticText(panel, wxID_ANY, "Alex Sokolov (C++ Developer)", wxPoint(30,20), wxSize(200,40));
	//user_info->SetFont(user_info->GetFont().Scale(1.5));
	
	wxButton* add = new wxButton(this, wxID_ANY, "add company", wxPoint(840, 20), wxSize(150, 50));
	add->SetFont(add->GetFont().Scale(1.5));

	add->Bind(wxEVT_BUTTON, &MainFrame::addSlot, this);
	
	v_sizer = new wxBoxSizer(wxVERTICAL);
	v_sizer->Add(add, 0, wxEXPAND | wxALL, 5);

	Company* new_comp = new Company;
	MyPanelItem* item = new MyPanelItem(this, new_comp);

	v_sizer->Add(item, 0, wxEXPAND | wxALL, 5);


	SetSizer(v_sizer);
	Layout();

}

void MainFrame::addSlot(wxCommandEvent& event)
{
	//wxLogMessage("button was clicked");
	Company* new_comp = new Company;

	MyPanelItem* second_item = new MyPanelItem(this, new_comp);

	v_sizer->Add(second_item, 0, wxEXPAND | wxALL, 5);
	Layout();
	
}