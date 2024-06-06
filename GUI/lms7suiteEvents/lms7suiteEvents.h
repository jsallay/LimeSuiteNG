#ifndef LMS7SUITE_EVENT_IDS_H
#define LMS7SUITE_EVENT_IDS_H

#include <wx/event.h>

wxDECLARE_EVENT(CONTROL_PORT_CONNECTED, wxCommandEvent);
wxDECLARE_EVENT(DATA_PORT_CONNECTED, wxCommandEvent);
wxDECLARE_EVENT(CONTROL_PORT_DISCONNECTED, wxCommandEvent);
wxDECLARE_EVENT(DATA_PORT_DISCONNECTED, wxCommandEvent);
wxDECLARE_EVENT(CGEN_FREQUENCY_CHANGED, wxCommandEvent);
wxDECLARE_EVENT(LOG_MESSAGE, wxCommandEvent);
wxDECLARE_EVENT(READ_ALL_VALUES, wxCommandEvent);
wxDECLARE_EVENT(WRITE_ALL_VALUES, wxCommandEvent);
wxDECLARE_EVENT(LMS_CHANGED, wxCommandEvent);

#endif