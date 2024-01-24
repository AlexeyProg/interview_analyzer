#pragma once
#include "wx/frame.h"
#include "wx/wx.h"
#include <iostream>
#include "wx/scrolwin.h"


using namespace std;
class MainFrame :
    public wxFrame
{
public:
    MainFrame(const string &title);
    //wxPanel* panel;
    wxScrolledWindow* panel;

    wxBoxSizer* v_sizer;
    wxBoxSizer* scrolled_panel_sizer;
private:
    void addSlot(wxCommandEvent &event);
};

