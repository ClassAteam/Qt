#include "emergencyalarm_leftpilot_1.h"
#include "algorithms.h"
#include "QtWidgets"

bool
PCSOZHLL_2,
PCSOKLL_2,
//yellow input
BSS812X5HH,
kren_velik,
alpha_fi_ogrnich,
nazhmi_rzv_tormz,

//yellow output
BSS812X6T,
BSS812X6V,
BSS812X6e,
BSS812X6j,
BSS812X6k,
BSS812X6m,
BSS812X6q,
BSS812X6n,

//red input
V_velika,
V_mala,
alpha_py_predel,

//red output
BSS812X6S,
BSS812X6U,
BSS812X6g,
BSS812X6h,
BSS812X6i,

//white input
BSS812X5B,
BSS812X5D,
BSS812X5E,
BSS812X5G,
BSS812X5J,
BSS812X5L,
BSS812X5N,
BSS812X5R,
BSS812X5T,
BSS812X5V,
BSS812X5X,
BSS812X5Z,
BSS812X5b,
BSS812X5d,
BSS812X5f,
BSS812X5t,
BSS812X5r,
BSS812X5v,
BSS812X5x,
BSS812X5z,
BSS812X5BB,
BSS812X5DD,
BSS812X5FF,
vkl_rezerv_torm,
vkl_forsir_torm,
BSS812X5KK,

//white output
BSS812X6A,
BSS812X6B,
BSS812X6C,
BSS812X6D,
BSS812X6E,
BSS812X6F,
BSS812X6G,
BSS812X6H,
BSS812X6J,
BSS812X6K,
BSS812X6L,
BSS812X6M,
BSS812X6N,
BSS812X6X,
BSS812X6W,
BSS812X6Y,
BSS812X6a,
BSS812X6b,
BSS812X6c,
BSS812X6d,
BSS812X6p,
BSS812X6r,
BSS812X6f,

//yellow input clue
PZH812_X5j,
PZH812_X5p,
PZH812_X5HH,
PZH_kren_velik,
PZH_alpha_fi_ogrnich,
PZH_nazhmi_rzv_tormz,

//yellow block clue
PZH812_X5j_b,
PZH812_X5p_b,
PZH812_X5HH_b,
PZH_kren_velik_b,
PZH_alpha_fi_ogrnich_b,
PZH_nazhmi_rzv_tormz_b,

//red input clue
PK812_X5h,
PK812_X5n,
PK_V_velika,
PK_V_mala,
PK_alpha_py_predel,

//red block clue
PK812_X5h_b,
PK812_X5n_b,
PK_V_velika_b,
PK_V_mala_b,
PK_alpha_py_predel_b,

//white input clue
PB812_X5B,
PB812_X5D,
PB812_X5E,
PB812_X5G,
PB812_X5J,
PB812_X5L,
PB812_X5N,
PB812_X5R,
PB812_X5T,
PB812_X5V,
PB812_X5X,
PB812_X5Z,
PB812_X5b,
PB812_X5d,
PB812_X5f,
PB812_X5t,
PB812_X5r,
PB812_X5v,
PB812_X5x,
PB812_X5z,
PB812_X5BB,
PB812_X5DD,
PB812_X5FF,
PB_vkl_rezerv_torm,
PB_vkl_forsir_torm,
PB812_X5KK,


//white block clue
PB812_X5B_b,
PB812_X5D_b,
PB812_X5E_b,
PB812_X5G_b,
PB812_X5J_b,
PB812_X5L_b,
PB812_X5N_b,
PB812_X5R_b,
PB812_X5T_b,
PB812_X5V_b,
PB812_X5X_b,
PB812_X5Z_b,
PB812_X5b_b,
PB812_X5d_b,
PB812_X5f_b,
PB812_X5t_b,
PB812_X5r_b,
PB812_X5v_b,
PB812_X5x_b,
PB812_X5z_b,
PB812_X5BB_b,
PB812_X5DD_b,
PB812_X5FF_b,
PB_vkl_rezerv_torm_b,
PB_vkl_forsir_torm_b,
PB812_X5KK_b;


