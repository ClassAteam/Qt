#include "emergencyalarm_rightpilot_1.h"
#include "algorithms.h"
#include "QtWidgets"


bool
PCSOZHPL_2,
PCSOKPL_2,

//yellow input
BSS825X5A,
BSS825X5C,
BSS825X5E,
BSS825X5G,
alpha_py_fi_ogrnch,
p_bakov_veliko,
razrezh_veliko,

//yellow output
BSS825X6A,
BSS825X6B,
BSS825X6C,
BSS825X6D,
BSS825X6r,
BSS825X6m,
BSS825X6n,
BSS825X6p,

//red input
BSS825X5L,
BSS825X5f,
BSS825X5N,
BSS825X5h,
BSS825X5R,
BSS825X5j,
BSS825X5T,
BSS825X5n,

//red output
BSS825X6F,
BSS825X6R,
BSS825X6G,
BSS825X6S,
BSS825X6H,
BSS825X6T,
BSS825X6J,
BSS825X6U,
BSS825X6i,
BSS825X6j,
BSS825X6k,

//white input
BSS825X5J,
BSS825X7A,
BSS825X5FF,
BSS825X5HH,
BSS825X5X,
BSS825X5Z,
BSS825X5b,
BSS825X5d,
BSS825X5r,
BSS825X5t,
BSS825X7R,
BSS825X5v,
BSS825X5x,
BSS825X5z,
BSS825X5BB,
BSS825X5DD,
programma,

//white output
BSS825X6E,
BSS825X6K,
BSS825X6d,
BSS825X6e,
BSS825X6L,
BSS825X6M,
BSS825X6N,
BSS825X6P,
BSS825X6W,
BSS825X6X,
BSS825X6q,
BSS825X6Y,
BSS825X6Z,
BSS825X6a,
BSS825X6f,
BSS825X6g,
BSS825_prog,

//yellow input clue
PZH825_X5A,
PZH825_X5C,
PZH825_X5E,
PZH825_X5G,
PZH_alpha_py_fi_ogrnch,
PZH_kren_velik_1,
PZH_p_bakov_veliko,
PZH_razrezh_veliko,

//yellow block clue
PZH825_X5A_b,
PZH825_X5C_b,
PZH825_X5E_b,
PZH825_X5G_b,
PZH_alpha_py_fi_ogrnch_b,
PZH_kren_velik_b_1,
PZH_p_bakov_veliko_b,
PZH_razrezh_veliko_b,

//red input clue
PK825_X5L,
PK825_X5f,
PK825_X5N,
PK825_X5h,
PK825_X5R,
PK825_X5j,
PK825_X5T,
PK825_X5n,
PK_V_velika_PL,
PK_V_mala_PL,
PK_alpha_py_predel_PL,

//red block clue
PK825_X5L_b,
PK825_X5f_b,
PK825_X5N_b,
PK825_X5h_b,
PK825_X5R_b,
PK825_X5j_b,
PK825_X5T_b,
PK825_X5n_b,
PK_V_velika_PL_b,
PK_V_mala_PL_b,
PK_alpha_py_predel_PL_b;

int
X5L_blink,
X5N_blink,
X5R_blink,
X5T_blink,
X7A_blink,
X5BB_blink,
X5DD_blink;

