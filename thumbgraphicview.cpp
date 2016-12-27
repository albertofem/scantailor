#include <QResizeEvent>
#include "thumbgraphicview.h"


void ThumbGraphicView::resizeEvent(QResizeEvent *event) {
    QSize new_size = QSize(event->size().width(), event->size().width()*3);

    m_ptrThumbSequence->setThumbnailLogicalSize(new_size);

    QGraphicsView::resizeEvent(event);
}

void ThumbGraphicView::mousePressEvent(QMouseEvent *event) {
    QGraphicsView::mousePressEvent(event);
}

void ThumbGraphicView::setThumbSequence(ThumbnailSequence* sequence) {
    m_ptrThumbSequence = sequence;
}
