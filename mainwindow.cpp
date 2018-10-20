#include "mainwindow.h"
#include <QDockWidget>
#include <QToolBar>

//toolbar
#include "ToolBar/gridtoolbar.h"
#include "ToolBar/tabbedtoolbar.h"

struct MainWindowData{
    QWidget* m_mainWidget;
    QGridLayout* m_main2x2Grid;
    TabbedToolBar* m_tabbedToolbar;
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    d = new MainWindowData();

    // remove default toolbar from QT applications.
    QList<QToolBar *> allToolBars = this->findChildren<QToolBar *>();
    foreach(QToolBar *tb, allToolBars) {
        // This does not delete the tool bar.
        this->removeToolBar(tb);
    }

    this->setWindowTitle("InstaWorkstation"); // application title.

#ifdef WIDGETS_DEBUG_COLOR
    this->setStyleSheet("background-color: black;"); // application background color.
#endif
    this->setContentsMargins(1,1,1,1);

    d->m_mainWidget = new QWidget(this); // create main widget.
    d->m_mainWidget->setContentsMargins(1,1,1,1);

#ifdef WIDGETS_DEBUG_COLOR
    d->m_mainWidget->setStyleSheet("background-color: orange;");
#endif
    setCentralWidget(d->m_mainWidget); // set central widget.

    setUnifiedTitleAndToolBarOnMac(true);

    d->m_main2x2Grid = new QGridLayout(d->m_mainWidget);
    d->m_main2x2Grid->setSpacing(0);
    d->m_main2x2Grid->setContentsMargins(0,0,0,0);

    d->m_tabbedToolbar = new TabbedToolBar(d->m_mainWidget);
    d->m_main2x2Grid->addWidget(d->m_tabbedToolbar,0,0,Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
//    d->m_main2x2Grid->addWidget(new TabbedToolBar(d->m_mainWidget),0,1,Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
//    d->m_main2x2Grid->addWidget(new TabbedToolBar(d->m_mainWidget),1,0,Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
//    d->m_main2x2Grid->addWidget(new TabbedToolBar(d->m_mainWidget),1,1,Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
}

MainWindow::~MainWindow()
{

}
