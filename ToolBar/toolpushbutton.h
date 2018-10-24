#ifndef TOOLPUSHBUTTON_H
#define TOOLPUSHBUTTON_H


#include <QObject>
#include <QWidget>

#include <QPushButton>
#include "toolactions.h"

struct ToolPushButtonData;

class ToolPushButton : public QPushButton
{
    Q_OBJECT
protected:
    ToolPushButton(SelectedAction action,QWidget *parent = nullptr);

public:
    ToolPushButton(SelectedAction action, QString text);
    ToolPushButton(SelectedAction action, QIcon* icon, QIcon* selectedIcon,QString toolTipText);
    ~ToolPushButton();

signals:
    //add signals here
    void ToolSelectionChanged(SelectedAction rightclick_action,SelectedAction leftclick_action);

private slots:
    //add private slots here
    void ButtonClicked();

public slots:
    //add public slots here

private:
    ToolPushButtonData* d;

};

#endif // TOOLPUSHBUTTON_H