emergencyalarm_leftpilot_1::emergencyalarm_leftpilot_1(QWidget* pwgt)
    : QWidget(pwgt)
{
    BSS812X5HH = 0;
    kren_velik = 0;
    alpha_fi_ogrnich = 0;
    nazhmi_rzv_tormz = 0;

//yellow output
    BSS812X6T = 0;
    BSS812X6V = 0;
    BSS812X6e = 0;
    BSS812X6j = 0;
    BSS812X6k = 0;
    BSS812X6m = 0;
    BSS812X6q = 0;
    BSS812X6n = 0;

//red input
    V_velika = 0;
    V_mala = 0;
    alpha_py_predel = 0;
    BSS812X6S = 0;
    BSS812X6U = 0;
    BSS812X6g = 0;
    BSS812X6h = 0;
    BSS812X6i = 0;
    BSS812X5B = 0;
    BSS812X5D = 0;
    BSS812X5E = 0;
    BSS812X5G = 0;
    BSS812X5J = 0;
    BSS812X5L = 0;
    BSS812X5N = 0;
    BSS812X5R = 0;
    BSS812X5T = 0;
    BSS812X5V = 0;
    BSS812X5X = 0;
    BSS812X5Z = 0;
    BSS812X5b = 0;
    BSS812X5d = 0;
    BSS812X5f = 0;
    BSS812X5t = 0;
    BSS812X5r = 0;
    BSS812X5v = 0;
    BSS812X5x = 0;
    BSS812X5z = 0;
    BSS812X5BB = 0;
    BSS812X5DD = 0;
    BSS812X5FF = 0;
    vkl_rezerv_torm = 0;
    vkl_forsir_torm = 0;
    BSS812X5KK = 0;
    BSS812X6A = 0;
    BSS812X6B = 0;
    BSS812X6C = 0;
    BSS812X6D = 0;
    BSS812X6E = 0;
    BSS812X6F = 0;
    BSS812X6G = 0;
    BSS812X6H = 0;
    BSS812X6J = 0;
    BSS812X6K = 0;
    BSS812X6L = 0;
    BSS812X6M = 0;
    BSS812X6N = 0;
    BSS812X6X = 0;
    BSS812X6W = 0;
    BSS812X6Y = 0;
    BSS812X6a = 0;
    BSS812X6b = 0;
    BSS812X6c = 0;
    BSS812X6d = 0;
    BSS812X6p = 0;
    BSS812X6r = 0;
    BSS812X6f = 0;
    PZH812_X5j = 0;
    PZH812_X5p = 0;
    PZH812_X5HH = 0;
    PZH_kren_velik = 0;
    PZH_alpha_fi_ogrnich = 0;
    PZH_nazhmi_rzv_tormz = 0;
    PZH812_X5j_b = 0;
    PZH812_X5p_b = 0;
    PZH812_X5HH_b = 0;
    PZH_kren_velik_b = 0;
    PZH_alpha_fi_ogrnich_b = 0;
    PZH_nazhmi_rzv_tormz_b = 0;
    PK812_X5h = 0;
    PK812_X5n = 0;
    PK_V_velika = 0;
    PK_V_mala = 0;
    PK_alpha_py_predel = 0;
    PK812_X5h_b = 0;
    PK812_X5n_b = 0;
    PK_V_velika_b = 0;
    PK_V_mala_b = 0;
    PK_alpha_py_predel_b = 0;
    PB812_X5B = 0;
    PB812_X5D = 0;
    PB812_X5E = 0;
    PB812_X5G = 0;
    PB812_X5J = 0;
    PB812_X5L = 0;
    PB812_X5N = 0;
    PB812_X5R = 0;
    PB812_X5T = 0;
    PB812_X5V = 0;
    PB812_X5X = 0;
    PB812_X5Z = 0;
    PB812_X5b = 0;
    PB812_X5d = 0;
    PB812_X5f = 0;
    PB812_X5t = 0;
    PB812_X5r = 0;
    PB812_X5v = 0;
    PB812_X5x = 0;
    PB812_X5z = 0;
    PB812_X5BB = 0;
    PB812_X5DD = 0;
    PB812_X5FF = 0;
    PB_vkl_rezerv_torm = 0;
    PB_vkl_forsir_torm = 0;
    PB812_X5KK = 0;
    PB812_X5B_b = 0;
    PB812_X5D_b = 0;
    PB812_X5E_b = 0;
    PB812_X5G_b = 0;
    PB812_X5J_b = 0;
    PB812_X5L_b = 0;
    PB812_X5N_b = 0;
    PB812_X5R_b = 0;
    PB812_X5T_b = 0;
    PB812_X5V_b = 0;
    PB812_X5X_b = 0;
    PB812_X5Z_b = 0;
    PB812_X5b_b = 0;
    PB812_X5d_b = 0;
    PB812_X5f_b = 0;
    PB812_X5t_b = 0;
    PB812_X5r_b = 0;
    PB812_X5v_b = 0;
    PB812_X5x_b = 0;
    PB812_X5z_b = 0;
    PB812_X5BB_b = 0;
    PB812_X5DD_b = 0;
    PB812_X5FF_b = 0;
    PB_vkl_rezerv_torm_b = 0;
    PB_vkl_forsir_torm_b = 0;
    PB812_X5KK_b = 0;

    BSS812X5j_label = new QLabel;
    BSS812X5p_label = new QLabel;
    BSS812X5HH_label = new QLabel;
    kren_velik_label = new QLabel;
    alpha_fi_ogrnich_label = new QLabel;
    nazhmi_rzv_tormz_label = new QLabel;
    BSS812X6T_label = new QLabel;
    BSS812X6V_label = new QLabel;
    BSS812X6e_label = new QLabel;
    BSS812X6j_label = new QLabel;
    BSS812X6k_label = new QLabel;
    BSS812X6m_label = new QLabel;
    BSS812X6q_label = new QLabel;
    BSS812X6n_label = new QLabel;
    BSS812X5h_label = new QLabel;
    BSS812X5n_label = new QLabel;
    V_velika_label = new QLabel;
    V_mala_label = new QLabel;
    alpha_py_predel_label = new QLabel;
    BSS812X6S_label = new QLabel;
    BSS812X6U_label = new QLabel;
    BSS812X6g_label = new QLabel;
    BSS812X6h_label = new QLabel;
    BSS812X6i_label = new QLabel;
    BSS812X5B_label = new QLabel;
    BSS812X5D_label = new QLabel;
    BSS812X5E_label = new QLabel;
    BSS812X5G_label = new QLabel;
    BSS812X5J_label = new QLabel;
    BSS812X5L_label = new QLabel;
    BSS812X5N_label = new QLabel;
    BSS812X5R_label = new QLabel;
    BSS812X5T_label = new QLabel;
    BSS812X5V_label = new QLabel;
    BSS812X5X_label = new QLabel;
    BSS812X5Z_label = new QLabel;
    BSS812X5b_label = new QLabel;
    BSS812X5d_label = new QLabel;
    BSS812X5f_label = new QLabel;
    BSS812X5t_label = new QLabel;
    BSS812X5r_label = new QLabel;
    BSS812X5v_label = new QLabel;
    BSS812X5x_label = new QLabel;
    BSS812X5z_label = new QLabel;
    BSS812X5BB_label = new QLabel;
    BSS812X5DD_label = new QLabel;
    BSS812X5FF_label = new QLabel;
    vkl_rezerv_torm_label = new QLabel;
    vkl_forsir_torm_label = new QLabel;
    BSS812X5KK_label = new QLabel;
    BSS812X6A_label = new QLabel;
    BSS812X6B_label = new QLabel;
    BSS812X6C_label = new QLabel;
    BSS812X6D_label = new QLabel;
    BSS812X6E_label = new QLabel;
    BSS812X6F_label = new QLabel;
    BSS812X6G_label = new QLabel;
    BSS812X6H_label = new QLabel;
    BSS812X6J_label = new QLabel;
    BSS812X6K_label = new QLabel;
    BSS812X6L_label = new QLabel;
    BSS812X6M_label = new QLabel;
    BSS812X6N_label = new QLabel;
    BSS812X6X_label = new QLabel;
    BSS812X6W_label = new QLabel;
    BSS812X6Y_label = new QLabel;
    BSS812X6a_label = new QLabel;
    BSS812X6b_label = new QLabel;
    BSS812X6c_label = new QLabel;
    BSS812X6d_label = new QLabel;
    BSS812X6p_label = new QLabel;
    BSS812X6r_label = new QLabel;
    BSS812X6f_label = new QLabel;

BSS812X5j_on_button = new QPushButton("BSS812X5j_on_", this);
BSS812X5j_off_button = new QPushButton("BSS812X5j_off_", this);
BSS812X5p_on_button = new QPushButton("BSS812X5p_on_", this);
BSS812X5p_off_button = new QPushButton("BSS812X5p_off_", this);
BSS812X5HH_on_button = new QPushButton("BSS812X5HH_on_", this);
BSS812X5HH_off_button = new QPushButton("BSS812X5HH_off_", this);
kren_velik_on_button = new QPushButton("kren_velik_on_", this);
kren_velik_off_button = new QPushButton("kren_velik_off_", this);
alpha_fi_ogrnich_on_button = new QPushButton("alpha_fi_ogrnich_on_", this);
alpha_fi_ogrnich_off_button = new QPushButton("alpha_fi_ogrnich_off_", this);
nazhmi_rzv_tormz_on_button = new QPushButton("nazhmi_rzv_tormz_on_", this);
nazhmi_rzv_tormz_off_button = new QPushButton("nazhmi_rzv_tormz_off_", this);
BSS812X5h_on_button = new QPushButton("BSS812X5h_on_", this);
BSS812X5h_off_button = new QPushButton("BSS812X5h_off_", this);
BSS812X5n_on_button = new QPushButton("BSS812X5n_on_", this);
BSS812X5n_off_button = new QPushButton("BSS812X5n_off_", this);
V_velika_on_button = new QPushButton("V_velika_on_", this);
V_velika_off_button = new QPushButton("V_velika_off_", this);
V_mala_on_button = new QPushButton("V_mala_on_", this);
V_mala_off_button = new QPushButton("V_mala_off_", this);
alpha_py_predel_on_button = new QPushButton("alpha_py_predel_on_", this);
alpha_py_predel_off_button = new QPushButton("alpha_py_predel_off_", this);

BSS812X5B_on_button = new QPushButton("BSS812X5B_on_", this);
BSS812X5B_off_button = new QPushButton("BSS812X5B_off", this);
BSS812X5D_on_button = new QPushButton("BSS812X5D_on_", this);
BSS812X5D_off_button = new QPushButton("BSS812X5D_off_", this);
BSS812X5E_on_button = new QPushButton("BSS812X5E_on_", this);
BSS812X5E_off_button = new QPushButton("BSS812X5E_off_", this);
BSS812X5G_on_button = new QPushButton("BSS812X5G_on_", this);
BSS812X5G_off_button = new QPushButton("BSS812X5G_off_", this);
BSS812X5J_on_button = new QPushButton("BSS812X5J_on_", this);
BSS812X5J_off_button = new QPushButton("BSS812X5J_off_", this);
BSS812X5L_on_button = new QPushButton("BSS812X5L_on_", this);
BSS812X5L_off_button = new QPushButton("BSS812X5L_off_", this);
BSS812X5N_on_button = new QPushButton("BSS812X5N_on_", this);
BSS812X5N_off_button = new QPushButton("BSS812X5N_off_", this);
BSS812X5R_on_button = new QPushButton("BSS812X5R_on_", this);
BSS812X5R_off_button = new QPushButton("BSS812X5R_off_", this);
BSS812X5T_on_button = new QPushButton("BSS812X5T_on_", this);
BSS812X5T_off_button = new QPushButton("BSS812X5T_off_", this);
BSS812X5V_on_button = new QPushButton("BSS812X5V_on_", this);
BSS812X5V_off_button = new QPushButton("BSS812X5V_off_", this);
BSS812X5X_on_button = new QPushButton("BSS812X5X_on_", this);
BSS812X5X_off_button = new QPushButton("BSS812X5X_off_", this);
BSS812X5Z_on_button = new QPushButton("BSS812X5Z_on_", this);
BSS812X5Z_off_button = new QPushButton("BSS812X5Z_off_", this);
BSS812X5b_on_button = new QPushButton("BSS812X5b_on_", this);
BSS812X5b_off_button = new QPushButton("BSS812X5b_off_", this);
BSS812X5d_on_button = new QPushButton("BSS812X5d_on_", this);
BSS812X5d_off_button = new QPushButton("BSS812X5d_off_", this);
BSS812X5f_on_button = new QPushButton("BSS812X5f_on_", this);
BSS812X5f_off_button = new QPushButton("BSS812X5f_off_", this);
BSS812X5t_on_button = new QPushButton("BSS812X5t_on_", this);
BSS812X5t_off_button = new QPushButton("BSS812X5t_off_", this);
BSS812X5r_on_button = new QPushButton("BSS812X5r_on_", this);
BSS812X5r_off_button = new QPushButton("BSS812X5r_off_", this);
BSS812X5v_on_button = new QPushButton("BSS812X5v_on_", this);
BSS812X5v_off_button = new QPushButton("BSS812X5v_off_", this);
BSS812X5x_on_button = new QPushButton("BSS812X5x_on_", this);
BSS812X5x_off_button = new QPushButton("BSS812X5x_off_", this);
BSS812X5z_on_button = new QPushButton("BSS812X5z_on_", this);
BSS812X5z_off_button = new QPushButton("BSS812X5z_off_", this);
BSS812X5BB_on_button = new QPushButton("BSS812X5BB_on_", this);
BSS812X5BB_off_button = new QPushButton("BSS812X5BB_off_", this);
BSS812X5DD_on_button = new QPushButton("BSS812X5DD_on_", this);
BSS812X5DD_off_button = new QPushButton("BSS812X5DD_off_", this);
BSS812X5FF_on_button = new QPushButton("BSS812X5FF_on_", this);
BSS812X5FF_off_button = new QPushButton("BSS812X5FF_off_", this);
vkl_rezerv_torm_on_button = new QPushButton("vkl_rezerv_torm_on_", this);
vkl_rezerv_torm_off_button = new QPushButton("vkl_rezerv_torm_off_", this);
vkl_forsir_torm_on_button = new QPushButton("vkl_forsir_torm_on_", this);
vkl_forsir_torm_off_button = new QPushButton("vkl_forsir_torm_off_", this);
BSS812X5KK_on_button = new QPushButton("BSS812X5KK_on_", this);
BSS812X5KK_off_button = new QPushButton("BSS812X5KK_off_", this);

    QObject::connect
(BSS812X5j_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5j_on()));
    QObject::connect
