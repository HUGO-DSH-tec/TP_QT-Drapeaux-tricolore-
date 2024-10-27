#ifndef COLOR_H
#define COLOR_H

#include <QWidget>

class Color : public QWidget
{
    Q_OBJECT
public:
    explicit Color(QWidget *parent = nullptr);
    Color(QString couleur);
    ~Color();

signals:
};

#endif // COLOR_H
