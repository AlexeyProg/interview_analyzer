#pragma once
#include "wx/frame.h"
#include "wx/wx.h"
#include <iostream>

using namespace std;
class MainFrame :
    public wxFrame
{
public:
    MainFrame(const string &title);
    wxPanel* panel;
    wxBoxSizer* v_sizer;
private:
    void addSlot(wxCommandEvent &event);
};