(BSS812X5j_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5j_off()));
    QObject::connect
(BSS812X5p_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5p_on()));
    QObject::connect
(BSS812X5p_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5p_off()));
    QObject::connect
(BSS812X5HH_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5HH_on()));
    QObject::connect
(BSS812X5HH_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5HH_off()));
    QObject::connect
(kren_velik_on_button, SIGNAL(clicked()), this, SLOT(m_kren_velik_on()));
    QObject::connect
(kren_velik_off_button, SIGNAL(clicked()), this, SLOT(m_kren_velik_off()));
    QObject::connect
(alpha_fi_ogrnich_on_button, SIGNAL(clicked()), this, SLOT(m_alpha_fi_ogrnich_on()));
    QObject::connect
(alpha_fi_ogrnich_off_button, SIGNAL(clicked()), this, SLOT(m_alpha_fi_ogrnich_off()));
    QObject::connect
(nazhmi_rzv_tormz_on_button, SIGNAL(clicked()), this, SLOT(m_nazhmi_rzv_tormz_on()));
    QObject::connect
(nazhmi_rzv_tormz_off_button, SIGNAL(clicked()), this, SLOT(m_nazhmi_rzv_tormz_off()));
    QObject::connect
(BSS812X5h_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5h_on()));
    QObject::connect
(BSS812X5h_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5h_off()));
    QObject::connect
(BSS812X5n_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5n_on()));
    QObject::connect
(BSS812X5n_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5n_off()));
    QObject::connect
(V_velika_on_button, SIGNAL(clicked()), this, SLOT(m_V_velika_on()));
    QObject::connect
(V_velika_off_button, SIGNAL(clicked()), this, SLOT(m_V_velika_off()));
    QObject::connect
(V_mala_on_button, SIGNAL(clicked()), this, SLOT(m_V_mala_on()));
    QObject::connect
(V_mala_off_button, SIGNAL(clicked()), this, SLOT(m_V_mala_off()));
    QObject::connect
(alpha_py_predel_on_button, SIGNAL(clicked()), this, SLOT(m_alpha_py_predel_on()));
    QObject::connect
(alpha_py_predel_off_button, SIGNAL(clicked()), this, SLOT(m_alpha_py_predel_off()));

    QObject::connect
(BSS812X5B_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5B_on()));
    QObject::connect
(BSS812X5B_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5B_off()));
    QObject::connect
(BSS812X5D_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5D_on()));
    QObject::connect
(BSS812X5D_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5D_off()));
    QObject::connect
(BSS812X5E_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5E_on()));
    QObject::connect
(BSS812X5E_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5E_off()));
    QObject::connect
(BSS812X5G_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5G_on()));
    QObject::connect
(BSS812X5G_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5G_off()));
    QObject::connect
(BSS812X5J_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5J_on()));
    QObject::connect
(BSS812X5J_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5J_off()));
    QObject::connect
(BSS812X5L_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5L_on()));
    QObject::connect
(BSS812X5L_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5L_off()));
    QObject::connect
(BSS812X5N_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5N_on()));
    QObject::connect
(BSS812X5N_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5N_off()));
    QObject::connect
(BSS812X5R_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5R_on()));
    QObject::connect
(BSS812X5R_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5R_off()));
    QObject::connect
(BSS812X5T_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5T_on()));
    QObject::connect
