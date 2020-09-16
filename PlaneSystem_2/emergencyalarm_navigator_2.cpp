#include "emergencyalarm_navigator_2.h"
#include "algorithms.h"
#include "QtWidgets"

bool
PCSOZHSHO_3,
PCSOKSHO_3,
//yellow input
BSS838X5A,
BSS838X5J,
BSS838X5T,
BSS838X5V,
BSS838X5Z,
BSS838X5d,
BSS838X5h,
BSS838X5n,
BSS838X5p,
BSS838X5v,
BSS838X5z,
BSS838X5DD,
BSS838X5HH,
BSS838X7E,
BSS838X7J,
BSS838X7R,
BSS838X7T,

//yellow output
BSS838X6A,
BSS838X6E,
BSS838X6J,
BSS838X6K,
BSS838X6M,
BSS838X6P,
BSS838X6S,
BSS838X6U,
BSS838X6V,
BSS838X6Y,
BSS838X6a,
BSS838X6c,
BSS838X6e,
BSS838X6j,
BSS838X6m,
BSS838X6q,
BSS838X6r,

//red input
BSS838X5E,
BSS838X5N,
BSS838X7L,
BSS838X7N,

//red output
BSS838X6C,
BSS838X6G,
BSS838X6g,
BSS838X6h,
BSS838X6i,
BSS838X6k,
BSS838X6n,
BSS838X6p,

//white input
BSS838X5C,
BSS838X5G,
BSS838X5L,
BSS838X5R,
BSS838X5X,
BSS838X5b,
BSS838X5f,
BSS838X5i,
BSS838X5x,
BSS838X5BB,
BSS838X5FF,
BSS838X5KK,
BSS838X5r,

//white output
BSS838X6B,
BSS838X6D,
BSS838X6F,
BSS838X6H,
BSS838X6L,
BSS838X6N,
BSS838X6R,
BSS838X6T,
BSS838X6Z,
BSS838X6b,
BSS838X6d,
BSS838X6f,
BSS838X6W,

//yellow input clue
PZH838_X5A,
PZH838_X5J,
PZH838_X5T,
PZH838_X5V,
PZH838_X5Z,
PZH838_X5d,
PZH838_X5h,
PZH838_X5n,
PZH838_X5p,
PZH838_X5v,
PZH838_X5z,
PZH838_X5DD,
PZH838_X5HH,
PZH838_X7E,
PZH838_X7J,
PZH838_X7R,
PZH838_X7T,

//yellow block clue
PZH838_X5A_b,
PZH838_X5J_b,
PZH838_X5T_b,
PZH838_X5V_b,
PZH838_X5Z_b,
PZH838_X5d_b,
PZH838_X5h_b,
PZH838_X5n_b,
PZH838_X5p_b,
PZH838_X5v_b,
PZH838_X5z_b,
PZH838_X5DD_b,
PZH838_X5HH_b,
PZH838_X7E_b,
PZH838_X7J_b,
PZH838_X7R_b,
PZH838_X7T_b,

//red input clue
PK838_X5E,
PK838_X5N,
PK838_X5MM,
PK838_X7A,
PK838_X7C,
PK838_X7G,
PK838_X7L,
PK838_X7N,

//red block clue
PK838_X5E_b,
PK838_X5N_b,
PK838_X5MM_b,
PK838_X7A_b,
PK838_X7C_b,
PK838_X7G_b,
PK838_X7L_b,
PK838_X7N_b;