emergencyalarm_rightpilot_1::emergencyalarm_rightpilot_1(QWidget* pwgt)
    : QWidget(pwgt)
{

    PCSOZHPL_2 = 0;
	PCSOKPL_2 = 0;
	PCSOKPL = 0;
	PCSOZHPL = 0;
	BSS825X5A = 0;
	BSS825X5C = 0;
	BSS825X5E = 0;
	BSS825X5G = 0;
	alpha_py_fi_ogrnch = 0;
	p_bakov_veliko = 0;
	razrezh_veliko = 0;
	BSS825X6A = 0;
	BSS825X6B = 0;
	BSS825X6C = 0;
	BSS825X6D = 0;
	BSS825X6r = 0;
	BSS825X6m = 0;
	BSS825X6n = 0;
	BSS825X6p = 0;
	BSS825X5L = 0;
	BSS825X5f = 0;
	BSS825X5N = 0;
	BSS825X5h = 0;
	BSS825X5R = 0;
	BSS825X5j = 0;
	BSS825X5T = 0;
	BSS825X5n = 0;
	BSS825X6F = 0;
	BSS825X6R = 0;
	BSS825X6G = 0;
	BSS825X6S = 0;
	BSS825X6H = 0;
	BSS825X6T = 0;
	BSS825X6J = 0;
	BSS825X6U = 0;
	BSS825X6i = 0;
	BSS825X6j = 0;
	BSS825X6k = 0;
	BSS825X5J = 0;
	BSS825X7A = 0;
	BSS825X5V = 0;
	BSS825X5FF = 0;
	BSS825X5HH = 0;
	BSS825X5X = 0;
	BSS825X5Z = 0;
	BSS825X5b = 0;
	BSS825X5d = 0;
	BSS825X5r = 0;
	BSS825X5t = 0;
	BSS825X7R = 0;
	BSS825X5v = 0;
	BSS825X5x = 0;
	BSS825X5z = 0;
	BSS825X5BB = 0;
	BSS825X5DD = 0;
	BSS825X5KK = 0;
	BSS825X5MM = 0;
	BSS825X6E = 0;
	BSS825X6K = 0;
	BSS825X6d = 0;
	BSS825X6e = 0;
	BSS825X6L = 0;
	BSS825X6M = 0;
	BSS825X6N = 0;
	BSS825X6P = 0;
	BSS825X6W = 0;
	BSS825X6X = 0;
	BSS825X6q = 0;
	BSS825X6Y = 0;
	BSS825X6Z = 0;
	BSS825X6a = 0;
	BSS825X6f = 0;
	BSS825X6g = 0;
	PZH825_X5A = 0;
	PZH825_X5C = 0;
	PZH825_X5E = 0;
	PZH825_X5G = 0;
	PZH_alpha_py_fi_ogrnch = 0;
    PZH_kren_velik_1 = 0;
	PZH_p_bakov_veliko = 0;
	PZH_razrezh_veliko = 0;
	PZH825_X5A_b = 0;
	PZH825_X5C_b = 0;
	PZH825_X5E_b = 0;
	PZH825_X5G_b = 0;
	PZH_alpha_py_fi_ogrnch_b = 0;
    PZH_kren_velik_b_1 = 0;
	PZH_p_bakov_veliko_b = 0;
	PZH_razrezh_veliko_b = 0;
	PK825_X5L = 0;
	PK825_X5f = 0;
	PK825_X5N = 0;
	PK825_X5h = 0;
	PK825_X5R = 0;
	PK825_X5j = 0;
	PK825_X5T = 0;
	PK825_X5n = 0;
	PK_V_velika_PL = 0;
	PK_V_mala_PL = 0;
	PK_alpha_py_predel_PL = 0;
	PK825_X5L_b = 0;
	PK825_X5f_b = 0;
	PK825_X5N_b = 0;
	PK825_X5h_b = 0;
	PK825_X5R_b = 0;
	PK825_X5j_b = 0;
	PK825_X5T_b = 0;
	PK825_X5n_b = 0;
	PK_V_velika_PL_b = 0;
	PK_V_mala_PL_b = 0;
	PK_alpha_py_predel_PL_b = 0;
	X5L_blink = 0;
	X5N_blink = 0;
	X5R_blink = 0;
	X5T_blink = 0;
	X7A_blink = 0;
	X5BB_blink = 0;
	X5DD_blink = 0;

    PCSOZHPL_2_label = new QLabel;
    PCSOKPL_2_label = new QLabel;
    PCSOKPL_label = new QLabel;
    PCSOZHPL_label = new QLabel;
    BSS825X5A_label = new QLabel;
    BSS825X5C_label = new QLabel;
    BSS825X5E_label = new QLabel;
    BSS825X5G_label = new QLabel;
    alpha_py_fi_ogrnch_label = new QLabel;
    p_bakov_veliko_label = new QLabel;
    razrezh_veliko_label = new QLabel;
    BSS825X6A_label = new QLabel;
    BSS825X6B_label = new QLabel;
    BSS825X6C_label = new QLabel;
    BSS825X6D_label = new QLabel;
    BSS825X6r_label = new QLabel;
    BSS825X6m_label = new QLabel;
    BSS825X6n_label = new QLabel;
    BSS825X6p_label = new QLabel;
    BSS825X5L_label = new QLabel;
    BSS825X5f_label = new QLabel;
    BSS825X5N_label = new QLabel;
    BSS825X5h_label = new QLabel;
    BSS825X5R_label = new QLabel;
    BSS825X5j_label = new QLabel;
    BSS825X5T_label = new QLabel;
    BSS825X5n_label = new QLabel;
    BSS825X6F_label = new QLabel;
    BSS825X6R_label = new QLabel;
    BSS825X6G_label = new QLabel;
    BSS825X6S_label = new QLabel;
    BSS825X6H_label = new QLabel;
    BSS825X6T_label = new QLabel;
    BSS825X6J_label = new QLabel;
    BSS825X6U_label = new QLabel;
    BSS825X6i_label = new QLabel;
    BSS825X6j_label = new QLabel;
    BSS825X6k_label = new QLabel;
    BSS825X5J_label = new QLabel;
    BSS825X7A_label = new QLabel;
    BSS825X5V_label = new QLabel;
    BSS825X5FF_label = new QLabel;
    BSS825X5HH_label = new QLabel;
    BSS825X5X_label = new QLabel;
    BSS825X5Z_label = new QLabel;
    BSS825X5b_label = new QLabel;
    BSS825X5d_label = new QLabel;
    BSS825X5r_label = new QLabel;
    BSS825X5t_label = new QLabel;
    BSS825X7R_label = new QLabel;
    BSS825X5v_label = new QLabel;
    BSS825X5x_label = new QLabel;
    BSS825X5z_label = new QLabel;
    BSS825X5BB_label = new QLabel;
    BSS825X5DD_label = new QLabel;
    BSS825X5KK_label = new QLabel;
    BSS825X5MM_label = new QLabel;
    BSS825X6E_label = new QLabel;
    BSS825X6K_label = new QLabel;
    BSS825X6d_label = new QLabel;
    BSS825X6e_label = new QLabel;
    BSS825X6L_label = new QLabel;
    BSS825X6M_label = new QLabel;
    BSS825X6N_label = new QLabel;
    BSS825X6P_label = new QLabel;
    BSS825X6W_label = new QLabel;
    BSS825X6X_label = new QLabel;
    BSS825X6q_label = new QLabel;
    BSS825X6Y_label = new QLabel;
    BSS825X6Z_label = new QLabel;
    BSS825X6a_label = new QLabel;
    BSS825X6f_label = new QLabel;
    BSS825X6g_label = new QLabel;
    BSS825_prog_label = new QLabel;

    BSS825X5A_on_button = new QPushButton("BSS825X5A",this);
    BSS825X5C_on_button = new QPushButton("BSS825X5C",this);
    BSS825X5E_on_button = new QPushButton("BSS825X5E",this);
    BSS825X5G_on_button = new QPushButton("BSS825X5G",this);
    alpha_py_fi_ogrnch_on_button = new QPushButton("alpha_py_fi_ogrnch",this);
    p_bakov_veliko_on_button = new QPushButton("p_bakov_veliko",this);
    razrezh_veliko_on_button = new QPushButton("razrezh_veliko",this);
    BSS825X5L_on_button = new QPushButton("BSS825X5L",this);
    BSS825X5f_on_button = new QPushButton("BSS825X5f",this);
    BSS825X5N_on_button = new QPushButton("BSS825X5N",this);
    BSS825X5h_on_button = new QPushButton("BSS825X5h",this);
    BSS825X5R_on_button = new QPushButton("BSS825X5R",this);
    BSS825X5j_on_button = new QPushButton("BSS825X5j",this);
    BSS825X5T_on_button = new QPushButton("BSS825X5T",this);
    BSS825X5n_on_button = new QPushButton("BSS825X5n",this);
    BSS825X5J_on_button = new QPushButton("BSS825X5J",this);
    BSS825X7A_on_button = new QPushButton("BSS825X7A",this);
    BSS825X5V_on_button = new QPushButton("BSS825X5V",this);
    BSS825X5FF_on_button = new QPushButton("BSS825X5FF",this);
    BSS825X5HH_on_button = new QPushButton("BSS825X5HH",this);
    BSS825X5X_on_button = new QPushButton("BSS825X5X",this);
    BSS825X5Z_on_button = new QPushButton("BSS825X5Z",this);
    BSS825X5b_on_button = new QPushButton("BSS825X5b",this);
    BSS825X5d_on_button = new QPushButton("BSS825X5d",this);
    BSS825X5r_on_button = new QPushButton("BSS825X5r",this);
    BSS825X5t_on_button = new QPushButton("BSS825X5t",this);
    BSS825X7R_on_button = new QPushButton("BSS825X7R",this);
    BSS825X5v_on_button = new QPushButton("BSS825X5v",this);
    BSS825X5x_on_button = new QPushButton("BSS825X5x",this);
    BSS825X5z_on_button = new QPushButton("BSS825X5z",this);
    BSS825X5BB_on_button = new QPushButton("BSS825X5BB",this);
    BSS825X5DD_on_button = new QPushButton("BSS825X5DD",this);
    BSS825X5KK_on_button = new QPushButton("BSS825X5KK",this);
    BSS825X5MM_on_button = new QPushButton("BSS825X5MM",this);
    programma_on_button = new QPushButton("programma",this);

    QObject::connect
(BSS825X5A_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5C_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5E_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5G_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(alpha_py_fi_ogrnch_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(p_bakov_veliko_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(razrezh_veliko_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5L_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5f_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5N_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5h_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5R_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5j_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5T_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5n_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5J_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X7A_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5V_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5FF_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5HH_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5X_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5Z_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5b_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5d_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5r_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5t_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X7R_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5v_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5x_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5z_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5BB_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5DD_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5KK_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(BSS825X5MM_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));
QObject::connect
(programma_on_button, SIGNAL(clicked()), this, SLOT(m_togglebutton_R()));

    //layout setting
    QVBoxLayout *layout_rightpilot_1_labels = new QVBoxLayout;
    QVBoxLayout *layout_rightpilot_1_labels_1 = new QVBoxLayout;
    QVBoxLayout *layout_rightpilot_1_buttons = new QVBoxLayout;
    QHBoxLayout *layout_rightpilot_1_main = new QHBoxLayout;

    layout_rightpilot_1_labels_1->addWidget(PCSOZHPL_2_label);
    layout_rightpilot_1_labels_1->addWidget(PCSOKPL_2_label);
    layout_rightpilot_1_labels_1->addWidget(PCSOKPL_label);
    layout_rightpilot_1_labels_1->addWidget(PCSOZHPL_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5A_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5C_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5E_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5G_label);
    layout_rightpilot_1_labels_1->addWidget(alpha_py_fi_ogrnch_label);
    layout_rightpilot_1_labels_1->addWidget(p_bakov_veliko_label);
    layout_rightpilot_1_labels_1->addWidget(razrezh_veliko_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6A_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6B_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6C_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6D_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6r_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6m_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6n_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6p_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5L_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5f_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5N_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5h_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5R_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5j_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5T_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X5n_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6F_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6R_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6G_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6S_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6H_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6T_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6J_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6U_label);
    layout_rightpilot_1_labels_1->addWidget(BSS825X6i_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6j_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6k_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5J_label);
    layout_rightpilot_1_labels->addWidget(BSS825X7A_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5V_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5FF_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5HH_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5X_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5Z_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5b_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5d_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5r_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5t_label);
    layout_rightpilot_1_labels->addWidget(BSS825X7R_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5v_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5x_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5z_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5BB_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5DD_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5KK_label);
    layout_rightpilot_1_labels->addWidget(BSS825X5MM_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6E_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6K_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6d_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6e_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6L_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6M_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6N_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6P_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6W_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6X_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6q_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6Y_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6Z_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6a_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6f_label);
    layout_rightpilot_1_labels->addWidget(BSS825X6g_label);
    layout_rightpilot_1_labels->addWidget(BSS825_prog_label);

    layout_rightpilot_1_buttons->addWidget(BSS825X5A_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5C_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5E_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5G_on_button);
    layout_rightpilot_1_buttons->addWidget(alpha_py_fi_ogrnch_on_button);
    layout_rightpilot_1_buttons->addWidget(p_bakov_veliko_on_button);
    layout_rightpilot_1_buttons->addWidget(razrezh_veliko_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5L_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5f_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5N_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5h_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5R_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5j_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5T_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5n_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5J_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X7A_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5V_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5FF_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5HH_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5X_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5Z_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5b_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5d_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5r_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5t_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X7R_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5v_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5x_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5z_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5BB_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5DD_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5KK_on_button);
    layout_rightpilot_1_buttons->addWidget(BSS825X5MM_on_button);
    layout_rightpilot_1_buttons->addWidget(programma_on_button);

    layout_rightpilot_1_main->addLayout(layout_rightpilot_1_labels);
    layout_rightpilot_1_main->addLayout(layout_rightpilot_1_labels_1);
    layout_rightpilot_1_main->addLayout(layout_rightpilot_1_buttons);
    wgt_rightpilot_1.setLayout(layout_rightpilot_1_main);
//    wgt_rightpilot_1.setFixedWidth(500);
    wgt_rightpilot_1.setFixedHeight(1400);


}
void emergencyalarm_rightpilot_1::logic_rightpilot_1()
{
    if(PRBSS825 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS825X5A == true)
        {
            BSS825X6A = true;
            if(PZH825_X5A_b == true)
            {
                PZH825_X5A = false;
            }
            else
            {
                PZH825_X5A = true;
            }
        }
        else
        {
            BSS825X6A = false;
            PZH825_X5A_b = false;
            PZH825_X5A = false;
        }


        if(S2_3364 == true)
        {
            PZH825_X5A_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS825X5C == true)
        {
            BSS825X6B = true;
            if(PZH825_X5C_b == true)
            {
                PZH825_X5C = false;
            }
            else
            {
                PZH825_X5C = true;
            }
        }
        else
        {
            BSS825X6B = false;
            PZH825_X5C_b = false;
            PZH825_X5C = false;
        }

        if(S2_3364 == true)
        {
            PZH825_X5C_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS825X5E == true)
        {
            BSS825X6C = true;
            if(PZH825_X5E_b == true)
            {
                PZH825_X5E = false;
            }
            else
            {
                PZH825_X5E = true;
            }
        }
        else
        {
            BSS825X6C = false;
            PZH825_X5E_b = false;
            PZH825_X5E = false;
        }

        if(S2_3364 == true)
        {
            PZH825_X5E_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (BSS825X5G == true)
        {
            BSS825X6D = true;
            if(PZH825_X5G_b == true)
            {
                PZH825_X5G = false;
            }
            else
            {
                PZH825_X5G = true;
            }
        }
        else
        {
            BSS825X6D = false;
            PZH825_X5G_b = false;
            PZH825_X5G = false;
        }

        if(S2_3364 == true)
        {
            PZH825_X5G_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (alpha_py_fi_ogrnch == true)
        {
            BSS825X6r = true;
            if(PZH_alpha_py_fi_ogrnch_b == true)
            {
                PZH_alpha_py_fi_ogrnch = false;
            }
            else
            {
                PZH_alpha_py_fi_ogrnch = true;
            }
        }
        else
        {
            BSS825X6r = false;
            PZH_alpha_py_fi_ogrnch_b = false;
            PZH_alpha_py_fi_ogrnch = false;
        }

        if(S2_3364 == true)
        {
            PZH_alpha_py_fi_ogrnch_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (kren_velik == true)
        {
            BSS825X6m = true;
            if(PZH_kren_velik_b_1 == true)
            {
                PZH_kren_velik_1 = false;
            }
            else
            {
                PZH_kren_velik_1 = true;
            }
        }
        else
        {
            BSS825X6m = false;
            PZH_kren_velik_b_1 = false;
            PZH_kren_velik_1 = false;
        }

        if(S2_3364 == true)
        {
            PZH_kren_velik_b_1 = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (p_bakov_veliko == true)
        {
            BSS825X6n = true;
            if(PZH_p_bakov_veliko_b == true)
            {
                PZH_p_bakov_veliko = false;
            }
            else
            {
                PZH_p_bakov_veliko = true;
            }
        }
        else
        {
            BSS825X6n = false;
            PZH_p_bakov_veliko_b = false;
            PZH_p_bakov_veliko = false;
        }

        if(S2_3364 == true)
        {
            PZH_p_bakov_veliko_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (razrezh_veliko == true)
        {
            BSS825X6p = true;
            if(PZH_razrezh_veliko_b == true)
            {
                PZH_razrezh_veliko = false;
            }
            else
            {
                PZH_razrezh_veliko = true;
            }
        }
        else
        {
            BSS825X6p = false;
            PZH_razrezh_veliko_b = false;
            PZH_razrezh_veliko = false;
        }

        if(S2_3364 == true)
        {
            PZH_razrezh_veliko_b = true;
        }

        //PCSOZHLL toggle
        if(
                PZH825_X5A == true ||
                PZH825_X5C == true ||
                PZH825_X5E == true ||
                PZH825_X5G == true ||
                PZH_alpha_py_fi_ogrnch == true ||
                PZH_kren_velik_1 == true ||
                PZH_p_bakov_veliko == true ||
                PZH_razrezh_veliko == true)
        {

            PCSOZHPL_2 = true;
        }
        else
        {

            PCSOZHPL_2 = false;
        }

        ///////////////Red lights_1
        //////////////1
        if (BSS825X5L == true)
        {
            X5L_blink++;
            if((X5L_blink * TICK) < 400)
            {
                BSS825X6F = false;
            }
            if(((X5L_blink * TICK)) >= 400)
            {
                BSS825X6F = true;
                X5L_blink = 0;
            }
        }
        else
        {
            BSS825X6F = false;
        }

        ///////////////Red lights_1
        //////////////2
        if (BSS825X5f == true)
        {
            BSS825X6R = true;
            if(PK825_X5f_b == true)
            {
                PK825_X5f = false;
            }
            else
            {
                PK825_X5f = true;
            }
        }
        else
        {
            BSS825X6R = false;
            PK825_X5f_b = false;
            PK825_X5f = false;
        }


        if(S2_3364 == true)
        {
            PK825_X5f_b = true;
        }

        ///////////////Red lights_1
        //////////////3
        if (BSS825X5N == true)
        {
            X5N_blink++;
            if((X5N_blink * TICK) < 400)
            {
                BSS825X6G = false;
            }
            if(((X5N_blink * TICK)) >= 400)
            {
                BSS825X6G = true;
                X5N_blink = 0;
            }
        }
        else
        {
            BSS825X6G = false;
        }

        ///////////////Red lights_1
        //////////////4
        if (BSS825X5h == true)
        {
            BSS825X6S = true;
            if(PK825_X5h_b == true)
            {
                PK825_X5h = false;
            }
            else
            {
                PK825_X5h = true;
            }
        }
        else
        {
            BSS825X6S = false;
            PK825_X5h_b = false;
            PK825_X5h = false;
        }


        if(S2_3364 == true)
        {
            PK825_X5h_b = true;
        }

        ///////////////Red lights_1
        //////////////5
        if (BSS825X5R == true)
        {
            X5R_blink++;
            if((X5R_blink * TICK) < 400)
            {
                BSS825X6H = false;
            }
            if(((X5R_blink * TICK)) >= 400)
            {
                BSS825X6H = true;
                X5R_blink = 0;
            }
        }
        else
        {
            BSS825X6H = false;
        }

        ///////////////Red lights_1
        //////////////6
        if (BSS825X5j == true)
        {
            BSS825X6T = true;
            if(PK825_X5j_b == true)
            {
                PK825_X5j = false;
            }
            else
            {
                PK825_X5j = true;
            }
        }
        else
        {
            BSS825X6T = false;
            PK825_X5j_b = false;
            PK825_X5j = false;
        }


        if(S2_3364 == true)
        {
            PK825_X5j_b = true;
        }

        ///////////////Red lights_1
        //////////////7
        if (BSS825X5T == true)
        {
            X5T_blink++;
            if((X5T_blink * TICK) < 400)
            {
                BSS825X6J = false;
            }
            if(((X5T_blink * TICK)) >= 400)
            {
                BSS825X6J = true;
                X5T_blink = 0;
            }
        }
        else
        {
            BSS825X6J = false;
        }

        ///////////////Red lights_1
        //////////////8
        if (BSS825X5n == true)
        {
            BSS825X6U = true;
            if(PK825_X5n_b == true)
            {
                PK825_X5n = false;
            }
            else
            {
                PK825_X5n = true;
            }
        }
        else
        {
            BSS825X6U = false;
            PK825_X5n_b = false;
            PK825_X5n = false;
        }


        if(S2_3364 == true)
        {
            PK825_X5n_b = true;
        }

        ///////////////Red lights_1
        //////////////9
        if (V_velika == true)
        {
            BSS825X6i = true;
            if(PK_V_velika_PL_b == true)
            {
                PK_V_velika_PL = false;
            }
            else
            {
                PK_V_velika_PL = true;
            }
        }
        else
        {
            BSS825X6i = false;
            PK_V_velika_PL_b = false;
            PK_V_velika_PL = false;
        }


        if(S2_3364 == true)
        {
            PK_V_velika_PL_b = true;
        }

        ///////////////Red lights_1
        //////////////10
        if (V_mala == true)
        {
            BSS825X6j = true;
            if(PK_V_mala_PL_b == true)
            {
                PK_V_mala_PL = false;
            }
            else
            {
                PK_V_mala_PL = true;
            }
        }
        else
        {
            BSS825X6j = false;
            PK_V_mala_PL_b = false;
            PK_V_mala_PL = false;
        }


        if(S2_3364 == true)
        {
            PK_V_mala_PL_b = true;
        }

        ///////////////Red lights_1
        //////////////11
        if (alpha_py_predel == true)
        {
            BSS825X6k = true;
            if(PK_alpha_py_predel_PL_b == true)
            {
                PK_alpha_py_predel_PL = false;
            }
            else
            {
                PK_alpha_py_predel_PL = true;
            }
        }
        else
        {
            BSS825X6k = false;
            PK_alpha_py_predel_PL_b = false;
            PK_alpha_py_predel_PL = false;
        }


        if(S2_3364 == true)
        {
            PK_alpha_py_predel_PL_b = true;
        }


        // PCSOKLL toggle
        if(
			PK825_X5L == true ||
			PK825_X5f == true ||
			PK825_X5N == true ||
			PK825_X5h == true ||
			PK825_X5R == true ||
			PK825_X5j == true ||
			PK825_X5T == true ||
			PK825_X5n == true ||
			PK_V_velika_PL == true ||
			PK_V_mala_PL == true ||
			PK_alpha_py_predel_PL)
        {
            PCSOKPL_2 = true;
        }
        else
        {
            PCSOKPL_2 = false;
        }
        
        ///////////////White lights_1
        //////////////1
        if (BSS825X5J == true)
        {
            BSS825X6E = true;
        }
        else
        {
            BSS825X6E = false;
        }
        
        ///////////////White lights_1
        //////////////2
        if (BSS825X7A == true)
        {
            X7A_blink++;
            if((X7A_blink * TICK) < 400)
            {
                BSS825X6E = false;
            }
            if(((X7A_blink * TICK)) >= 400)
            {
                BSS825X6E = true;
                X7A_blink = 0;
            }
        }
        else
        {
            X7A_blink = 0;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS825X5V == true)
        {
            BSS825X6K = true;
        }
        else
        {
            BSS825X6K = false;
        }
        
        ///////////////White lights_1
        //////////////4
        if (BSS825X5FF == true)
        {
            BSS825X6d = true;
        }
        else
        {
            BSS825X6d = false;
        }
        
        ///////////////White lights_1
        //////////////5
        if (BSS825X5FF == true)
        {
            BSS825X6d = true;
        }
        else
        {
            BSS825X6d = false;
        }
        
        ///////////////White lights_1
        //////////////6
        if (BSS825X5HH == true)
        {
            BSS825X6e = true;
        }
        else
        {
            BSS825X6e = false;
        }
        
        ///////////////White lights_1
        //////////////7
        if (BSS825X5X == true)
        {
            BSS825X6L = true;
        }
        else
        {
            BSS825X6L = false;
        }
        
        ///////////////White lights_1
        //////////////8
        if (BSS825X5Z == true)
        {
            BSS825X6M = true;
        }
        else
        {
            BSS825X6M = false;
        }
        
        ///////////////White lights_1
        //////////////9
        if (BSS825X5b == true)
        {
            BSS825X6N = true;
        }
        else
        {
            BSS825X6N = false;
        }
        
        ///////////////White lights_1
        //////////////10
        if (BSS825X5d == true)
        {
            BSS825X6P = true;
        }
        else
        {
            BSS825X6P = false;
        }
        
        ///////////////White lights_1
        //////////////11
        if (BSS825X5r == true)
        {
            BSS825X6W = true;
        }
        else
        {
            BSS825X6W = false;
        }
        
        ///////////////White lights_1
        //////////////12
        if (BSS825X5t == true)
        {
            BSS825X6X = true;
        }
        else
        {
            BSS825X6X = false;
        }
        
        ///////////////White lights_1
        //////////////13
        if (BSS825X7R == true)
        {
            BSS825X6q = true;
        }
        else
        {
            BSS825X6q = false;
        }
        
        ///////////////White lights_1
        //////////////14
        if (BSS825X5v == true)
        {
            BSS825X6Y = true;
        }
        else
        {
            BSS825X6Y = false;
        }
        
        ///////////////White lights_1
        //////////////15
        if (BSS825X5x == true)
        {
            BSS825X6Z = true;
        }
        else
        {
            BSS825X6Z = false;
        }
        
        ///////////////White lights_1
        //////////////16
        if (BSS825X5z == true)
        {
            BSS825X6a = true;
        }
        else
        {
            BSS825X6a = false;
        }
        
        ///////////////White lights_1
        //////////////17
        if (BSS825X5BB == true)
        {
            X5BB_blink++;
            if((X5BB_blink * TICK) < 400)
            {
                BSS825X6Y = false;
            }
            if(((X5BB_blink * TICK)) >= 400)
            {
                BSS825X6Y = true;
                X5BB_blink = 0;
            }
        }
        else
        {
            X5BB_blink = 0;
        }

        ///////////////White lights_1
        //////////////18
        if (BSS825X5DD == true)
        {
            X5DD_blink++;
            if((X5DD_blink * TICK) < 400)
            {
                BSS825X6a = false;
            }
            if(((X5DD_blink * TICK)) >= 400)
            {
                BSS825X6a = true;
                X5DD_blink = 0;
            }
        }
        else
        {
            X5DD_blink = 0;
        }
        
        ///////////////White lights_1
        //////////////18
        if (BSS825X5KK == true)
        {
            BSS825X6f = true;
        }
        else
        {
            BSS825X6f = false;
        }
        
        ///////////////White lights_1
        //////////////19
        if (BSS825X5MM == true)
        {
            BSS825X6g = true;
        }
        else
        {
            BSS825X6g = false;
        }

        ///////////////White lights_1
        //////////////19
        if (programma == true)
        {
            BSS825_prog = true;
        }
        else
        {
            BSS825_prog = false;
        }

        if(PKLPL == true)
        {
            PCSOZHPL_2 = true;
            PCSOKPL_2 = true;
            BSS825X6A = true;
	    BSS825X6B = true;
	    BSS825X6C = true;
	    BSS825X6D = true;
	    BSS825X6r = true;
	    BSS825X6m = true;
	    BSS825X6n = true;
	    BSS825X6p = true;
	    BSS825X6F = true;
	    BSS825X6R = true;
	    BSS825X6G = true;
	    BSS825X6S = true;
	    BSS825X6H = true;
	    BSS825X6T = true;
	    BSS825X6J = true;
	    BSS825X6U = true;
	    BSS825X6i = true;
	    BSS825X6j = true;
	    BSS825X6k = true;
	    BSS825X6E = true;
	    BSS825X6K = true;
	    BSS825X6d = true;
	    BSS825X6e = true;
	    BSS825X6L = true;
	    BSS825X6M = true;
	    BSS825X6N = true;
	    BSS825X6P = true;
	    BSS825X6W = true;
	    BSS825X6X = true;
	    BSS825X6q = true;
	    BSS825X6Y = true;
	    BSS825X6Z = true;
	    BSS825X6a = true;
	    BSS825X6f = true;
	    BSS825X6g = true;
        BSS825_prog = true;
        }


        if(
                PCSOZHPL_1 == true ||
                PCSOZHPL_2 == true)
        {
            PCSOZHPL = true;
        }
        else
        {
            PCSOZHPL = false;
        }

        if(
                PCSOKPL_1 == true ||
                PCSOKPL_2 == true)
        {
            PCSOKPL = true;
        }
        else
        {
            PCSOKPL = false;
        }
    }
    else
    {
        PCSOZHPL = false;
        PCSOKPL = false;
        BSS825X6A = false;
        BSS825X6B = false;
        BSS825X6C = false;
        BSS825X6D = false;
        BSS825X6r = false;
        BSS825X6m = false;
        BSS825X6n = false;
        BSS825X6p = false;
        BSS825X6F = false;
        BSS825X6R = false;
        BSS825X6G = false;
        BSS825X6S = false;
        BSS825X6H = false;
        BSS825X6T = false;
        BSS825X6J = false;
        BSS825X6U = false;
        BSS825X6i = false;
        BSS825X6j = false;
        BSS825X6k = false;
        BSS825X6E = false;
        BSS825X6K = false;
        BSS825X6d = false;
        BSS825X6e = false;
        BSS825X6L = false;
        BSS825X6M = false;
        BSS825X6N = false;
        BSS825X6P = false;
        BSS825X6W = false;
        BSS825X6X = false;
        BSS825X6q = false;
        BSS825X6Y = false;
        BSS825X6Z = false;
        BSS825X6a = false;
        BSS825X6f = false;
        BSS825X6g = false;
	PZH825_X5A = false;
	PZH825_X5C = false;
	PZH825_X5E = false;
	PZH825_X5G = false;
	PZH_alpha_py_fi_ogrnch = false;
    PZH_kren_velik_1 = false;
	PZH_p_bakov_veliko = false;
	PZH_razrezh_veliko = false;
	PZH825_X5A_b = false;
	PZH825_X5C_b = false;
	PZH825_X5E_b = false;
	PZH825_X5G_b = false;
	PZH_alpha_py_fi_ogrnch_b = false;
    PZH_kren_velik_b_1 = false;
	PZH_p_bakov_veliko_b = false;
	PZH_razrezh_veliko_b = false;
	PK825_X5L = false;
	PK825_X5f = false;
	PK825_X5N = false;
	PK825_X5h = false;
	PK825_X5R = false;
	PK825_X5j = false;
	PK825_X5T = false;
	PK825_X5n = false;
	PK_V_velika_PL = false;
	PK_V_mala_PL = false;
	PK_alpha_py_predel_PL = false;
	PK825_X5L_b = false;
	PK825_X5f_b = false;
	PK825_X5N_b = false;
	PK825_X5h_b = false;
	PK825_X5R_b = false;
	PK825_X5j_b = false;
	PK825_X5T_b = false;
	PK825_X5n_b = false;
	PK_V_velika_PL_b = false;
	PK_V_mala_PL_b = false;
	PK_alpha_py_predel_PL_b = false;
    }
    
    //end logic
    
    //showing values
PCSOZHPL_2_label->setText
("PCSOZHPL_2 = " + QString::number(PCSOZHPL_2));
PCSOKPL_2_label->setText
("PCSOKPL_2 = " + QString::number(PCSOKPL_2));
PCSOKPL_label->setText
("PCSOKPL = " + QString::number(PCSOKPL));
PCSOZHPL_label->setText
("PCSOZHPL = " + QString::number(PCSOZHPL));
BSS825X5A_label->setText
("BSS825X5A = " + QString::number(BSS825X5A));
BSS825X5C_label->setText
("BSS825X5C = " + QString::number(BSS825X5C));
BSS825X5E_label->setText
("BSS825X5E = " + QString::number(BSS825X5E));
BSS825X5G_label->setText
("BSS825X5G = " + QString::number(BSS825X5G));
alpha_py_fi_ogrnch_label->setText
("alpha_py_fi_ogrnch = " + QString::number(alpha_py_fi_ogrnch));
p_bakov_veliko_label->setText
("p_bakov_veliko = " + QString::number(p_bakov_veliko));
razrezh_veliko_label->setText
("razrezh_veliko = " + QString::number(razrezh_veliko));
BSS825X6A_label->setText
("BSS825X6A = " + QString::number(BSS825X6A));
BSS825X6B_label->setText
("BSS825X6B = " + QString::number(BSS825X6B));
BSS825X6C_label->setText
("BSS825X6C = " + QString::number(BSS825X6C));
BSS825X6D_label->setText
("BSS825X6D = " + QString::number(BSS825X6D));
BSS825X6r_label->setText
("BSS825X6r = " + QString::number(BSS825X6r));
BSS825X6m_label->setText
("BSS825X6m = " + QString::number(BSS825X6m));
BSS825X6n_label->setText
("BSS825X6n = " + QString::number(BSS825X6n));
BSS825X6p_label->setText
("BSS825X6p = " + QString::number(BSS825X6p));
BSS825X5L_label->setText
("BSS825X5L = " + QString::number(BSS825X5L));
BSS825X5f_label->setText
("BSS825X5f = " + QString::number(BSS825X5f));
BSS825X5N_label->setText
("BSS825X5N = " + QString::number(BSS825X5N));
BSS825X5h_label->setText
("BSS825X5h = " + QString::number(BSS825X5h));
BSS825X5R_label->setText
("BSS825X5R = " + QString::number(BSS825X5R));
BSS825X5j_label->setText
("BSS825X5j = " + QString::number(BSS825X5j));
BSS825X5T_label->setText
("BSS825X5T = " + QString::number(BSS825X5T));
BSS825X5n_label->setText
("BSS825X5n = " + QString::number(BSS825X5n));
BSS825X6F_label->setText
("BSS825X6F = " + QString::number(BSS825X6F));
BSS825X6R_label->setText
("BSS825X6R = " + QString::number(BSS825X6R));
BSS825X6G_label->setText
("BSS825X6G = " + QString::number(BSS825X6G));
BSS825X6S_label->setText
("BSS825X6S = " + QString::number(BSS825X6S));
BSS825X6H_label->setText
("BSS825X6H = " + QString::number(BSS825X6H));
BSS825X6T_label->setText
("BSS825X6T = " + QString::number(BSS825X6T));
BSS825X6J_label->setText
("BSS825X6J = " + QString::number(BSS825X6J));
BSS825X6U_label->setText
("BSS825X6U = " + QString::number(BSS825X6U));
BSS825X6i_label->setText
("BSS825X6i = " + QString::number(BSS825X6i));
BSS825X6j_label->setText
("BSS825X6j = " + QString::number(BSS825X6j));
BSS825X6k_label->setText
("BSS825X6k = " + QString::number(BSS825X6k));
BSS825X5J_label->setText
("BSS825X5J = " + QString::number(BSS825X5J));
BSS825X7A_label->setText
("BSS825X7A = " + QString::number(BSS825X7A));
BSS825X5V_label->setText
("BSS825X5V = " + QString::number(BSS825X5V));
BSS825X5FF_label->setText
("BSS825X5FF = " + QString::number(BSS825X5FF));
BSS825X5HH_label->setText
("BSS825X5HH = " + QString::number(BSS825X5HH));
BSS825X5X_label->setText
("BSS825X5X = " + QString::number(BSS825X5X));
BSS825X5Z_label->setText
("BSS825X5Z = " + QString::number(BSS825X5Z));
BSS825X5b_label->setText
("BSS825X5b = " + QString::number(BSS825X5b));
BSS825X5d_label->setText
("BSS825X5d = " + QString::number(BSS825X5d));
BSS825X5r_label->setText
("BSS825X5r = " + QString::number(BSS825X5r));
BSS825X5t_label->setText
("BSS825X5t = " + QString::number(BSS825X5t));
BSS825X7R_label->setText
("BSS825X7R = " + QString::number(BSS825X7R));
BSS825X5v_label->setText
("BSS825X5v = " + QString::number(BSS825X5v));
BSS825X5x_label->setText
("BSS825X5x = " + QString::number(BSS825X5x));
BSS825X5z_label->setText
("BSS825X5z = " + QString::number(BSS825X5z));
BSS825X5BB_label->setText
("BSS825X5BB = " + QString::number(BSS825X5BB));
BSS825X5DD_label->setText
("BSS825X5DD = " + QString::number(BSS825X5DD));
BSS825X5KK_label->setText
("BSS825X5KK = " + QString::number(BSS825X5KK));
BSS825X5MM_label->setText
("BSS825X5MM = " + QString::number(BSS825X5MM));
BSS825X6E_label->setText
("BSS825X6E = " + QString::number(BSS825X6E));
BSS825X6K_label->setText
("BSS825X6K = " + QString::number(BSS825X6K));
BSS825X6d_label->setText
("BSS825X6d = " + QString::number(BSS825X6d));
BSS825X6e_label->setText
("BSS825X6e = " + QString::number(BSS825X6e));
BSS825X6L_label->setText
("BSS825X6L = " + QString::number(BSS825X6L));
BSS825X6M_label->setText
("BSS825X6M = " + QString::number(BSS825X6M));
BSS825X6N_label->setText
("BSS825X6N = " + QString::number(BSS825X6N));
BSS825X6P_label->setText
("BSS825X6P = " + QString::number(BSS825X6P));
BSS825X6W_label->setText
("BSS825X6W = " + QString::number(BSS825X6W));
BSS825X6X_label->setText
("BSS825X6X = " + QString::number(BSS825X6X));
BSS825X6q_label->setText
("BSS825X6q = " + QString::number(BSS825X6q));
BSS825X6Y_label->setText
("BSS825X6Y = " + QString::number(BSS825X6Y));
BSS825X6Z_label->setText
("BSS825X6Z = " + QString::number(BSS825X6Z));
BSS825X6a_label->setText
("BSS825X6a = " + QString::number(BSS825X6a));
BSS825X6f_label->setText
("BSS825X6f = " + QString::number(BSS825X6f));
BSS825X6g_label->setText
("BSS825X6g = " + QString::number(BSS825X6g));
BSS825_prog_label->setText
("BSS825_prog = " + QString::number(BSS825_prog));


}

void emergencyalarm_rightpilot_1::m_togglebutton_R()
{
    QObject* obj;
    obj = QObject::sender();
    if(obj == BSS825X5A_on_button)
    {
        m_RedButton(BSS825X5A_on_button, &BSS825X5A);
    }
    if(obj == BSS825X5C_on_button)
    {
        m_RedButton(BSS825X5C_on_button, &BSS825X5C);
    }
    if(obj == BSS825X5E_on_button)
    {
        m_RedButton(BSS825X5E_on_button, &BSS825X5E);
    }
    if(obj == BSS825X5G_on_button)
    {
        m_RedButton(BSS825X5G_on_button, &BSS825X5G);
    }
    if(obj == alpha_py_fi_ogrnch_on_button)
    {
        m_RedButton(alpha_py_fi_ogrnch_on_button, &alpha_py_fi_ogrnch);
    }
    if(obj == p_bakov_veliko_on_button)
    {
        m_RedButton(p_bakov_veliko_on_button, &p_bakov_veliko);
    }
    if(obj == razrezh_veliko_on_button)
    {
        m_RedButton(razrezh_veliko_on_button, &razrezh_veliko);
    }
    if(obj == BSS825X5L_on_button)
    {
        m_RedButton(BSS825X5L_on_button, &BSS825X5L);
    }

    if(obj == BSS825X5f_on_button)
    {
        m_RedButton(BSS825X5f_on_button, &BSS825X5f);
    }
    if(obj == BSS825X5N_on_button)
    {
    m_RedButton(BSS825X5N_on_button, &BSS825X5N);
    }
    if(obj == BSS825X5h_on_button)
    {
    m_RedButton(BSS825X5h_on_button, &BSS825X5h);
    }
    if(obj == BSS825X5R_on_button)
    {
    m_RedButton(BSS825X5R_on_button, &BSS825X5R);
    }
    if(obj == BSS825X5j_on_button)
    {
    m_RedButton(BSS825X5j_on_button, &BSS825X5j);
    }
    if(obj == BSS825X5T_on_button)
    {
    m_RedButton(BSS825X5T_on_button, &BSS825X5T);
    }
    if(obj == BSS825X5n_on_button)
    {
    m_RedButton(BSS825X5n_on_button, &BSS825X5n);
    }
    if(obj == BSS825X5J_on_button)
    {
    m_RedButton(BSS825X5J_on_button, &BSS825X5J);
    }
    if(obj == BSS825X7A_on_button)
    {
    m_RedButton(BSS825X7A_on_button, &BSS825X7A);
    }
    if(obj == BSS825X5V_on_button)
    {
    m_RedButton(BSS825X5V_on_button, &BSS825X5V);
    }
    if(obj == BSS825X5FF_on_button)
    {
    m_RedButton(BSS825X5FF_on_button, &BSS825X5FF);
    }
    if(obj == BSS825X5HH_on_button)
    {
    m_RedButton(BSS825X5HH_on_button, &BSS825X5HH);
    }
    if(obj == BSS825X5X_on_button)
    {
    m_RedButton(BSS825X5X_on_button, &BSS825X5X);
    }
    if(obj == BSS825X5Z_on_button)
    {
    m_RedButton(BSS825X5Z_on_button, &BSS825X5Z);
    }
    if(obj == BSS825X5b_on_button)
    {
    m_RedButton(BSS825X5b_on_button, &BSS825X5b);
    }
    if(obj == BSS825X5d_on_button)
    {
    m_RedButton(BSS825X5d_on_button, &BSS825X5d);
    }
    if(obj == BSS825X5r_on_button)
    {
    m_RedButton(BSS825X5r_on_button, &BSS825X5r);
    }
    if(obj == BSS825X5t_on_button)
    {
    m_RedButton(BSS825X5t_on_button, &BSS825X5t);
    }
    if(obj == BSS825X7R_on_button)
    {
    m_RedButton(BSS825X7R_on_button, &BSS825X7R);
    }
    if(obj == BSS825X5v_on_button)
    {
    m_RedButton(BSS825X5v_on_button, &BSS825X5v);
    }
    if(obj == BSS825X5x_on_button)
    {
    m_RedButton(BSS825X5x_on_button, &BSS825X5x);
    }
    if(obj == BSS825X5z_on_button)
    {
    m_RedButton(BSS825X5z_on_button, &BSS825X5z);
    }
    if(obj == BSS825X5BB_on_button)
    {
    m_RedButton(BSS825X5BB_on_button, &BSS825X5BB);
    }
    if(obj == BSS825X5DD_on_button)
    {
    m_RedButton(BSS825X5DD_on_button, &BSS825X5DD);
    }
    if(obj == BSS825X5KK_on_button)
    {
    m_RedButton(BSS825X5KK_on_button, &BSS825X5KK);
    }
    if(obj == BSS825X5MM_on_button)
    {
    m_RedButton(BSS825X5MM_on_button, &BSS825X5MM);
    }
    if(obj == programma_on_button)
    {
    m_RedButton(programma_on_button, &programma);
    }

}
void emergencyalarm_rightpilot_1::m_RedButton(QPushButton* button, bool* clue)
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