(BSS812X5T_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5T_off()));
    QObject::connect
(BSS812X5V_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5V_on()));
    QObject::connect
(BSS812X5V_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5V_off()));
    QObject::connect
(BSS812X5X_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5X_on()));
    QObject::connect
(BSS812X5X_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5X_off()));
    QObject::connect
(BSS812X5Z_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5Z_on()));
    QObject::connect
(BSS812X5Z_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5Z_off()));
    QObject::connect
(BSS812X5b_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5b_on()));
    QObject::connect
(BSS812X5b_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5b_off()));
    QObject::connect
(BSS812X5d_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5d_on()));
    QObject::connect
(BSS812X5d_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5d_off()));
    QObject::connect
(BSS812X5f_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5f_on()));
    QObject::connect
(BSS812X5f_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5f_off()));
    QObject::connect
(BSS812X5t_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5t_on()));
    QObject::connect
(BSS812X5t_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5t_off()));
    QObject::connect
(BSS812X5r_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5r_on()));
    QObject::connect
(BSS812X5r_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5r_off()));
    QObject::connect
(BSS812X5v_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5v_on()));
    QObject::connect
(BSS812X5v_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5v_off()));
    QObject::connect
(BSS812X5x_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5x_on()));
    QObject::connect
(BSS812X5x_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5x_off()));
    QObject::connect
(BSS812X5z_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5z_on()));
    QObject::connect
(BSS812X5z_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5z_off()));
    QObject::connect
(BSS812X5BB_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5BB_on()));
    QObject::connect
(BSS812X5BB_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5BB_off()));
    QObject::connect
(BSS812X5DD_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5DD_on()));
    QObject::connect
(BSS812X5DD_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5DD_off()));
    QObject::connect
(BSS812X5FF_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5FF_on()));
    QObject::connect
(BSS812X5FF_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5FF_off()));
    QObject::connect
(vkl_rezerv_torm_on_button, SIGNAL(clicked()), this, SLOT(m_vkl_rezerv_torm_on()));
    QObject::connect
(vkl_rezerv_torm_off_button, SIGNAL(clicked()), this, SLOT(m_vkl_rezerv_torm_off()));
    QObject::connect
(vkl_forsir_torm_on_button, SIGNAL(clicked()), this, SLOT(m_vkl_forsir_torm_on()));
    QObject::connect
(vkl_forsir_torm_off_button, SIGNAL(clicked()), this, SLOT(m_vkl_forsir_torm_off()));
    QObject::connect
(BSS812X5KK_on_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5KK_on()));
    QObject::connect
