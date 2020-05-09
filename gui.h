#ifndef GUI_H
#define GUI_H
#include "service.h"
#include <QWidget>
#include <QListWidget>
#include <QPushButton>
#include <QBoxLayout>
#include <QLabel>
#include <QFormLayout>
#include <QLineEdit>
#include <QDebug>


class GUI : public QWidget
{
    Q_OBJECT

public:
    explicit GUI(Service* service, QWidget *parent = nullptr);
    void initGUI();
    void connect_signals_and_slots();
    void add_recording_button_handler();
    void add_recordings_to_list_widget();
    void update_line_edits();
    int get_current_index();
    ~GUI();

private:
    Service* service;
    QListWidget* recordings_list;
    QLineEdit* title_edit;
    QLineEdit* location_edit;
    QLineEdit* time_of_creation_edit;
    QLineEdit* times_accessed_edit;
    QLineEdit* footage_preview_edit;
    QPushButton* add_button;
    QPushButton* update_button;
    QPushButton* delete_button;
};


#endif
