#include "toolpushbutton.h"

ToolPushButton::ToolPushButton()
{
    //this->setStyleSheet("color:white; border-style: solid; border-width:1px; border-color:blue");
    this->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    this->setContentsMargins(0,0,0,0);
    this->resize(48,48);
}

ToolPushButton::ToolPushButton(QString text):ToolPushButton(){
    //this->setStyleSheet("font-color: white;");
   this->setText(text);
}

ToolPushButton::ToolPushButton(QIcon icon):ToolPushButton(){
    this->setIcon(icon);
}

ToolPushButton::ToolPushButton(QIcon icon, QString text):ToolPushButton(){
    this->setIcon(icon);
    this->setText(text);
}
