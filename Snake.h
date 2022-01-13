#pragma once

#include <QWidget>
#include <QKeyEvent>

class Snake : public QWidget {

  public:
      Snake(QWidget *parent = 0);

  protected:
      void paintEvent(QPaintEvent *);
      void timerEvent(QTimerEvent *);
      void keyPressEvent(QKeyEvent *);
      void mousePressEvent(QMouseEvent *);

  private:
      QImage dot;
      QImage head;
      QImage apple;

      int B_WIDTH = 1000;
      int B_HEIGHT = 750;
      int RAND_POS_X = 39;
      int RAND_POS_Y = 29;
      int RESULT = 0;
      static const int DOT_SIZE = 25;
      static const int ALL_DOTS = 900;
      static const int DELAY = 140;

      int timerId;
      int dots;
      int apple_x;
      int apple_y;

      int x[ALL_DOTS];
      int y[ALL_DOTS];

      bool leftDirection;
      bool rightDirection;
      bool upDirection;
      bool downDirection;
      bool inGame;

      void loadImages();
      void initGame();
      void locateApple();
      void checkApple();
      void checkCollision();
      void move();
      void doDrawing();
      void gameOver(QPainter &);
};
