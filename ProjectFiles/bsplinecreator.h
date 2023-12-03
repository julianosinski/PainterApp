#ifndef BSPLINECREATOR_H
#define BSPLINECREATOR_H

#include "curvecreator.h"
#include "bspline.h"

class BSplineCreator:public CurveCreator
{
public:
    BSplineCreator(QRgb colorRGB,QImage *image);
    void drawCurves() override;
    QRgb curveColor;
};

#endif // BSPLINECREATOR_H
