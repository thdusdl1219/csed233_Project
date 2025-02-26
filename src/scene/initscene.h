#ifndef INITSCENE_H
#define INITSCENE_H

#include <QObject>
#include "scene.h"
#include "../qneed.h"

class PlayButton;
class CreatorButton;
class InitScene : public Scene
{
    Q_OBJECT
public:
    InitScene(QObject* parent = 0);
    void setupInit();
    ~InitScene();
private:
};

class PlayButton : public Qneed
{
public:
    PlayButton(QGraphicsScene*, MainWindow *);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event);
};

class CreatorButton : public Qneed
{
public:
    CreatorButton(QGraphicsScene*, MainWindow *);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event);
};


#endif // INITSCENE_H
