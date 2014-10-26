#ifndef SDL_GRAPHICS_H
#define SDL_GRAPHICS_H

#include "create_widgets/domain/_qwidget.h"
#include <QPushButton>
#include <QFileDialog>

class SDL_Graphics : public _QWidget
{
    Q_OBJECT
public:
    explicit SDL_Graphics(QWidget *parent = NULL);

private:
    QLabel          *displayLabel;
    QLabel          *xauthLabel;
    QLineEdit       *display;
    QLineEdit       *xauth;
    QPushButton     *browse;
    QCheckBox       *fullscreen;
    QGridLayout     *commonLayout;

public slots:
    QDomDocument     getDataDocument() const;
    void             setDataDescription(QString&);

private slots:
    void             getPathToXauthority() const;
};

#endif // SDL_GRAPHICS_H
