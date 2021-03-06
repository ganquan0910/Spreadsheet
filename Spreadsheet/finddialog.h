#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog : public QDialog
{
    Q_OBJECT

public:
    FindDialog(QWidget *parent = 0);
    ~FindDialog();

private slots:
    void findClicked();
    void enableFindButton(const QString &text);
signals:
    //void findNext(const QString &str,Qt::CaseSensitive cs);
    //void findPrevious(const QString &str,Qt::CaseSensitive cs);
    //error:'Qt::CaseSensitive' is not a type
    //解决方法：将其换成bool类型，因为Qt::casesensitive其值是1或0（Help）
    void findNext(const QString &str,bool cs);
    void findPrevious(const QString &str,bool cs);
private:
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QPushButton *findButton;
    QPushButton *closeButton;

};

#endif // FINDDIALOG_H
