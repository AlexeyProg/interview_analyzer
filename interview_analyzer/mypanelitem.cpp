#include "mypanelitem.h"

MyPanelItem::MyPanelItem(wxWindow* parent, Company* item) : wxPanel(parent, wxID_ANY, wxDefaultPosition,
	wxSize(800,100))
{

	
	wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);

	// need to create first row of table with labels like company name , status, grade for example and then 
	// we will create theese mypanels ...
	wxTextCtrl* name = new wxTextCtrl(this, wxID_ANY, "name here", wxDefaultPosition,wxSize(200,-1));

	wxArrayString status_vec;
	status_vec.push_back("HR");
	status_vec.push_back("Tech");
	status_vec.push_back("Failed");
	status_vec.push_back("Successfull");

	wxArrayString grade_vec;
	grade_vec.push_back("2");
	grade_vec.push_back("3");
	grade_vec.push_back("4");
	grade_vec.push_back("5");


	sizer->Add(name, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);


	wxChoice* status = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, status_vec);
	sizer->Add(status, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxChoice* grade = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, grade_vec);
	sizer->Add(grade, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	wxTextCtrl* comment = new wxTextCtrl(this, wxID_ANY,"comment here", wxDefaultPosition, wxSize(300,50));
	sizer->Add(comment, 0, wxEXPAND | wxALL, 5);

	SetSizer(sizer);
}

void MyPanelItem::generate()
{

}