(BSS812X5KK_off_button, SIGNAL(clicked()), this, SLOT(m_BSS812X5KK_off()));

}
int emergencyalarm_leftpilot_1::logic_leftpilot_1()
{
    if(PRBSS_812 == true)
    {
        ///////////////Yellow lights
        //////////////1
        if (BSS812X5j == true)
        {
            BSS812X6T = true;
            if(PZH812_X5j_b == true)
            {
                PZH812_X5j = false;
            }
            else
            {
                PZH812_X5j = true;
            }
        }
        else
        {
            BSS812X6T = false;
            PZH812_X5j_b = false;
            PZH812_X5j = false;
        }


        if(S1_3364 == true)
        {
            PZH812_X5j_b = true;
        }

        ///////////////Yellow lights
        //////////////2
        if (BSS812X5p == true)
        {
            BSS812X6V = true;
            if(PZH812_X5p_b == true)
            {
                PZH812_X5p = false;
            }
            else
            {
                PZH812_X5p = true;
            }
        }
        else
        {
            BSS812X6V = false;
            PZH812_X5p_b = false;
            PZH812_X5p = false;
        }

        if(S1_3364 == true)
        {
            PZH812_X5p_b = true;
        }

        ///////////////Yellow lights
        //////////////3
        if (BSS812X5HH == true)
        {
            BSS812X6e = true;
            if(PZH812_X5HH_b == true)
            {
                PZH812_X5HH = false;
            }
            else
            {
                PZH812_X5HH = true;
            }
        }
        else
        {
            BSS812X6e = false;
            PZH812_X5HH_b = false;
            PZH812_X5HH = false;
        }

        if(S1_3364 == true)
        {
            PZH812_X5HH_b = true;
        }

        ///////////////Yellow lights
        //////////////4
        if (kren_velik == true)
        {
            BSS812X6j = true;
            if(PZH_kren_velik_b == true)
            {
                PZH_kren_velik = false;
            }
            else
            {
                PZH_kren_velik = true;
            }
        }
        else
        {
            BSS812X6j = false;
            PZH_kren_velik_b = false;
            PZH_kren_velik = false;
        }


        if(S1_3364 == true)
        {
            PZH_kren_velik_b = true;
        }

        ///////////////Yellow lights
        //////////////5
        if (svs_otkaz == true)
        {
            BSS812X6k = true;
            if(PZH_svs_otkaz_b == true)
            {
                PZH_svs_otkaz = false;
            }
            else
            {
                PZH_svs_otkaz = true;
            }
        }
        else
        {
            BSS812X6k = false;
            PZH_svs_otkaz_b = false;
            PZH_svs_otkaz = false;
        }


        if(S1_3364 == true)
        {
            PZH_svs_otkaz_b = true;
        }

        ///////////////Yellow lights
        //////////////6
        if (ins_otkaz == true)
        {
            BSS812X6m = true;
            if(PZH_ins_otkaz_b == true)
            {
                PZH_ins_otkaz = false;
            }
            else
            {
                PZH_ins_otkaz = true;
            }
        }
        else
        {
            BSS812X6m = false;
            PZH_ins_otkaz_b = false;
            PZH_ins_otkaz = false;
        }


        if(S1_3364 == true)
        {
            PZH_ins_otkaz_b = true;
        }

        ///////////////Yellow lights
        //////////////7
        if (alpha_fi_ogrnich == true)
        {
            BSS812X6q = true;
            if(PZH_alpha_fi_ogrnich_b == true)
            {
                PZH_alpha_fi_ogrnich = false;
            }
            else
            {
                PZH_alpha_fi_ogrnich = true;
            }
        }
        else
        {
            BSS812X6q = false;
            PZH_alpha_fi_ogrnich_b = false;
            PZH_alpha_fi_ogrnich = false;
        }


        if(S1_3364 == true)
        {
            PZH_alpha_fi_ogrnich_b = true;
        }

        ///////////////Yellow lights
        //////////////8
        if (nazhmi_rzv_tormz == true)
        {
            BSS812X6n = true;
            if(PZH_nazhmi_rzv_tormz_b == true)
            {
                PZH_nazhmi_rzv_tormz = false;
            }
            else
            {
                PZH_nazhmi_rzv_tormz = true;
            }
        }
        else
        {
            BSS812X6n = false;
            PZH_nazhmi_rzv_tormz_b = false;
            PZH_nazhmi_rzv_tormz = false;
        }


        if(S1_3364 == true)
        {
            PZH_nazhmi_rzv_tormz_b = true;
        }

        //PCSOZHLL toggle
        if( PZH812_X5j == true ||
                PZH812_X5p == true ||
                PZH812_X5HH == true ||
                PZH_kren_velik == true ||
                PZH_alpha_fi_ogrnich == true ||
                PZH_nazhmi_rzv_tormz == true)
        {

            PCSOZHLL_2 = true;
        }
        else
        {

            PCSOZHLL_2 = false;
        }


        ///////////////Red lights_1
        //////////////1
        if (BSS812X5h == true)
        {
            BSS812X6S = true;
            if(PK812_X5h_b == true)
            {
                PK812_X5h = false;
            }
            else
            {
                PK812_X5h = true;
            }
        }
        else
        {
            BSS812X6S = false;
            PK812_X5h_b = false;
            PK812_X5h = false;
        }


        if(S1_3364 == true)
        {
            PK812_X5h_b = true;
        }
        ///////////////Red lights_1
        //////////////2
        if (BSS812X5n == true)
        {
            BSS812X6U = true;
            if(PK812_X5n_b == true)
            {
                PK812_X5n = false;
            }
            else
            {
                PK812_X5n = true;
            }
        }
        else
        {
            BSS812X6U = false;
            PK812_X5n_b = false;
            PK812_X5n = false;
        }


        if(S1_3364 == true)
        {
            PK812_X5n_b = true;
        }
        ///////////////Red lights_1
        //////////////3
        if (V_velika == true)
        {
            BSS812X6g = true;
            if(PK_V_velika_b == true)
            {
                PK_V_velika = false;
            }
            else
            {
                PK_V_velika = true;
            }
        }
        else
        {
            BSS812X6g = false;
            PK_V_velika_b = false;
            PK_V_velika = false;
        }


        if(S1_3364 == true)
        {
            PK_V_velika_b = true;
        }

        ///////////////Red lights_1
        //////////////4
        if (V_mala == true)
        {
            BSS812X6h = true;
            if(PK_V_mala_b == true)
            {
                PK_V_mala = false;
            }
            else
            {
                PK_V_mala = true;
            }
        }
        else
        {
            BSS812X6h = false;
            PK_V_mala_b = false;
            PK_V_mala = false;
        }


        if(S1_3364 == true)
        {
            PK_V_mala_b = true;
        }

        ///////////////Red lights_1
        //////////////5
        if (alpha_py_predel == true)
        {
            BSS812X6i = true;
            if(PK_alpha_py_predel_b == true)
            {
                PK_alpha_py_predel = false;
            }
            else
            {
                PK_alpha_py_predel = true;
            }
        }
        else
        {
            BSS812X6i = false;
            PK_alpha_py_predel_b = false;
            PK_alpha_py_predel = false;
        }


        if(S1_3364 == true)
        {
            PK_alpha_py_predel_b = true;
        }

        // PCSOKLL toggle
        if( PK812_X5h == true ||
                PK812_X5n == true ||
                PK_V_velika == true ||
                PK_V_mala == true ||
                PK_alpha_py_predel == true)
        {
            PCSOKLL_2 = true;
        }
        else
        {
            PCSOKLL_2 = false;
        }

        ///////////////White lights_1
        //////////////1
        if (BSS812X5B == true)
        {
            BSS812X6A = true;
        }
        else
        {
            BSS812X6A = false;
        }

        ///////////////White lights_1
        //////////////2
        if (BSS812X5D == true)
        {
            BSS812X6B = true;
        }
        else
        {
            BSS812X6B = false;
        }

        ///////////////White lights_1
        //////////////3
        if (BSS812X5E == true)
        {
            BSS812X6C = true;
        }
        else
        {
            BSS812X6C = false;
        }

        ///////////////White lights_1
        //////////////4
        if (BSS812X5G == true)
        {
            BSS812X6D = true;
        }
        else
        {
            BSS812X6D = false;
        }

        ///////////////White lights_1
        //////////////5
        if (BSS812X5J == true)
        {
            BSS812X6E = true;
        }
        else
        {
            BSS812X6E = false;
        }

        ///////////////White lights_1
        //////////////6
        if (BSS812X5L == true)
        {
            BSS812X6F = true;
        }
        else
        {
            BSS812X6F = false;
        }

        ///////////////White lights_1
        //////////////7
        if (BSS812X5N == true)
        {
            BSS812X6G = true;
        }
        else
        {
            BSS812X6G = false;
        }

        ///////////////White lights_1
        //////////////8
        if (BSS812X5R == true)
        {
            BSS812X6H = true;
        }
        else
        {
            BSS812X6H = false;
        }

        ///////////////White lights_1
        //////////////9
        if (BSS812X5T == true)
        {
            BSS812X6J = true;
        }
        else
        {
            BSS812X6J = false;
        }

        ///////////////White lights_1
        //////////////10
        if (BSS812X5V == true)
        {
            BSS812X6K = true;
        }
        else
        {
            BSS812X6K = false;
        }

        ///////////////White lights_1
        //////////////11
        if (BSS812X5X == true)
        {
            BSS812X6L = true;
        }
        else
        {
            BSS812X6L = false;
        }

        ///////////////White lights_1
        //////////////12
        if (BSS812X5Z == true && BSS812X5b == true)
        {
            BSS812X6M = true;
        }
        else
        {
            BSS812X6M = false;
        }

        ///////////////White lights_1
        //////////////13
        if (BSS812X5d == true && BSS812X5f == true)
        {
            BSS812X6N = true;
        }
        else
        {
            BSS812X6N = false;
        }

        ///////////////White lights_1
        //////////////14
        if (BSS812X5t == true)
        {
            BSS812X6X = true;
        }
        else
        {
            BSS812X6X = false;
        }

        ///////////////White lights_1
        //////////////15
        if (BSS812X5r == true)
        {
            BSS812X6W = true;
        }
        else
        {
            BSS812X6W = false;
        }

        ///////////////White lights_1
        //////////////16
        if (BSS812X5v == true || BSS812X5x == true)
        {
            BSS812X6Y = true;
        }
        else
        {
            BSS812X6Y = false;
        }

        ///////////////White lights_1
        //////////////17
        if (BSS812X5z == true)
        {
            BSS812X6a = true;
        }
        else
        {
            BSS812X6a = false;
        }

        ///////////////White lights_1
        //////////////18
        if (BSS812X5BB == true)
        {
            BSS812X6b = true;
        }
        else
        {
            BSS812X6b = false;
        }

        ///////////////White lights_1
        //////////////19
        if (BSS812X5DD == true)
        {
            BSS812X6c = true;
        }
        else
        {
            BSS812X6c = false;
        }

        ///////////////White lights_1
        //////////////20
        if (BSS812X5FF == true)
        {
            BSS812X6d = true;
        }
        else
        {
            BSS812X6d = false;
        }

        ///////////////White lights_1
        //////////////21
        if (vkl_rezerv_torm == true)
        {
            BSS812X6p = true;
        }
        else
        {
            BSS812X6p = false;
        }

        ///////////////White lights_1
        //////////////22
        if (vkl_forsir_torm == true)
        {
            BSS812X6r = true;
        }
        else
        {
            BSS812X6r = false;
        }

        ///////////////White lights_1
        //////////////23
        if (BSS812X5KK == true)
        {
            BSS812X6f = true;
        }
        else
        {
            BSS812X6f = false;
        }

        if(PKLLL == true)
        {
            PCSOZHLL = true;
            PCSOKLL = true;
        BSS812X6T = true;
        BSS812X6V = true;
        BSS812X6e = true;
        BSS812X6j = true;
        BSS812X6k = true;
        BSS812X6m = true;
        BSS812X6q = true;
        BSS812X6n = true;
        BSS812X6S = true;
        BSS812X6U = true;
        BSS812X6g = true;
        BSS812X6h = true;
        BSS812X6i = true;
        BSS812X6A = true;
        BSS812X6B = true;
        BSS812X6C = true;
        BSS812X6D = true;
        BSS812X6E = true;
        BSS812X6F = true;
        BSS812X6G = true;
        BSS812X6H = true;
        BSS812X6J = true;
        BSS812X6K = true;
        BSS812X6L = true;
        BSS812X6M = true;
        BSS812X6N = true;
        BSS812X6X = true;
        BSS812X6W = true;
        BSS812X6Y = true;
        BSS812X6a = true;
        BSS812X6b = true;
        BSS812X6c = true;
        BSS812X6d = true;
        BSS812X6p = true;
        BSS812X6r = true;
        BSS812X6f = true;

        }

    }
    else
    {
        BSS812X6T = false;
        BSS812X6V = false;
        BSS812X6e = false;
        BSS812X6j = false;
        BSS812X6k = false;
        BSS812X6m = false;
        BSS812X6q = false;
        BSS812X6n = false;
        BSS812X6S = false;
        BSS812X6U = false;
        BSS812X6g = false;
        BSS812X6h = false;
        BSS812X6i = false;
        BSS812X6A = false;
        BSS812X6B = false;
        BSS812X6C = false;
        BSS812X6D = false;
        BSS812X6E = false;
        BSS812X6F = false;
        BSS812X6G = false;
        BSS812X6H = false;
        BSS812X6J = false;
        BSS812X6K = false;
        BSS812X6L = false;
        BSS812X6M = false;
        BSS812X6N = false;
        BSS812X6X = false;
        BSS812X6W = false;
        BSS812X6Y = false;
        BSS812X6a = false;
        BSS812X6b = false;
        BSS812X6c = false;
        BSS812X6d = false;
        BSS812X6p = false;
        BSS812X6r = false;
        BSS812X6f = false;
    PZH812_X5j = false;
    PZH812_X5p = false;
    PZH812_X5HH = false;
    PZH_kren_velik = false;
    PZH_alpha_fi_ogrnich = false;
    PZH_nazhmi_rzv_tormz = false;
    //yellow block clue
    PZH812_X5j_b = false;
    PZH812_X5p_b = false;
    PZH812_X5HH_b = false;
    PZH_kren_velik_b = false;
    PZH_alpha_fi_ogrnich_b = false;
    PZH_nazhmi_rzv_tormz_b = false;
    //red input clue
    PK812_X5h = false;
    PK812_X5n = false;
    PK_V_velika = false;
    PK_V_mala = false;
    PK_alpha_py_predel = false;
    //red block clue
    PK812_X5h_b = false;
    PK812_X5n_b = false;
    PK_V_velika_b = false;
    PK_V_mala_b = false;
    PK_alpha_py_predel_b = false;
    //white input clue
    PB812_X5B = false;
    PB812_X5D = false;
    PB812_X5E = false;
    PB812_X5G = false;
    PB812_X5J = false;
    PB812_X5L = false;
    PB812_X5N = false;
    PB812_X5R = false;
    PB812_X5T = false;
    PB812_X5V = false;
    PB812_X5X = false;
    PB812_X5Z = false;
    PB812_X5b = false;
    PB812_X5d = false;
    PB812_X5f = false;
    PB812_X5t = false;
    PB812_X5r = false;
    PB812_X5v = false;
    PB812_X5x = false;
    PB812_X5z = false;
    PB812_X5BB = false;
    PB812_X5DD = false;
    PB812_X5FF = false;
    PB_vkl_rezerv_torm = false;
    PB_vkl_forsir_torm = false;
    PB812_X5KK = false;
    //white block clue
    PB812_X5B_b = false;
    PB812_X5D_b = false;
    PB812_X5E_b = false;
    PB812_X5G_b = false;
    PB812_X5J_b = false;
    PB812_X5L_b = false;
    PB812_X5N_b = false;
    PB812_X5R_b = false;
    PB812_X5T_b = false;
    PB812_X5V_b = false;
    PB812_X5X_b = false;
    PB812_X5Z_b = false;
    PB812_X5b_b = false;
    PB812_X5d_b = false;
    PB812_X5f_b = false;
    PB812_X5t_b = false;
    PB812_X5r_b = false;
    PB812_X5v_b = false;
    PB812_X5x_b = false;
    PB812_X5z_b = false;
    PB812_X5BB_b = false;
    PB812_X5DD_b = false;
    PB812_X5FF_b = false;
    PB_vkl_rezerv_torm_b = false;
    PB_vkl_forsir_torm_b = false;
    PB812_X5KK_b = false;


    }

    //end logic

    //showing values
BSS812X5j_label->setText
("BSS812X5j = " + QString::number(BSS812X5j));
BSS812X5p_label->setText
("BSS812X5p = " + QString::number(BSS812X5p));
BSS812X5HH_label->setText
("BSS812X5HH = " + QString::number(BSS812X5HH));
BSS812X5HH_label->setText
("BSS812X5HH = " + QString::number(BSS812X5HH));
kren_velik_label->setText
("kren_velik = " + QString::number(kren_velik));
alpha_fi_ogrnich_label->setText
("alpha_fi_ogrnich = " + QString::number(alpha_fi_ogrnich));
nazhmi_rzv_tormz_label->setText
("nazhmi_rzv_tormz = " + QString::number(nazhmi_rzv_tormz));
BSS812X6T_label->setText
("BSS812X6T = " + QString::number(BSS812X6T));
BSS812X6V_label->setText
("BSS812X6V = " + QString::number(BSS812X6V));
BSS812X6e_label->setText
("BSS812X6e = " + QString::number(BSS812X6e));
BSS812X6j_label->setText
("BSS812X6j = " + QString::number(BSS812X6j));
BSS812X6k_label->setText
("BSS812X6k = " + QString::number(BSS812X6k));
BSS812X6m_label->setText
("BSS812X6m = " + QString::number(BSS812X6m));
BSS812X6q_label->setText
("BSS812X6q = " + QString::number(BSS812X6q));
BSS812X6n_label->setText
("BSS812X6n = " + QString::number(BSS812X6n));
BSS812X5h_label->setText
("BSS812X5h = " + QString::number(BSS812X5h));
BSS812X5n_label->setText
("BSS812X5n = " + QString::number(BSS812X5n));
V_velika_label->setText
("V_velika = " + QString::number(V_velika));
V_mala_label->setText
("V_mala = " + QString::number(V_mala));
alpha_py_predel_label->setText
("alpha_py_predel = " + QString::number(alpha_py_predel));
BSS812X6S_label->setText
("BSS812X6S = " + QString::number(BSS812X6S));
BSS812X6U_label->setText
("BSS812X6U = " + QString::number(BSS812X6U));
BSS812X6g_label->setText
("BSS812X6g = " + QString::number(BSS812X6g));
BSS812X6h_label->setText
("BSS812X6h = " + QString::number(BSS812X6h));
BSS812X6i_label->setText
("BSS812X6i = " + QString::number(BSS812X6i));
BSS812X5B_label->setText
("BSS812X5B = " + QString::number(BSS812X5B));
BSS812X5D_label->setText
("BSS812X5D = " + QString::number(BSS812X5D));
BSS812X5E_label->setText
("BSS812X5E = " + QString::number(BSS812X5E));
BSS812X5G_label->setText
("BSS812X5G = " + QString::number(BSS812X5G));
BSS812X5J_label->setText
("BSS812X5J = " + QString::number(BSS812X5J));
BSS812X5L_label->setText
("BSS812X5L = " + QString::number(BSS812X5L));
BSS812X5N_label->setText
("BSS812X5N = " + QString::number(BSS812X5N));
BSS812X5R_label->setText
("BSS812X5R = " + QString::number(BSS812X5R));
BSS812X5T_label->setText
("BSS812X5T = " + QString::number(BSS812X5T));
BSS812X5V_label->setText
("BSS812X5V = " + QString::number(BSS812X5V));
BSS812X5X_label->setText
("BSS812X5X = " + QString::number(BSS812X5X));
BSS812X5Z_label->setText
("BSS812X5Z = " + QString::number(BSS812X5Z));
BSS812X5b_label->setText
("BSS812X5b = " + QString::number(BSS812X5b));
BSS812X5d_label->setText
("BSS812X5d = " + QString::number(BSS812X5d));
BSS812X5f_label->setText
("BSS812X5f = " + QString::number(BSS812X5f));
BSS812X5t_label->setText
("BSS812X5t = " + QString::number(BSS812X5t));
BSS812X5r_label->setText
("BSS812X5r = " + QString::number(BSS812X5r));
BSS812X5v_label->setText
("BSS812X5v = " + QString::number(BSS812X5v));
BSS812X5x_label->setText
("BSS812X5x = " + QString::number(BSS812X5x));
BSS812X5z_label->setText
("BSS812X5z = " + QString::number(BSS812X5z));
BSS812X5BB_label->setText
("BSS812X5BB = " + QString::number(BSS812X5BB));
BSS812X5DD_label->setText
("BSS812X5DD = " + QString::number(BSS812X5DD));
BSS812X5FF_label->setText
("BSS812X5FF = " + QString::number(BSS812X5FF));
vkl_rezerv_torm_label->setText
("vkl_rezerv_torm = " + QString::number(vkl_rezerv_torm));
vkl_forsir_torm_label->setText
("vkl_forsir_torm = " + QString::number(vkl_forsir_torm));
BSS812X5KK_label->setText
("BSS812X5KK = " + QString::number(BSS812X5KK));
BSS812X6A_label->setText
("BSS812X6A = " + QString::number(BSS812X6A));
BSS812X6B_label->setText
("BSS812X6B = " + QString::number(BSS812X6B));
BSS812X6C_label->setText
("BSS812X6C = " + QString::number(BSS812X6C));
BSS812X6D_label->setText
("BSS812X6D = " + QString::number(BSS812X6D));
BSS812X6E_label->setText
("BSS812X6E = " + QString::number(BSS812X6E));
BSS812X6F_label->setText
("BSS812X6F = " + QString::number(BSS812X6F));
BSS812X6G_label->setText
("BSS812X6G = " + QString::number(BSS812X6G));
BSS812X6H_label->setText
("BSS812X6H = " + QString::number(BSS812X6H));
BSS812X6J_label->setText
("BSS812X6J = " + QString::number(BSS812X6J));
BSS812X6K_label->setText
("BSS812X6K = " + QString::number(BSS812X6K));
BSS812X6L_label->setText
("BSS812X6L = " + QString::number(BSS812X6L));
BSS812X6M_label->setText
("BSS812X6M = " + QString::number(BSS812X6M));
BSS812X6N_label->setText
("BSS812X6N = " + QString::number(BSS812X6N));
BSS812X6X_label->setText
("BSS812X6X = " + QString::number(BSS812X6X));
BSS812X6W_label->setText
("BSS812X6W = " + QString::number(BSS812X6W));
BSS812X6Y_label->setText
("BSS812X6Y = " + QString::number(BSS812X6Y));
BSS812X6a_label->setText
("BSS812X6a = " + QString::number(BSS812X6a));
BSS812X6b_label->setText
("BSS812X6b = " + QString::number(BSS812X6b));
BSS812X6c_label->setText
("BSS812X6c = " + QString::number(BSS812X6c));
BSS812X6d_label->setText
("BSS812X6d = " + QString::number(BSS812X6d));
BSS812X6p_label->setText
("BSS812X6p = " + QString::number(BSS812X6p));
BSS812X6r_label->setText
("BSS812X6r = " + QString::number(BSS812X6r));
BSS812X6f_label->setText
("BSS812X6f = " + QString::number(BSS812X6f));

    //layout setting
    QVBoxLayout *layout_leftpilot_1_labels = new QVBoxLayout;
    QVBoxLayout *layout_leftpilot_1_labels_1 = new QVBoxLayout;
    QVBoxLayout *layout_leftpilot_1_buttons = new QVBoxLayout;
    QVBoxLayout *layout_leftpilot_1_buttons_1 = new QVBoxLayout;
    QHBoxLayout *layout_leftpilot_1_main = new QHBoxLayout;

    //labels
    layout_leftpilot_1_labels_1->addWidget(BSS812X5j_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5p_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5HH_label);
    layout_leftpilot_1_labels_1->addWidget(kren_velik_label);
    layout_leftpilot_1_labels_1->addWidget(alpha_fi_ogrnich_label);
    layout_leftpilot_1_labels_1->addWidget(nazhmi_rzv_tormz_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6T_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6V_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6e_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6j_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6k_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6m_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6q_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6n_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5h_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5n_label);
    layout_leftpilot_1_labels_1->addWidget(V_velika_label);
    layout_leftpilot_1_labels_1->addWidget(V_mala_label);
    layout_leftpilot_1_labels_1->addWidget(alpha_py_predel_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6S_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6U_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6g_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6h_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X6i_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5B_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5D_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5E_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5G_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5J_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5L_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5N_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5R_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5T_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5V_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5X_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5Z_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5b_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5d_label);
    layout_leftpilot_1_labels_1->addWidget(BSS812X5f_label);
    layout_leftpilot_1_labels->addWidget(BSS812X5t_label);
    layout_leftpilot_1_labels->addWidget(BSS812X5r_label);
    layout_leftpilot_1_labels->addWidget(BSS812X5v_label);
    layout_leftpilot_1_labels->addWidget(BSS812X5x_label);
    layout_leftpilot_1_labels->addWidget(BSS812X5z_label);
    layout_leftpilot_1_labels->addWidget(BSS812X5BB_label);
    layout_leftpilot_1_labels->addWidget(BSS812X5DD_label);
    layout_leftpilot_1_labels->addWidget(BSS812X5FF_label);
    layout_leftpilot_1_labels->addWidget(vkl_rezerv_torm_label);
    layout_leftpilot_1_labels->addWidget(vkl_forsir_torm_label);
    layout_leftpilot_1_labels->addWidget(BSS812X5KK_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6A_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6B_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6C_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6D_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6E_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6F_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6G_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6H_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6J_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6K_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6L_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6M_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6N_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6X_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6W_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6Y_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6a_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6b_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6c_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6d_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6p_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6r_label);
    layout_leftpilot_1_labels->addWidget(BSS812X6f_label);

    //Buttons

    layout_leftpilot_1_buttons_1->addWidget(BSS812X5j_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5j_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5p_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5p_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5HH_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5HH_off_button);
    layout_leftpilot_1_buttons_1->addWidget(kren_velik_on_button);
    layout_leftpilot_1_buttons_1->addWidget(kren_velik_off_button);
    layout_leftpilot_1_buttons_1->addWidget(alpha_fi_ogrnich_on_button);
    layout_leftpilot_1_buttons_1->addWidget(alpha_fi_ogrnich_off_button);
    layout_leftpilot_1_buttons_1->addWidget(nazhmi_rzv_tormz_on_button);
    layout_leftpilot_1_buttons_1->addWidget(nazhmi_rzv_tormz_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5h_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5h_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5n_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5n_off_button);
    layout_leftpilot_1_buttons_1->addWidget(V_velika_on_button);
    layout_leftpilot_1_buttons_1->addWidget(V_velika_off_button);
    layout_leftpilot_1_buttons_1->addWidget(V_mala_on_button);
    layout_leftpilot_1_buttons_1->addWidget(V_mala_off_button);
    layout_leftpilot_1_buttons_1->addWidget(alpha_py_predel_on_button);
    layout_leftpilot_1_buttons_1->addWidget(alpha_py_predel_off_button);

    layout_leftpilot_1_buttons_1->addWidget(BSS812X5B_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5B_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5D_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5D_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5E_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5E_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5G_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5G_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5J_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5J_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5L_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5L_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5N_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5N_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5R_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5R_off_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5T_on_button);
    layout_leftpilot_1_buttons_1->addWidget(BSS812X5T_off_button);

    layout_leftpilot_1_buttons->addWidget(BSS812X5V_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5V_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5X_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5X_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5Z_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5Z_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5b_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5b_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5d_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5d_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5f_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5f_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5t_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5t_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5r_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5r_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5v_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5v_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5x_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5x_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5z_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5z_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5BB_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5BB_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5DD_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5DD_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5FF_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5FF_off_button);
    layout_leftpilot_1_buttons->addWidget(vkl_rezerv_torm_on_button);
    layout_leftpilot_1_buttons->addWidget(vkl_rezerv_torm_off_button);
    layout_leftpilot_1_buttons->addWidget(vkl_forsir_torm_on_button);
    layout_leftpilot_1_buttons->addWidget(vkl_forsir_torm_off_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5KK_on_button);
    layout_leftpilot_1_buttons->addWidget(BSS812X5KK_off_button);


    layout_leftpilot_1_main->addLayout(layout_leftpilot_1_labels);
    layout_leftpilot_1_main->addLayout(layout_leftpilot_1_labels_1);
    layout_leftpilot_1_main->addLayout(layout_leftpilot_1_buttons);
    layout_leftpilot_1_main->addLayout(layout_leftpilot_1_buttons_1);
    wgt_leftpilot_1.setLayout(layout_leftpilot_1_main);
    wgt_leftpilot_1.setFixedWidth(500);
    wgt_leftpilot_1.setFixedHeight(1400);
}

