#ifndef TOOLBUTTONSCOLLECTION_H
#define TOOLBUTTONSCOLLECTION_H

#include <QMap>
#include <QPushButton>

#include "toolactions.h"
#include "toolpushbutton.h"

class ToolButtonsCollection
{

public:
    static ToolButtonsCollection* GetHandle();
    ToolPushButton* GetToolButton(const SelectedAction action);

private:
    static ToolButtonsCollection* m_ptr;
    ToolButtonsCollection();
    QMap<SelectedAction, ToolPushButton*> m_toolbuttons;
};

#endif // TOOLBUTTONSCOLLECTION_H
