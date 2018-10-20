#include "viewingtoolsbar.h"
#include <QGridLayout>

#include "toolpushbutton.h"
#include "toolbuttonscollection.h"

ViewingToolsBar::ViewingToolsBar(QWidget *parent) : GridToolBar(parent)
{
    this->setParent(parent);
    this->CreateTools();
}


void ViewingToolsBar::CreateTools(){
    auto layout = this->GetHBoxLayoutPtr();

    ToolButtonsCollection* btnColl = ToolButtonsCollection::GetHandle();
    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::SeriesTiling);
        layout->addWidget(btn);
    }
    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::ImageTiling);
        layout->addWidget(btn);
    }
    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::WLWW);
        layout->addWidget(btn);
    }
    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::Stacking);
        layout->addWidget(btn);
    }
    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::Zoom);
        layout->addWidget(btn);
    }
    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::Pan);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::FitToScreen);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::OriginalSize);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::RotateLeft);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::RotateRight);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::FlipHorizontal);
        layout->addWidget(btn);
    }

    {
        ToolPushButton* btn = btnColl->GetToolButton(SelectedAction::FlipVertical);
        layout->addWidget(btn);
    }
}