emergencyalarm_navigator_2::emergencyalarm_navigator_2(QWidget* pwgt)
    : QWidget(pwgt)
{
    QFont underlined("Arial", 10, QFont::Bold);
    PCSOZHSHO_3 = 0;
    PCSOKSHO_3 = 0;
    BSS838X5A = 0;
    BSS838X5J = 0;
    BSS838X5T = 0;
    BSS838X5V = 0;
    BSS838X5Z = 0;
    BSS838X5d = 0;
    BSS838X5h = 0;
    BSS838X5n = 0;
    BSS838X5p = 0;
    BSS838X5v = 0;
    BSS838X5z = 0;
    BSS838X5DD = 0;
    BSS838X5HH = 0;
    BSS838X7E = 0;
    BSS838X7J = 0;
    BSS838X7R = 0;
    BSS838X7T = 0;
    BSS838X6A = 0;
    BSS838X6E = 0;
    BSS838X6J = 0;
    BSS838X6K = 0;
    BSS838X6M = 0;
    BSS838X6P = 0;
    BSS838X6S = 0;
    BSS838X6U = 0;
    BSS838X6V = 0;
    BSS838X6Y = 0;
    BSS838X6a = 0;
    BSS838X6c = 0;
    BSS838X6e = 0;
    BSS838X6j = 0;
    BSS838X6m = 0;
    BSS838X6q = 0;
    BSS838X6r = 0;
    BSS838X5E = 0;
    BSS838X5N = 0;
    BSS838X7L = 0;
    BSS838X6C = 0;
    BSS838X6G = 0;
    BSS838X6g = 0;
    BSS838X6h = 0;
    BSS838X6i = 0;
    BSS838X6k = 0;
    BSS838X6n = 0;
    BSS838X6p = 0;
    BSS838X5C = 0;
    BSS838X5G = 0;
    BSS838X5L = 0;
    BSS838X5R = 0;
    BSS838X5X = 0;
    BSS838X5b = 0;
    BSS838X5f = 0;
    BSS838X5i = 0;
    BSS838X5x = 0;
    BSS838X5BB = 0;
    BSS838X5FF = 0;
    BSS838X5KK = 0;
    BSS838X5r = 0;
    BSS838X6B = 0;
    BSS838X6D = 0;
    BSS838X6F = 0;
    BSS838X6H = 0;
    BSS838X6L = 0;
    BSS838X6N = 0;
    BSS838X6R = 0;
    BSS838X6T = 0;
    BSS838X6Z = 0;
    BSS838X6b = 0;
    BSS838X6d = 0;
    BSS838X6f = 0;
    BSS838X6W = 0;
    PZH838_X5A = 0;
    PZH838_X5J = 0;
    PZH838_X5T = 0;
    PZH838_X5V = 0;
    PZH838_X5Z = 0;
    PZH838_X5d = 0;
    PZH838_X5h = 0;
    PZH838_X5n = 0;
    PZH838_X5p = 0;
    PZH838_X5v = 0;
    PZH838_X5z = 0;
    PZH838_X5DD = 0;
    PZH838_X5HH = 0;
    PZH838_X7E = 0;
    PZH838_X7J = 0;
    PZH838_X7R = 0;
    PZH838_X7T = 0;
    PZH838_X5A_b = 0;
    PZH838_X5J_b = 0;
    PZH838_X5T_b = 0;
    PZH838_X5V_b = 0;
    PZH838_X5Z_b = 0;
    PZH838_X5d_b = 0;
    PZH838_X5h_b = 0;
    PZH838_X5n_b = 0;
    PZH838_X5p_b = 0;
    PZH838_X5v_b = 0;
    PZH838_X5z_b = 0;
    PZH838_X5DD_b = 0;
    PZH838_X5HH_b = 0;
    PZH838_X7E_b = 0;
    PZH838_X7J_b = 0;
    PZH838_X7R_b = 0;
    PZH838_X7T_b = 0;
    PK838_X5E = 0;
    PK838_X5N = 0;
    PK838_X5MM = 0;
    PK838_X7A = 0;
    PK838_X7C = 0;
    PK838_X7G = 0;
    PK838_X7L = 0;
    PK838_X7N = 0;
    PK838_X5E_b = 0;
    PK838_X5N_b = 0;
    PK838_X5MM_b = 0;
    PK838_X7A_b = 0;
    PK838_X7C_b = 0;
    PK838_X7G_b = 0;
    PK838_X7L_b = 0;
    PK838_X7N_b = 0;

    PCSOZHSHO_3_label = new QLabel;
    PCSOKSHO_3_label = new QLabel;
    BSS838X5A_label = new QLabel;
    BSS838X5J_label = new QLabel;
    BSS838X5T_label = new QLabel;
    BSS838X5V_label = new QLabel;
    BSS838X5Z_label = new QLabel;
    BSS838X5d_label = new QLabel;
    BSS838X5h_label = new QLabel;
    BSS838X5n_label = new QLabel;
    BSS838X5p_label = new QLabel;
    BSS838X5v_label = new QLabel;
    BSS838X5z_label = new QLabel;
    BSS838X5DD_label = new QLabel;
    BSS838X5HH_label = new QLabel;
    BSS838X7E_label = new QLabel;
    BSS838X7J_label = new QLabel;
    BSS838X7R_label = new QLabel;
    BSS838X7T_label = new QLabel;
    BSS838X6A_label = new QLabel;
    BSS838X6E_label = new QLabel;
    BSS838X6J_label = new QLabel;
    BSS838X6K_label = new QLabel;
    BSS838X6M_label = new QLabel;
    BSS838X6P_label = new QLabel;
    BSS838X6S_label = new QLabel;
    BSS838X6U_label = new QLabel;
    BSS838X6V_label = new QLabel;
    BSS838X6Y_label = new QLabel;
    BSS838X6a_label = new QLabel;
    BSS838X6c_label = new QLabel;
    BSS838X6e_label = new QLabel;
    BSS838X6j_label = new QLabel;
    BSS838X6m_label = new QLabel;
    BSS838X6q_label = new QLabel;
    BSS838X6r_label = new QLabel;
    BSS838X5E_label = new QLabel;
    BSS838X5N_label = new QLabel;
    BSS838X5MM_label = new QLabel;
    BSS838X7A_label = new QLabel;
    BSS838X7C_label = new QLabel;
    BSS838X7G_label = new QLabel;
    BSS838X7L_label = new QLabel;
    BSS838X7N_label = new QLabel;
    BSS838X6C_label = new QLabel;
    BSS838X6G_label = new QLabel;
    BSS838X6g_label = new QLabel;
    BSS838X6h_label = new QLabel;
    BSS838X6i_label = new QLabel;
    BSS838X6k_label = new QLabel;
    BSS838X6n_label = new QLabel;
    BSS838X6p_label = new QLabel;
    BSS838X5C_label = new QLabel;
    BSS838X5G_label = new QLabel;
    BSS838X5L_label = new QLabel;
    BSS838X5R_label = new QLabel;
    BSS838X5X_label = new QLabel;
    BSS838X5b_label = new QLabel;
    BSS838X5f_label = new QLabel;
    BSS838X5i_label = new QLabel;
    BSS838X5x_label = new QLabel;
    BSS838X5BB_label = new QLabel;
    BSS838X5FF_label = new QLabel;
    BSS838X5KK_label = new QLabel;
    BSS838X5r_label = new QLabel;
    BSS838X6B_label = new QLabel;
    BSS838X6D_label = new QLabel;
    BSS838X6F_label = new QLabel;
    BSS838X6H_label = new QLabel;
    BSS838X6L_label = new QLabel;
    BSS838X6N_label = new QLabel;
    BSS838X6R_label = new QLabel;
    BSS838X6T_label = new QLabel;
    BSS838X6Z_label = new QLabel;
    BSS838X6b_label = new QLabel;
    BSS838X6d_label = new QLabel;
    BSS838X6f_label = new QLabel;
    BSS838X6W_label = new QLabel;

    BSS838X5A_on_button = new QPushButton("BSS838X5A", this);
    BSS838X5J_on_button = new QPushButton("BSS838X5J", this);
    BSS838X5T_on_button = new QPushButton("BSS838X5T", this);
    BSS838X5V_on_button = new QPushButton("BSS838X5V", this);
    BSS838X5Z_on_button = new QPushButton("BSS838X5Z", this);
    BSS838X5d_on_button = new QPushButton("BSS838X5d", this);
    BSS838X5h_on_button = new QPushButton("BSS838X5h", this);
    BSS838X5n_on_button = new QPushButton("BSS838X5n", this);
    BSS838X5p_on_button = new QPushButton("BSS838X5p", this);
    BSS838X5v_on_button = new QPushButton("BSS838X5v", this);
    BSS838X5z_on_button = new QPushButton("BSS838X5z", this);
    BSS838X5DD_on_button = new QPushButton("BSS838X5DD", this);
    BSS838X5HH_on_button = new QPushButton("BSS838X5HH", this);
    BSS838X7E_on_button = new QPushButton("BSS838X7E", this);
    BSS838X7J_on_button = new QPushButton("BSS838X7J", this);
    BSS838X7R_on_button = new QPushButton("BSS838X7R", this);
    BSS838X7T_on_button = new QPushButton("BSS838X7T", this);
    BSS838X5E_on_button = new QPushButton("BSS838X5E", this);
    BSS838X5N_on_button = new QPushButton("BSS838X5N", this);
    BSS838X5MM_on_button = new QPushButton("BSS838X5MM", this);
    BSS838X7A_on_button = new QPushButton("BSS838X7A", this);
    BSS838X7C_on_button = new QPushButton("BSS838X7C", this);
    BSS838X7G_on_button = new QPushButton("BSS838X7G", this);
    BSS838X7L_on_button = new QPushButton("BSS838X7L", this);
    BSS838X7N_on_button = new QPushButton("BSS838X7N", this);
    BSS838X5C_on_button = new QPushButton("BSS838X5C", this);
    BSS838X5G_on_button = new QPushButton("BSS838X5G", this);
    BSS838X5L_on_button = new QPushButton("BSS838X5L", this);
    BSS838X5R_on_button = new QPushButton("BSS838X5R", this);
    BSS838X5X_on_button = new QPushButton("BSS838X5X", this);
    BSS838X5b_on_button = new QPushButton("BSS838X5b", this);
    BSS838X5f_on_button = new QPushButton("BSS838X5f", this);
    BSS838X5i_on_button = new QPushButton("BSS838X5i", this);
    BSS838X5x_on_button = new QPushButton("BSS838X5x", this);
    BSS838X5BB_on_button = new QPushButton("BSS838X5BB", this);
    BSS838X5FF_on_button = new QPushButton("BSS838X5FF", this);
    BSS838X5KK_on_button = new QPushButton("BSS838X5KK", this);
    BSS838X5r_on_button = new QPushButton("BSS838X5r", this);

    QObject::connect
(BSS838X5A_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5J_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5T_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5V_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5Z_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5d_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5h_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5n_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5p_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5v_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5z_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5DD_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5HH_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X7E_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X7J_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X7R_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X7T_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5E_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5N_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5MM_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X7A_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X7C_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X7G_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X7L_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X7N_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5C_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5G_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5L_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5R_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5X_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5b_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5f_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5i_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5x_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5BB_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5FF_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5KK_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
    QObject::connect
(BSS838X5r_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_navigator_2_labels = new QVBoxLayout;
    QVBoxLayout *layout_navigator_2_labels_1 = new QVBoxLayout;
    QVBoxLayout *layout_navigator_2_buttons = new QVBoxLayout;
    QHBoxLayout *layout_navigator_2_main = new QHBoxLayout;

    layout_navigator_2_labels->addWidget(PCSOZHSHO_3_label);
    layout_navigator_2_labels->addWidget(PCSOKSHO_3_label);
    layout_navigator_2_labels->addWidget(BSS838X5A_label);
    layout_navigator_2_labels->addWidget(BSS838X5J_label);
    layout_navigator_2_labels->addWidget(BSS838X5T_label);
    layout_navigator_2_labels->addWidget(BSS838X5V_label);
    layout_navigator_2_labels->addWidget(BSS838X5Z_label);
    layout_navigator_2_labels->addWidget(BSS838X5d_label);
    layout_navigator_2_labels->addWidget(BSS838X5h_label);
    layout_navigator_2_labels->addWidget(BSS838X5n_label);
    layout_navigator_2_labels->addWidget(BSS838X5p_label);
    layout_navigator_2_labels->addWidget(BSS838X5v_label);
    layout_navigator_2_labels->addWidget(BSS838X5z_label);
    layout_navigator_2_labels->addWidget(BSS838X5DD_label);
    layout_navigator_2_labels->addWidget(BSS838X5HH_label);
    layout_navigator_2_labels->addWidget(BSS838X7E_label);
    layout_navigator_2_labels->addWidget(BSS838X7J_label);
    layout_navigator_2_labels->addWidget(BSS838X7R_label);
    layout_navigator_2_labels->addWidget(BSS838X7T_label);
    layout_navigator_2_labels->addWidget(BSS838X6A_label);
    layout_navigator_2_labels->addWidget(BSS838X6E_label);
    layout_navigator_2_labels->addWidget(BSS838X6J_label);
    layout_navigator_2_labels->addWidget(BSS838X6K_label);
    layout_navigator_2_labels->addWidget(BSS838X6M_label);
    layout_navigator_2_labels->addWidget(BSS838X6P_label);
    layout_navigator_2_labels->addWidget(BSS838X6S_label);
    layout_navigator_2_labels->addWidget(BSS838X6U_label);
    layout_navigator_2_labels->addWidget(BSS838X6V_label);
    layout_navigator_2_labels->addWidget(BSS838X6Y_label);
    layout_navigator_2_labels->addWidget(BSS838X6a_label);
    layout_navigator_2_labels->addWidget(BSS838X6c_label);
    layout_navigator_2_labels->addWidget(BSS838X6e_label);
    layout_navigator_2_labels->addWidget(BSS838X6j_label);
    layout_navigator_2_labels->addWidget(BSS838X6m_label);
    layout_navigator_2_labels->addWidget(BSS838X6q_label);
    layout_navigator_2_labels->addWidget(BSS838X6r_label);
    layout_navigator_2_labels->addWidget(BSS838X5E_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5N_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5MM_label);
    layout_navigator_2_labels_1->addWidget(BSS838X7A_label);
    layout_navigator_2_labels_1->addWidget(BSS838X7C_label);
    layout_navigator_2_labels_1->addWidget(BSS838X7G_label);
    layout_navigator_2_labels_1->addWidget(BSS838X7L_label);
    layout_navigator_2_labels_1->addWidget(BSS838X7N_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6C_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6G_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6g_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6h_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6i_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6k_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6n_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6p_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5C_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5G_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5L_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5R_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5X_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5b_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5f_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5i_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5x_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5BB_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5FF_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5KK_label);
    layout_navigator_2_labels_1->addWidget(BSS838X5r_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6B_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6D_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6F_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6H_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6L_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6N_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6R_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6T_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6Z_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6b_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6d_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6f_label);
    layout_navigator_2_labels_1->addWidget(BSS838X6W_label);

    layout_navigator_2_buttons->addWidget(BSS838X5A_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5J_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5T_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5V_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5Z_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5d_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5h_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5n_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5p_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5v_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5z_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5DD_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5HH_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X7E_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X7J_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X7R_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X7T_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5E_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5N_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5MM_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X7A_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X7C_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X7G_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X7L_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X7N_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5C_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5G_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5L_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5R_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5X_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5b_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5f_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5i_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5x_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5BB_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5FF_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5KK_on_button);
    layout_navigator_2_buttons->addWidget(BSS838X5r_on_button);


    layout_navigator_2_main->addLayout(layout_navigator_2_labels);
    layout_navigator_2_main->addLayout(layout_navigator_2_labels_1);
    layout_navigator_2_main->addLayout(layout_navigator_2_buttons);
    wgt_navigator_2.setLayout(layout_navigator_2_main);
//    wgt_navigator_2.setFixedWidth(500);
    wgt_navigator_2.setFixedHeight(1400);


}
void emergencyalarm_navigator_2::logic_navigator_2()
{
    if(PRBSS838 == true)
    {
        ///////////////Yellow lights
        //////////////1
       yellow(&BSS838X5A, &BSS838X6A, &PZH838_X5A, &PZH838_X5A_b, &S3_3364);
        //////////////2
        yellow(&BSS838X5J, &BSS838X6E, &PZH838_X5J, &PZH838_X5J_b, &S3_3364);
        //////////////3
        yellow(&BSS838X5T, &BSS838X6J, &PZH838_X5T, &PZH838_X5T_b, &S3_3364);
        //////////////4
        yellow(&BSS838X5V, &BSS838X6K, &PZH838_X5V, &PZH838_X5V_b, &S3_3364);
        //////////////5
        yellow(&BSS838X5Z, &BSS838X6M, &PZH838_X5Z, &PZH838_X5Z_b, &S3_3364);
        //////////////6
        yellow(&BSS838X5d, &BSS838X6P, &PZH838_X5d, &PZH838_X5d_b, &S3_3364);
        //////////////7
        yellow(&BSS838X5h, &BSS838X6S, &PZH838_X5h, &PZH838_X5h_b, &S3_3364);
        //////////////8
        yellow(&BSS838X5n, &BSS838X6U, &PZH838_X5n, &PZH838_X5n_b, &S3_3364);
        //////////////9
        yellow(&BSS838X5p, &BSS838X6V, &PZH838_X5p, &PZH838_X5p_b, &S3_3364);
        //////////////10
        yellow(&BSS838X5v, &BSS838X6Y, &PZH838_X5v, &PZH838_X5v_b, &S3_3364);
        //////////////11
        yellow(&BSS838X5z, &BSS838X6a, &PZH838_X5z, &PZH838_X5z_b, &S3_3364);
        //////////////12
        yellow(&BSS838X5DD, &BSS838X6c, &PZH838_X5DD, &PZH838_X5DD_b, &S3_3364);
        //////////////13
        yellow(&BSS838X5HH, &BSS838X6e, &PZH838_X5HH, &PZH838_X5HH_b, &S3_3364);
        //////////////14
        yellow(&BSS838X7E, &BSS838X6j, &PZH838_X7E, &PZH838_X7E_b, &S3_3364);
        //////////////15
        yellow(&BSS838X7J, &BSS838X6m, &PZH838_X7J, &PZH838_X7J_b, &S3_3364);
        //////////////16
        yellow(&BSS838X7R, &BSS838X6q, &PZH838_X7R, &PZH838_X7R_b, &S3_3364);
        //////////////17
        yellow(&BSS838X7T, &BSS838X6r, &PZH838_X7T, &PZH838_X7T_b, &S3_3364);

        //PCSOZHSHO toggle
        if(  PZH838_X5A == true  ||
            PZH838_X5J == true ||
            PZH838_X5T == true ||
            PZH838_X5V == true ||
            PZH838_X5Z == true ||
            PZH838_X5d == true ||
            PZH838_X5h == true ||
            PZH838_X5n == true ||
            PZH838_X5p == true ||
            PZH838_X5v == true ||
            PZH838_X5z == true ||
            PZH838_X5DD == true ||
            PZH838_X5HH == true ||
            PZH838_X7E == true ||
            PZH838_X7J == true ||
            PZH838_X7R == true ||
            PZH838_X7T == true)
        {

            PCSOZHSHO_3 = true;
        }
        else
        {

            PCSOZHSHO_3 = false;
        }

        ///////////////Red lights
        //////////////1
        yellow(&BSS838X5E, &BSS838X6C, &PK838_X5E, &PK838_X5E_b, &S3_3364);
        //////////////2
        yellow(&BSS838X5N, &BSS838X6G, &PK838_X5N, &PK838_X5N_b, &S3_3364);
        //////////////3
        yellow(&BSS838X5MM, &BSS838X6g, &PK838_X5MM, &PK838_X5MM_b, &S3_3364);
        //////////////4
        yellow(&BSS838X7A, &BSS838X6h, &PK838_X7A, &PK838_X7A_b, &S3_3364);
        //////////////5
        yellow(&BSS838X7C, &BSS838X6i, &PK838_X7C, &PK838_X7C_b, &S3_3364);
        //////////////6
        yellow(&BSS838X7G, &BSS838X6k, &PK838_X7G, &PK838_X7G_b, &S3_3364);
        //////////////7
        yellow(&BSS838X7L, &BSS838X6n, &PK838_X7L, &PK838_X7L_b, &S3_3364);
        //////////////8
        yellow(&BSS838X7N, &BSS838X6p, &PK838_X7N, &PK838_X7N_b, &S3_3364);

        //PCSOZHSHO toggle
        if(
        PK838_X5E == true ||
        PK838_X5N == true ||
        PK838_X5MM == true ||
        PK838_X7A == true ||
        PK838_X7C == true ||
        PK838_X7G == true ||
        PK838_X7L == true ||
        PK838_X7N == true)
        {
            PCSOKSHO_3 = true;
        }
        else
        {
            PCSOKSHO_3 = false;
        }

      //////////////White lights_1
      /// 1
    white(&BSS838X5C, &BSS838X6B);
      /// 2
    white(&BSS838X5C, &BSS838X6B);
      /// 3
    white(&BSS838X5G, &BSS838X6D);
      /// 4
    white(&BSS838X5L, &BSS838X6F);
      /// 5
    white(&BSS838X5R, &BSS838X6H);
      /// 6
    white(&BSS838X5X, &BSS838X6L);
      /// 7
    white(&BSS838X5b, &BSS838X6N);
      /// 8
    white(&BSS838X5f, &BSS838X6R);
      /// 9
    white(&BSS838X5i, &BSS838X6T);
      /// 10
    white(&BSS838X5x, &BSS838X6Z);
      /// 11
    white(&BSS838X5BB, &BSS838X6b);
      /// 12
    white(&BSS838X5FF, &BSS838X6d);
      /// 13
    white(&BSS838X5KK, &BSS838X6f);
      /// 14
    white(&BSS838X5r, &BSS838X6W);

        if(PKLSHO == true)
        {
        PCSOZHSHO = true;
        PCSOKSHO = true;
        BSS838X6A = true;
        BSS838X6E = true;
        BSS838X6J = true;
        BSS838X6K = true;
        BSS838X6M = true;
        BSS838X6P = true;
        BSS838X6S = true;
        BSS838X6U = true;
        BSS838X6V = true;
        BSS838X6Y = true;
        BSS838X6a = true;
        BSS838X6c = true;
        BSS838X6e = true;
        BSS838X6j = true;
        BSS838X6m = true;
        BSS838X6q = true;
        BSS838X6r = true;
        BSS838X6C = true;
        BSS838X6G = true;
        BSS838X6g = true;
        BSS838X6h = true;
        BSS838X6i = true;
        BSS838X6k = true;
        BSS838X6n = true;
        BSS838X6p = true;
        BSS838X6B = true;
        BSS838X6D = true;
        BSS838X6F = true;
        BSS838X6H = true;
        BSS838X6L = true;
        BSS838X6N = true;
        BSS838X6R = true;
        BSS838X6T = true;
        BSS838X6Z = true;
        BSS838X6b = true;
        BSS838X6d = true;
        BSS838X6f = true;
        BSS838X6W = true;
        }

        if(
                PCSOZHSHO_1 == true ||
                PCSOZHSHO_2 == true ||
                PCSOZHSHO_3 == true  )
        {
            PCSOZHSHO = true;
        }
        else
        {
            PCSOZHSHO = false;
        }

        if(
                PCSOKSHO_2 == true ||
                PCSOKSHO_3 == true  )
        {
            PCSOKSHO = true;
        }
        else
        {
            PCSOKSHO = false;
        }

    }
    else
    {
        PCSOZHSHO_3 = 0;
        PCSOKSHO_3 = 0;
        BSS838X6A = 0;
        BSS838X6E = 0;
        BSS838X6J = 0;
        BSS838X6K = 0;
        BSS838X6M = 0;
        BSS838X6P = 0;
        BSS838X6S = 0;
        BSS838X6U = 0;
        BSS838X6V = 0;
        BSS838X6Y = 0;
        BSS838X6a = 0;
        BSS838X6c = 0;
        BSS838X6e = 0;
        BSS838X6j = 0;
        BSS838X6m = 0;
        BSS838X6q = 0;
        BSS838X6r = 0;
        BSS838X6C = 0;
        BSS838X6G = 0;
        BSS838X6g = 0;
        BSS838X6h = 0;
        BSS838X6i = 0;
        BSS838X6k = 0;
        BSS838X6n = 0;
        BSS838X6p = 0;
        BSS838X6B = 0;
        BSS838X6D = 0;
        BSS838X6F = 0;
        BSS838X6H = 0;
        BSS838X6L = 0;
        BSS838X6N = 0;
        BSS838X6R = 0;
        BSS838X6T = 0;
        BSS838X6Z = 0;
        BSS838X6b = 0;
        BSS838X6d = 0;
        BSS838X6f = 0;
        BSS838X6W = 0;
        PZH838_X5A = 0;
        PZH838_X5J = 0;
        PZH838_X5T = 0;
        PZH838_X5V = 0;
        PZH838_X5Z = 0;
        PZH838_X5d = 0;
        PZH838_X5h = 0;
        PZH838_X5n = 0;
        PZH838_X5p = 0;
        PZH838_X5v = 0;
        PZH838_X5z = 0;
        PZH838_X5DD = 0;
        PZH838_X5HH = 0;
        PZH838_X7E = 0;
        PZH838_X7J = 0;
        PZH838_X7R = 0;
        PZH838_X7T = 0;
        PZH838_X5A_b = 0;
        PZH838_X5J_b = 0;
        PZH838_X5T_b = 0;
        PZH838_X5V_b = 0;
        PZH838_X5Z_b = 0;
        PZH838_X5d_b = 0;
        PZH838_X5h_b = 0;
        PZH838_X5n_b = 0;
        PZH838_X5p_b = 0;
        PZH838_X5v_b = 0;
        PZH838_X5z_b = 0;
        PZH838_X5DD_b = 0;
        PZH838_X5HH_b = 0;
        PZH838_X7E_b = 0;
        PZH838_X7J_b = 0;
        PZH838_X7R_b = 0;
        PZH838_X7T_b = 0;
        PK838_X5E = 0;
        PK838_X5N = 0;
        PK838_X5MM = 0;
        PK838_X7A = 0;
        PK838_X7C = 0;
        PK838_X7G = 0;
        PK838_X7L = 0;
        PK838_X7N = 0;
        PK838_X5E_b = 0;
        PK838_X5N_b = 0;
        PK838_X5MM_b = 0;
        PK838_X7A_b = 0;
        PK838_X7C_b = 0;
        PK838_X7G_b = 0;
        PK838_X7L_b = 0;
        PK838_X7N_b = 0;

    }

    //end logic

    //showing values
PCSOZHSHO_3_label->setText
("PCSOZHSHO_3 = " + QString::number(PCSOZHSHO_3));
PCSOKSHO_3_label->setText
("PCSOKSHO_3 = " + QString::number(PCSOKSHO_3));
BSS838X5A_label->setText
("BSS838X5A = " + QString::number(BSS838X5A));
BSS838X5J_label->setText
("BSS838X5J = " + QString::number(BSS838X5J));
BSS838X5T_label->setText
("BSS838X5T = " + QString::number(BSS838X5T));
BSS838X5V_label->setText
("BSS838X5V = " + QString::number(BSS838X5V));
BSS838X5Z_label->setText
("BSS838X5Z = " + QString::number(BSS838X5Z));
BSS838X5d_label->setText
("BSS838X5d = " + QString::number(BSS838X5d));
BSS838X5h_label->setText
("BSS838X5h = " + QString::number(BSS838X5h));
BSS838X5n_label->setText
("BSS838X5n = " + QString::number(BSS838X5n));
BSS838X5p_label->setText
("BSS838X5p = " + QString::number(BSS838X5p));
BSS838X5v_label->setText
("BSS838X5v = " + QString::number(BSS838X5v));
BSS838X5z_label->setText
("BSS838X5z = " + QString::number(BSS838X5z));
BSS838X5DD_label->setText
("BSS838X5DD = " + QString::number(BSS838X5DD));
BSS838X5HH_label->setText
("BSS838X5HH = " + QString::number(BSS838X5HH));
BSS838X7E_label->setText
("BSS838X7E = " + QString::number(BSS838X7E));
BSS838X7J_label->setText
("BSS838X7J = " + QString::number(BSS838X7J));
BSS838X7R_label->setText
("BSS838X7R = " + QString::number(BSS838X7R));
BSS838X7T_label->setText
("BSS838X7T = " + QString::number(BSS838X7T));
BSS838X6A_label->setText
("BSS838X6A = " + QString::number(BSS838X6A));
BSS838X6E_label->setText
("BSS838X6E = " + QString::number(BSS838X6E));
BSS838X6J_label->setText
("BSS838X6J = " + QString::number(BSS838X6J));
BSS838X6K_label->setText
("BSS838X6K = " + QString::number(BSS838X6K));
BSS838X6M_label->setText
("BSS838X6M = " + QString::number(BSS838X6M));
BSS838X6P_label->setText
("BSS838X6P = " + QString::number(BSS838X6P));
BSS838X6S_label->setText
("BSS838X6S = " + QString::number(BSS838X6S));
BSS838X6U_label->setText
("BSS838X6U = " + QString::number(BSS838X6U));
BSS838X6V_label->setText
("BSS838X6V = " + QString::number(BSS838X6V));
BSS838X6Y_label->setText
("BSS838X6Y = " + QString::number(BSS838X6Y));
BSS838X6a_label->setText
("BSS838X6a = " + QString::number(BSS838X6a));
BSS838X6c_label->setText
("BSS838X6c = " + QString::number(BSS838X6c));
BSS838X6e_label->setText
("BSS838X6e = " + QString::number(BSS838X6e));
BSS838X6j_label->setText
("BSS838X6j = " + QString::number(BSS838X6j));
BSS838X6m_label->setText
("BSS838X6m = " + QString::number(BSS838X6m));
BSS838X6q_label->setText
("BSS838X6q = " + QString::number(BSS838X6q));
BSS838X6r_label->setText
("BSS838X6r = " + QString::number(BSS838X6r));
BSS838X5E_label->setText
("BSS838X5E = " + QString::number(BSS838X5E));
BSS838X5N_label->setText
("BSS838X5N = " + QString::number(BSS838X5N));
BSS838X5MM_label->setText
("BSS838X5MM = " + QString::number(BSS838X5MM));
BSS838X7A_label->setText
("BSS838X7A = " + QString::number(BSS838X7A));
BSS838X7C_label->setText
("BSS838X7C = " + QString::number(BSS838X7C));
BSS838X7G_label->setText
("BSS838X7G = " + QString::number(BSS838X7G));
BSS838X7L_label->setText
("BSS838X7L = " + QString::number(BSS838X7L));
BSS838X7N_label->setText
("BSS838X7N = " + QString::number(BSS838X7N));
BSS838X6C_label->setText
("BSS838X6C = " + QString::number(BSS838X6C));
BSS838X6G_label->setText
("BSS838X6G = " + QString::number(BSS838X6G));
BSS838X6g_label->setText
("BSS838X6g = " + QString::number(BSS838X6g));
BSS838X6h_label->setText
("BSS838X6h = " + QString::number(BSS838X6h));
BSS838X6i_label->setText
("BSS838X6i = " + QString::number(BSS838X6i));
BSS838X6k_label->setText
("BSS838X6k = " + QString::number(BSS838X6k));
BSS838X6n_label->setText
("BSS838X6n = " + QString::number(BSS838X6n));
BSS838X6p_label->setText
("BSS838X6p = " + QString::number(BSS838X6p));
BSS838X5C_label->setText
("BSS838X5C = " + QString::number(BSS838X5C));
BSS838X5G_label->setText
("BSS838X5G = " + QString::number(BSS838X5G));
BSS838X5L_label->setText
("BSS838X5L = " + QString::number(BSS838X5L));
BSS838X5R_label->setText
("BSS838X5R = " + QString::number(BSS838X5R));
BSS838X5X_label->setText
("BSS838X5X = " + QString::number(BSS838X5X));
BSS838X5b_label->setText
("BSS838X5b = " + QString::number(BSS838X5b));
BSS838X5f_label->setText
("BSS838X5f = " + QString::number(BSS838X5f));
BSS838X5i_label->setText
("BSS838X5i = " + QString::number(BSS838X5i));
BSS838X5x_label->setText
("BSS838X5x = " + QString::number(BSS838X5x));
BSS838X5BB_label->setText
("BSS838X5BB = " + QString::number(BSS838X5BB));
BSS838X5FF_label->setText
("BSS838X5FF = " + QString::number(BSS838X5FF));
BSS838X5KK_label->setText
("BSS838X5KK = " + QString::number(BSS838X5KK));
BSS838X5r_label->setText
("BSS838X5r = " + QString::number(BSS838X5r));
BSS838X6B_label->setText
("BSS838X6B = " + QString::number(BSS838X6B));
BSS838X6D_label->setText
("BSS838X6D = " + QString::number(BSS838X6D));
BSS838X6F_label->setText
("BSS838X6F = " + QString::number(BSS838X6F));
BSS838X6H_label->setText
("BSS838X6H = " + QString::number(BSS838X6H));
BSS838X6L_label->setText
("BSS838X6L = " + QString::number(BSS838X6L));
BSS838X6N_label->setText
("BSS838X6N = " + QString::number(BSS838X6N));
BSS838X6R_label->setText
("BSS838X6R = " + QString::number(BSS838X6R));
BSS838X6T_label->setText
("BSS838X6T = " + QString::number(BSS838X6T));
BSS838X6Z_label->setText
("BSS838X6Z = " + QString::number(BSS838X6Z));
BSS838X6b_label->setText
("BSS838X6b = " + QString::number(BSS838X6b));
BSS838X6d_label->setText
("BSS838X6d = " + QString::number(BSS838X6d));
BSS838X6f_label->setText
("BSS838X6f = " + QString::number(BSS838X6f));
BSS838X6W_label->setText
("BSS838X6W = " + QString::number(BSS838X6W));



}

void emergencyalarm_navigator_2::yellow(bool* input, bool* output, bool* clue,
            bool* block_clue, bool* button)
{
    if(*input == true)
    {
        *output = true;
        if(*block_clue == true)
        {
            *clue = false;
        }
        else
        {
            *clue = true;
        }
    }
    else
    {
        *output  = false;
        *block_clue = false;
        *clue = false;
    }

    if(*button == true)
    {
        *block_clue = true;
    }
}

void emergencyalarm_navigator_2::white(bool* input, bool* output)
{
    if(*input == true)
    {
       *output = true;
    }
    else
    {
       *output = false;
    }
}
void emergencyalarm_navigator_2::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == BSS838X5A_on_button)
    {
        m_RedButton(BSS838X5A_on_button, &BSS838X5A);
    }
    if(obj == BSS838X5J_on_button)
    {
    m_RedButton(BSS838X5J_on_button, &BSS838X5J);
    }
    if(obj == BSS838X5T_on_button)
    {
    m_RedButton(BSS838X5T_on_button, &BSS838X5T);
    }
    if(obj == BSS838X5V_on_button)
    {
    m_RedButton(BSS838X5V_on_button, &BSS838X5V);
    }
    if(obj == BSS838X5Z_on_button)
    {
    m_RedButton(BSS838X5Z_on_button, &BSS838X5Z);
    }
    if(obj == BSS838X5d_on_button)
    {
    m_RedButton(BSS838X5d_on_button, &BSS838X5d);
    }
    if(obj == BSS838X5h_on_button)
    {
    m_RedButton(BSS838X5h_on_button, &BSS838X5h);
    }
    if(obj == BSS838X5n_on_button)
    {
    m_RedButton(BSS838X5n_on_button, &BSS838X5n);
    }
    if(obj == BSS838X5p_on_button)
    {
    m_RedButton(BSS838X5p_on_button, &BSS838X5p);
    }
    if(obj == BSS838X5v_on_button)
    {
    m_RedButton(BSS838X5v_on_button, &BSS838X5v);
    }
    if(obj == BSS838X5z_on_button)
    {
    m_RedButton(BSS838X5z_on_button, &BSS838X5z);
    }
    if(obj == BSS838X5DD_on_button)
    {
    m_RedButton(BSS838X5DD_on_button, &BSS838X5DD);
    }
    if(obj == BSS838X5HH_on_button)
    {
    m_RedButton(BSS838X5HH_on_button, &BSS838X5HH);
    }
    if(obj == BSS838X7E_on_button)
    {
    m_RedButton(BSS838X7E_on_button, &BSS838X7E);
    }
    if(obj == BSS838X7J_on_button)
    {
    m_RedButton(BSS838X7J_on_button, &BSS838X7J);
    }
    if(obj == BSS838X7R_on_button)
    {
    m_RedButton(BSS838X7R_on_button, &BSS838X7R);
    }
    if(obj == BSS838X7T_on_button)
    {
    m_RedButton(BSS838X7T_on_button, &BSS838X7T);
    }
    if(obj == BSS838X5E_on_button)
    {
    m_RedButton(BSS838X5E_on_button, &BSS838X5E);
    }
    if(obj == BSS838X5N_on_button)
    {
    m_RedButton(BSS838X5N_on_button, &BSS838X5N);
    }
    if(obj == BSS838X5MM_on_button)
    {
    m_RedButton(BSS838X5MM_on_button, &BSS838X5MM);
    }
    if(obj == BSS838X7A_on_button)
    {
    m_RedButton(BSS838X7A_on_button, &BSS838X7A);
    }
    if(obj == BSS838X7C_on_button)
    {
    m_RedButton(BSS838X7C_on_button, &BSS838X7C);
    }
    if(obj == BSS838X7G_on_button)
    {
    m_RedButton(BSS838X7G_on_button, &BSS838X7G);
    }
    if(obj == BSS838X7L_on_button)
    {
    m_RedButton(BSS838X7L_on_button, &BSS838X7L);
    }
    if(obj == BSS838X7N_on_button)
    {
    m_RedButton(BSS838X7N_on_button, &BSS838X7N);
    }
    if(obj == BSS838X5C_on_button)
    {
    m_RedButton(BSS838X5C_on_button, &BSS838X5C);
    }
    if(obj == BSS838X5G_on_button)
    {
    m_RedButton(BSS838X5G_on_button, &BSS838X5G);
    }
    if(obj == BSS838X5L_on_button)
    {
    m_RedButton(BSS838X5L_on_button, &BSS838X5L);
    }
    if(obj == BSS838X5R_on_button)
    {
    m_RedButton(BSS838X5R_on_button, &BSS838X5R);
    }
    if(obj == BSS838X5X_on_button)
    {
    m_RedButton(BSS838X5X_on_button, &BSS838X5X);
    }
    if(obj == BSS838X5b_on_button)
    {
    m_RedButton(BSS838X5b_on_button, &BSS838X5b);
    }
    if(obj == BSS838X5f_on_button)
    {
    m_RedButton(BSS838X5f_on_button, &BSS838X5f);
    }
    if(obj == BSS838X5i_on_button)
    {
    m_RedButton(BSS838X5i_on_button, &BSS838X5i);
    }
    if(obj == BSS838X5x_on_button)
    {
    m_RedButton(BSS838X5x_on_button, &BSS838X5x);
    }
    if(obj == BSS838X5BB_on_button)
    {
    m_RedButton(BSS838X5BB_on_button, &BSS838X5BB);
    }
    if(obj == BSS838X5FF_on_button)
    {
    m_RedButton(BSS838X5FF_on_button, &BSS838X5FF);
    }
    if(obj == BSS838X5KK_on_button)
    {
    m_RedButton(BSS838X5KK_on_button, &BSS838X5KK);
    }
    if(obj == BSS838X5r_on_button)
    {
    m_RedButton(BSS838X5r_on_button, &BSS838X5r);
    }

}
void emergencyalarm_navigator_2::m_RedButton(QPushButton* button, bool* clue)
{
    bool pressed;
    pressed = *clue;
    if(pressed == false)
    {
        *clue = true;
        button->setStyleSheet("background-color: red");
    }
    if(pressed == true)
    {
        *clue = false;
        button->setStyleSheet("");
    }
}


