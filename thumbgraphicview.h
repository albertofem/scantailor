#include <QGraphicsView>
#include "ThumbnailSequence.h"

#ifndef SCAN_TAILOR_THUMBGRAPHICVIEW_H
#define SCAN_TAILOR_THUMBGRAPHICVIEW_H


class ThumbGraphicView : public QGraphicsView {
public:
    ThumbGraphicView(QWidget *parent) : QGraphicsView(parent) {}
    void setThumbSequence(ThumbnailSequence* sequence);

protected:
    ThumbnailSequence* m_ptrThumbSequence;
    void resizeEvent(QResizeEvent *event);
    void mousePressEvent(QMouseEvent* event);
};

#endif //SCAN_TAILOR_THUMBGRAPHICVIEW_H