int emergencyalarm_leftpilot_1::m_BSS812X5j_on()
{
    BSS812X5j = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5j_off()
{
    BSS812X5j = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5p_on()
{
    BSS812X5p = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5p_off()
{
    BSS812X5p = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5HH_on()
{
    BSS812X5HH = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5HH_off()
{
    BSS812X5HH = false;
}
int emergencyalarm_leftpilot_1::m_kren_velik_on()
{
    kren_velik = true;
}
int emergencyalarm_leftpilot_1::m_kren_velik_off()
{
    kren_velik = false;
}
int emergencyalarm_leftpilot_1::m_alpha_fi_ogrnich_on()
{
    alpha_fi_ogrnich = true;
}
int emergencyalarm_leftpilot_1::m_alpha_fi_ogrnich_off()
{
    alpha_fi_ogrnich = false;
}
int emergencyalarm_leftpilot_1::m_nazhmi_rzv_tormz_on()
{
    nazhmi_rzv_tormz = true;
}
int emergencyalarm_leftpilot_1::m_nazhmi_rzv_tormz_off()
{
    nazhmi_rzv_tormz = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5h_on()
{
    BSS812X5h = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5h_off()
{
    BSS812X5h = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5n_on()
{
    BSS812X5n = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5n_off()
{
    BSS812X5n = false;
}
int emergencyalarm_leftpilot_1::m_V_velika_on()
{
    V_velika = true;
}
int emergencyalarm_leftpilot_1::m_V_velika_off()
{
    V_velika = false;
}
int emergencyalarm_leftpilot_1::m_V_mala_on()
{
    V_mala = true;
}
int emergencyalarm_leftpilot_1::m_V_mala_off()
{
    V_mala = false;
}
int emergencyalarm_leftpilot_1::m_alpha_py_predel_on()
{
    alpha_py_predel = true;
}
int emergencyalarm_leftpilot_1::m_alpha_py_predel_off()
{
    alpha_py_predel = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5B_on()
{
    BSS812X5B = true;

}
int emergencyalarm_leftpilot_1::m_BSS812X5B_off()
{
    BSS812X5B = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5D_on()
{
    BSS812X5D = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5D_off()
{
    BSS812X5D = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5E_on()
{
    BSS812X5E = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5E_off()
{
    BSS812X5E = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5G_on()
{
    BSS812X5G = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5G_off()
{
    BSS812X5G = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5J_on()
{
    BSS812X5J = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5J_off()
{
    BSS812X5J = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5L_on()
{
    BSS812X5L = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5L_off()
{
    BSS812X5L = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5N_on()
{
    BSS812X5N = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5N_off()
{
    BSS812X5N = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5R_on()
{
    BSS812X5R = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5R_off()
{
    BSS812X5R = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5T_on()
{
    BSS812X5T = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5T_off()
{
    BSS812X5T = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5V_on()
{
    BSS812X5V = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5V_off()
{
    BSS812X5V = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5X_on()
{
    BSS812X5X = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5X_off()
{
    BSS812X5X = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5Z_on()
{
    BSS812X5Z = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5Z_off()
{
    BSS812X5Z = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5b_on()
{
    BSS812X5b = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5b_off()
{
    BSS812X5b = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5d_on()
{
    BSS812X5d = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5d_off()
{
    BSS812X5d = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5f_on()
{
    BSS812X5f = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5f_off()
{
    BSS812X5f = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5t_on()
{
    BSS812X5t = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5t_off()
{
    BSS812X5t = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5r_on()
{
    BSS812X5r = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5r_off()
{
    BSS812X5r = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5v_on()
{
    BSS812X5v = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5v_off()
{
    BSS812X5v = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5x_on()
{
    BSS812X5x = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5x_off()
{
    BSS812X5x = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5z_on()
{
    BSS812X5z = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5z_off()
{
    BSS812X5z = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5BB_on()
{
    BSS812X5BB = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5BB_off()
{
    BSS812X5BB = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5DD_on()
{
    BSS812X5DD = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5DD_off()
{
    BSS812X5DD = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5FF_on()
{
    BSS812X5FF = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5FF_off()
{
    BSS812X5FF = false;
}
int emergencyalarm_leftpilot_1::m_vkl_rezerv_torm_on()
{
    vkl_rezerv_torm = true;
}
int emergencyalarm_leftpilot_1::m_vkl_rezerv_torm_off()
{
    vkl_rezerv_torm = false;
}
int emergencyalarm_leftpilot_1::m_vkl_forsir_torm_on()
{
    vkl_forsir_torm = true;
}
int emergencyalarm_leftpilot_1::m_vkl_forsir_torm_off()
{
    vkl_forsir_torm = false;
}
int emergencyalarm_leftpilot_1::m_BSS812X5KK_on()
{
    BSS812X5KK = true;
}
int emergencyalarm_leftpilot_1::m_BSS812X5KK_off()
{
    BSS812X5KK = false;
}
