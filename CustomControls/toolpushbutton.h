#ifndef TOOLPUSHBUTTON_H
#define TOOLPUSHBUTTON_H
#include <QPushButton>

class ToolPushButton : public QPushButton
{
public:
    ToolPushButton(QString text);
    ToolPushButton(QIcon icon);
    ToolPushButton(QIcon icon, QString text);

protected:
    ToolPushButton();
};

#endif // TOOLPUSHBUTTON_H
