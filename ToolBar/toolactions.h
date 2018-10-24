#ifndef TOOLACTIONS_H
#define TOOLACTIONS_H

#include <QString>

enum SelectedAction{
    None = 0,
    // Viewing tools
    SeriesTiling,
    ImageTiling,
    WLWW,
    Stacking,
    GlobalStacking,
    Zoom,
    Pan,
    FitToScreen,
    OriginalSize,
    RotateRight,
    RotateLeft,
    FlipVertical,
    FlipHorizontal,
    Magnifier,
    InvertColor,
    OverlayInformation,

    // Measurement
    Arrow,
    Angle,
    Distance,
    PixelIntesity,
    Text,
    CobbAngle,
    Rectangle,
    Ellipse,
    Circle,
    FreeHand,
    CardioThoraciRatio,
    Eraser,

    // Advanced
    ThreeDCursor,
    SpineLabelling,
    MPR,
};

static struct ToolActions{
    SelectedAction action;
    QString desc;
    QString iconURI;
    QString selectedIconURI;
} tool_actions_table[]={
{None,"No action","",""},
{SeriesTiling,
    "Series layout",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/panel.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/panel.png"},
{ImageTiling, "Image layout",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/panel.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/panel.png"},
{WLWW,"Window level/width",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/wlww.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/wlww.png"},
{Stacking,"Stack",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/stack.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/stack.png"},
{GlobalStacking,"Stack through all serries(s)",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/stack.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/stack.png"},
{Zoom,"Zoom in/out",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/zoom.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/zoom.png"},
{Pan,"Panning",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/move.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/move.png"},
{FitToScreen,"Resize image to fit screen",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/zoompage1.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/zoompage1.png"},
{OriginalSize,"Resize image to original size",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/zoomreset1_1.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/zoomreset1_1.png"},
{RotateRight,"Rotate clockwise, 90 degress",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/rotateclock.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/rotateclock.png"},
{RotateLeft,"Rotate anit-clockwise, 90 degress",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/rotateanti.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/rotateanti.png"},
{FlipVertical,"Flip vertically along Y-Axis",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/flipverticle.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/flipverticle.png"},
{FlipHorizontal,"Flip horizontally along X-Axis",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/fliphor.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/fliphor.png"},
{Magnifier, "Magnifier",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/magnify.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/magnify.png"},
{InvertColor, "Invert color",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/invert.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/invert.png"},
{OverlayInformation,"Hide/Display Image Overlay Information",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/imageoverlay.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/imageoverlay.png"},
{Arrow,"Pointer",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/arrow.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/arrow.png"},
{Angle,"Measure Angle",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/angle.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/angle.png"},
{Distance,"Measure Distance",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/scale.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/scale.png"},
{PixelIntesity,"Measure Hounsfield unit",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/pixel.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/pixel.png"},
{Text, "Add text",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/text.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/text.png"},
{CobbAngle, "Measure Cobb angle",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/cobbangle.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/cobbangle.png"},
{Ellipse, "Measure Ellipse area",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/ellipse.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/ellipse.png"},
{Circle, "Measure Circle area",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/circle.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/circle.png"},
{Rectangle, "Measure Rectangle area",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/rectangle.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/rectangle.png"},

{FreeHand, "Measure Ploygon",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/freehand.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/freehand.png"},
{CardioThoraciRatio,"",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/ctr.jpg",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/ctr.png"},
{Eraser,"",
    ":/toolbar/Resources/Images/2DToolBar/32X32/blue/erase.png",
    ":/toolbar/Resources/Images/2DToolBar/32X32/orange/erase.png"}
};

static int n_tool_actions_table = sizeof(tool_actions_table) / sizeof(tool_actions_table[0]);

static inline ToolActions GetToolsActionData(SelectedAction action){
    for(int i=0;i<n_tool_actions_table;i++){
        if(tool_actions_table[i].action == action){
            return tool_actions_table[i];
        }
    }
    return GetToolsActionData(SelectedAction::None);
}

#endif // TOOLACTIONS_H
