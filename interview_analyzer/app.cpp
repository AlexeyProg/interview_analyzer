#include "app.h"
#include "mainframe.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	MainFrame* frame = new MainFrame("Interview Analyzer");
	frame->SetClientSize(1000, 600);
	frame->Center();
	frame->Show();
	return true;
}
