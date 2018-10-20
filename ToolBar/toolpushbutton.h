#ifndef TOOLPUSHBUTTON_H
#define TOOLPUSHBUTTON_H
#include <QPushButton>
#include "toolactions.h"

class ToolPushButton : public QPushButton
{
public:
    ToolPushButton(SelectedAction action, QString text);
    ToolPushButton(SelectedAction action, QIcon* icon, QIcon* selectedIcon,QString toolTipText);

protected:
    ToolPushButton(SelectedAction action);

private:
    SelectedAction m_action;
    QIcon* m_selectedIcon;
    QIcon* m_icon;
};

#endif // TOOLPUSHBUTTON_H
