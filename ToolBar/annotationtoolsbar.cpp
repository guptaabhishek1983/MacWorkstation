#include "annotationtoolsbar.h"

#include "toolpushbutton.h"
#include "toolbuttonscollection.h"

AnnotationToolsBar::AnnotationToolsBar(QWidget *parent) : GridToolBar(parent)
{
    this->setParent(parent);
    this->CreateTools();
}


void AnnotationToolsBar::CreateTools(){
    auto layout = this->GetHBoxLayoutPtr();
    ToolButtonsCollection* btnColl = ToolButtonsCollection::GetHandle();
    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::Arrow);
        layout->addWidget(btn);
    }
    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::Distance);
        layout->addWidget(btn);
    }
    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::Angle);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::PixelIntesity);
        layout->addWidget(btn);
    }
    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::Text);
        layout->addWidget(btn);
    }
    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::CobbAngle);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::Rectangle);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::Ellipse);
        layout->addWidget(btn);
    }


    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::Circle);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::FreeHand);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::CardioThoraciRatio);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::Eraser);
        layout->addWidget(btn);
    }
}
