#ifndef ABOUTUS_H
#define ABOUTUS_H

#include <QWidget>

namespace Ui {
  class AboutUs;
}

class AboutUs : public QWidget
{
  Q_OBJECT
  
public:
  explicit AboutUs(QWidget *parent = 0);
  ~AboutUs();
  
private:
  Ui::AboutUs *ui;
};

#endif // ABOUTUS_H
