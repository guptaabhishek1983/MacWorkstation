#ifndef TABBEDTOOLBAR_H
#define TABBEDTOOLBAR_H

#include <QWidget>
#include <QTabWidget>

class TabbedToolBar : public QTabWidget
{
public:
    TabbedToolBar(QWidget* parent);

private:
    void CreateFavTools();
    void CreateViewingTools();
    void CreateMeasurementTools();
    void CreateWLWWTools();
    void CreateAdvancedTools();
};

#endif // TABBEDTOOLBAR_H
