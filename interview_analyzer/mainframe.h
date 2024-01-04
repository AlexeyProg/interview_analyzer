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

private:
    void addSlot(wxCommandEvent &event);
};

