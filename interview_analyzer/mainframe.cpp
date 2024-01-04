#include "mainframe.h"


MainFrame::MainFrame(const string& title) : wxFrame(nullptr, wxID_ANY, title)
{
	panel = new wxPanel(this);
	wxStaticText* user_info = new wxStaticText(panel, wxID_ANY, "Alex Sokolov (C++ Developer)", wxPoint(30,20), wxSize(200,40));
	user_info->SetFont(user_info->GetFont().Scale(1.5));
	
	wxButton* add = new wxButton(panel, wxID_ANY, "add company", wxPoint(840, 20), wxSize(150, 50));

	add->Bind(wxEVT_BUTTON, &MainFrame::addSlot, this);

	//vector<string>v;
	//v.push_back("a");
	//v.push_back("b");
	//v.push_back("c");
	wxArrayString choice;
	choice.push_back("a");
	choice.push_back("bb");
	choice.push_back("c");

	wxChoice* combobox = new wxChoice(panel, wxID_ANY, wxPoint(50, 100), wxSize(100, -1), choice);
}

void MainFrame::addSlot(wxCommandEvent& event)
{
	wxLogMessage("button was clicked");
	wxStaticText* t = new wxStaticText(panel, wxID_ANY, "TEST ADDED", wxPoint(100,50), wxSize(100,-1));
}