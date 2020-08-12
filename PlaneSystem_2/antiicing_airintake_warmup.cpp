#include "antiicing_airintake_warmup.h"
#include "QtWidgets"

bool
K22_3020,
K29_3020,
K40_3020,
K46_3020,
K56_3020,
K57_3020,
K58_3020,
K59_3020,
POB1dv1,
POB1dv2,
POB1dv3,
POB1dv4,
POB2dv1,
POB2dv2,
POB2dv3,
POB2dv4,
POB3dv1,
POB3dv2,
POB3dv3,
POB3dv4,
PONdv1,
PONdv2,
PONdv3,
PONdv4,
PVOVNA1,
PVOVNA2,
PVOVNA3,
PVOVNA4,
BSS824X1z,
BSS824X1BB,
BSS824X1DD,
BSS824X1FF,
BSS825PR ;

int
Counter_warmup,
POV3dv1,
POV3dv2,
POV3dv3,
POV3dv4,
S3_3080,
S4_3080,
S5_3080,
S6_3080;

double
Ush1l,
Ush2l,
Ush1p,
Ush2p;

antiicing_airintake_warmup::antiicing_airintake_warmup(QWidget* pwgt)
    : QWidget(pwgt)
{
    QWidget wgt;
    K22_3020 = 0;
    K29_3020 = 0;
    K40_3020 = 0;
    K46_3020 = 0;
    K56_3020 = 0;
    K57_3020 = 0;
    K58_3020 = 0;
    K59_3020 = 0;
    POB1dv1 = 0;
    POB1dv2 = 0;
    POB1dv3 = 0;
    POB1dv4 = 0;
    POB2dv1 = 0;
    POB2dv2 = 0;
    POB2dv3 = 0;
    POB2dv4 = 0;
    POB3dv1 = 0;
    POB3dv2 = 0;
    POB3dv3 = 0;
    POB3dv4 = 0;
    PONdv1 = 0;
    PONdv2 = 0;
    PONdv3 = 0;
    PONdv4 = 0;
    PVOVNA1 = 0;
    PVOVNA2 = 0;
    PVOVNA3 = 0;
    PVOVNA4 = 0;
    BSS824X1z = 0;
    BSS824X1BB = 0;
    BSS824X1DD = 0;
    BSS824X1FF = 0;
    BSS825PR = 0;
    Counter_warmup = 0;
    POV3dv1 = 0;
    POV3dv2 = 0;
    POV3dv3 = 0;
    POV3dv4 = 0;
    S3_3080 = 0;
    S4_3080 = 0;
    S5_3080 = 0;
    S6_3080 = 0;
    Ush1l = 0.0;
    Ush2l = 0.0;
    Ush1p = 0.0;
    Ush2p = 0.0;

    //Labels
    K22_3020_label = new QLabel;
    K29_3020_label = new QLabel;
    K40_3020_label = new QLabel;
    K46_3020_label = new QLabel;
    K56_3020_label = new QLabel;
    K57_3020_label = new QLabel;
    K58_3020_label = new QLabel;
    K59_3020_label = new QLabel;
    POB1dv1_label = new QLabel;
    POB1dv2_label = new QLabel;
    POB1dv3_label = new QLabel;
    POB1dv4_label = new QLabel;
    POB2dv1_label = new QLabel;
    POB2dv2_label = new QLabel;
    POB2dv3_label = new QLabel;
    POB2dv4_label = new QLabel;
    POB3dv1_label = new QLabel;
    POB3dv2_label = new QLabel;
    POB3dv3_label = new QLabel;
    POB3dv4_label = new QLabel;
    PONdv1_label = new QLabel;
    PONdv2_label = new QLabel;
    PONdv3_label = new QLabel;
    PONdv4_label = new QLabel;
    PVOVNA1_label = new QLabel;
    PVOVNA2_label = new QLabel;
    PVOVNA3_label = new QLabel;
    PVOVNA4_label = new QLabel;
    BSS824X1z_label = new QLabel;
    BSS824X1BB_label = new QLabel;
    BSS824X1DD_label = new QLabel;
    BSS824X1FF_label = new QLabel;
    BSS825PR_label = new QLabel;;
    Counter_warmup_label = new QLabel;
    POV3dv1_label = new QLabel;
    POV3dv2_label = new QLabel;
    POV3dv3_label = new QLabel;
    POV3dv4_label = new QLabel;
    S3_3080_label = new QLabel;
    S4_3080_label = new QLabel;
    S5_3080_label = new QLabel;
    S6_3080_label = new QLabel;
    Ush1l_label = new QLabel;
    Ush2l_label = new QLabel;
    Ush1p_label = new QLabel;
    Ush2p_label = new QLabel;
}
int antiicing_airintake_warmup::logic_warmup()
{
    // K56 toggle
    if (F34_3020 == true)
    {

        if(K14_3020 == false &&
                K16_3020 == false &&
                K19_3020 == false &&
                K20_3020 == false)
        {
            K56_3020 = false;
        }
        else
        {
            K56_3020 = true;
        }

    }
    else
    {
        K56_3020 = false;
    }

    K22_3020 = false;

    // K57 toggle
    if (F320_3020 == true)
    {

        if(K21_3020 == false &&
                K23_3020 == false &&
                K25_3020 == false &&
                K28_3020 == false)
        {
            K57_3020 = false;
        }
        else
        {
            K57_3020 = true;
        }

    }
    else
    {
        K57_3020 = false;
    }

    K29_3020 = false;

    // K58 toggle
    if (F330_3020 == true)
    {

        if(K30_3020 == false &&
                K32_3020 == false &&
                K35_3020 == false &&
                K36_3020 == false)
        {
            K58_3020 = false;
        }
        else
        {
            K58_3020 = true;
        }

    }
    else
    {
        K58_3020 = false;
    }

    K40_3020 = false;

    // K59 toggle
    if (F340_3020 == true)
    {

        if(K37_3020 == false &&
                K39_3020 == false &&
                K41_3020 == false &&
                K44_3020 == false)
        {
            K59_3020 = false;
        }
        else
        {
            K59_3020 = true;
        }

    }
    else
    {
        K59_3020 = false;
    }

    K46_3020 = false;

    //K22 delaying
    if (F32_3020 == true && K56_3020 == false)
    {
        Counter_warmup++;

        if(TICK * Counter_warmup > 1000)
        {
            K22_3020 = true;
            Counter_warmup = 0;
        }
        else
        {
            K22_3020 = false;
        }

    }
    else
    {
        Counter_warmup = 0;
    }

    //K29 delaying
    if (F319_3020 == true && K57_3020 == false)
    {
        Counter_warmup++;

        if(TICK * Counter_warmup > 1000)
        {
            K29_3020 = true;
            Counter_warmup = 0;
        }
        else
        {
            K29_3020 = false;
        }

    }
    else
    {
        Counter_warmup = 0;
    }

    //K40 delaying
    if (F356_3020 == true && K58_3020 == false)
    {
        Counter_warmup++;

        if(TICK * Counter_warmup > 1000)
        {
            K40_3020 = true;
            Counter_warmup = 0;
        }
        else
        {
            K40_3020 = false;
        }

    }
    else
    {
        Counter_warmup = 0;
    }

    //K46 delaying
    if (F353_3020 == true && K59_3020 == false)
    {
        Counter_warmup++;

        if(TICK * Counter_warmup > 1000)
        {
            K46_3020 = true;
        }
        else
        {
            K46_3020 = false;
        }

    }
    else
    {
        Counter_warmup = 0;
    }

    //BSS824X1z toggle
    if (Usho1p >= 18.0 && K22_3020 == true)
    {
        BSS824X1z = true;
    }
    //BSS824X1BB toggle
    if (Usho1p >= 18.0 && K29_3020 == true)
    {
        BSS824X1BB = true;
    }
    //BSS824X1DD toggle
    if (Usho1p >= 18.0 && K40_3020 == true)
    {
        BSS824X1DD = true;
    }
    //BSS824X1FF toggle
    if (Usho1p >= 18.0 && K46_3020 == true)
    {
        BSS824X1FF = true;
    }

    //PONdv1, POB1dv1, POB2dv1, POB3dv1 toggle
    if (Ushpl >= 106.0)
    {
        if (K14_3020)
        {
            PONdv1 = true;
        }
        else
        {
            PONdv1 = false;
        }

        if (K16_3020)
        {
            POB1dv1 = true;
        }
        else
        {
            POB1dv1 = false;
        }

        if (K19_3020)
        {
            POB2dv1 = true;
        }
        else
        {
            POB2dv1 = false;
        }

        if (K20_3020)
        {
            POB3dv1 = true;
        }
        else
        {
            POB3dv1 = false;
        }
    }
    else
    {
        PONdv1 = false;
        POB1dv1 = false;
        POB2dv1 = true;
        POB3dv1 = true;
        if (Ush1l >= 18.0 && S3_3080)
        {
            PVOVNA1 = true;
        }
        else
        {
            PVOVNA1 = false;
        }
    }
    //PONdv2, POB1dv2, POB2dv2, POB3dv2 toggle
    if (Ushpl >= 106.0)
    {
        if (K21_3020)
        {
            PONdv2 = true;
        }
        else
        {
            PONdv2 = false;
        }

        if (K32_3020)
        {
            POB1dv2 = true;
        }
        else
        {
            POB1dv2 = false;
        }

        if (K35_3020)
        {
            POB2dv2 = true;
        }
        else
        {
            POB2dv2 = false;
        }

        if (K36_3020)
        {
            POB3dv2 = true;
        }
        else
        {
            POB3dv2 = false;
        }
    }
    else
    {
        PONdv2 = false;
        POB1dv2 = false;
        POB2dv2 = true;
        POB3dv2 = true;
        if (Ush1p >= 18.0 && S4_3080)
        {
            PVOVNA2 = true;
        }
        else
        {
            PVOVNA2 = false;
        }
    }
    //PONdv3, POB1dv3, POB2dv3, POB3dv3 toggle
    if (Ushpp >= 106.0)
    {
        if (K30_3020)
        {
            PONdv3 = true;
        }
        else
        {
            PONdv3 = false;
        }

        if (K23_3020)
        {
            POB1dv3 = true;
        }
        else
        {
            POB1dv3 = false;
        }

        if (K25_3020)
        {
            POB2dv3 = true;
        }
        else
        {
            POB2dv3 = false;
        }

        if (K28_3020)
        {
            POB3dv3 = true;
        }
        else
        {
            POB3dv3 = false;
        }
    }
    else
    {
        PONdv3 = false;
        POB1dv3 = false;
        POB2dv3 = true;
        POB3dv3 = true;
        if (Ush1p >= 18.0 && S5_3080)
        {
            PVOVNA3 = true;
        }
        else
        {
            PVOVNA3 = false;
        }
    }
    //PONdv4, POB1dv4, POB2dv4, POB3dv4 toggle
    if (Ushpp >= 106.0)
    {
        if (K37_3020)
        {
            PONdv4 = true;
        }
        else
        {
            PONdv4 = false;
        }

        if (K39_3020)
        {
            POB1dv4 = true;
        }
        else
        {
            POB1dv4 = false;
        }

        if (K41_3020)
        {
            POB2dv4 = true;
        }
        else
        {
            POB2dv4 = false;
        }

        if (K44_3020)
        {
            POB3dv4 = true;
        }
        else
        {
            POB3dv4 = false;
        }
    }
    else
    {
        PONdv4 = false;
        POB1dv4 = false;
        POB2dv4 = true;
        POB3dv4 = true;
        if (Ush2p >= 18.0 && S5_3080)
        {
            PVOVNA4 = true;
        }
        else
        {
            PVOVNA4 = false;
        }
    }

    if (Usho1p >= 18.0 && F110_3020 == true)
    {
        BSS825PR = true;
    }
    else
    {
        BSS825PR = false;
    }

    POV3dv1 = (PONdv1 * 35) + (POB1dv1 * 40) +
        (POB2dv1 * 40) + (POB3dv1 * 30);

    POV3dv2 = (PONdv2 * 35) + (POB1dv2 * 40) +
        (POB2dv2 * 40) + (POB3dv2 * 30);

    POV3dv3 = (PONdv3 * 35) + (POB1dv3 * 40) +
        (POB2dv3 * 40) + (POB3dv3 * 30);

    POV3dv4 = (PONdv4 * 35) + (POB1dv4 * 40) +
        (POB2dv4 * 40) + (POB3dv4 * 30);

    //showing values

    K22_3020_label->setText("K22_3020 = " + QString::number(K22_3020));
    K29_3020_label->setText("K29_3020 = " + QString::number(K29_3020));
    K40_3020_label->setText("K40_3020" + QString::number(K40_3020));
    K46_3020_label->setText("K46_3020" + QString::number(K46_3020));
    K56_3020_label->setText("K56_3020 = " + QString::number(K56_3020));
    K57_3020_label->setText("K57_3020 = " + QString::number(K57_3020));
    K58_3020_label->setText("K58_3020 = " + QString::number(K58_3020));
    K59_3020_label->setText("K59_3020 = " + QString::number(K59_3020));
    POB1dv1_label->setText("POB1dv1 = " + QString::number(POB1dv1));
    POB1dv2_label->setText("POB1dv2 = " + QString::number(POB1dv2));
    POB1dv3_label->setText("POB1dv3 = " + QString::number(POB1dv3));
    POB1dv4_label->setText("POB1dv4 = " + QString::number(POB1dv4));
    POB2dv1_label->setText("POB2dv1 = " + QString::number(POB2dv1));
    POB2dv2_label->setText("POB2dv2 = " + QString::number(POB2dv2));
    POB2dv3_label->setText("POB2dv3 = " + QString::number(POB2dv3));
    POB2dv4_label->setText("POB2dv4 = " + QString::number(POB2dv4));
    POB3dv1_label->setText("POB3dv1 = " + QString::number(POB3dv1));
    POB3dv2_label->setText("POB3dv2 = " + QString::number(POB3dv2));
    POB3dv3_label->setText("POB3dv3 = " + QString::number(POB3dv3));
    POB3dv4_label->setText("POB3dv4 = " + QString::number(POB3dv4));
    PONdv1_label->setText("PONdv1 = " + QString::number(PONdv1));
    PONdv2_label->setText("PONdv2 = " + QString::number(PONdv2));
    PONdv3_label->setText("PONdv3 = " + QString::number(PONdv3));
    PONdv4_label->setText("PONdv4 = " + QString::number(PONdv4));
    PVOVNA1_label->setText("PVOVNA1 = " + QString::number(PVOVNA1));
    PVOVNA2_label->setText("PVOVNA2 = " + QString::number(PVOVNA2));
    PVOVNA3_label->setText("PVOVNA3 = " + QString::number(PVOVNA3));
    PVOVNA4_label->setText("PVOVNA4 = " + QString::number(PVOVNA4));
    BSS824X1z_label->setText("BSS824X1z = " + QString::number(BSS824X1z));
    BSS824X1BB_label->setText("BSS824X1BB = " + QString::number(BSS824X1BB));
    BSS824X1DD_label->setText("BSS824X1DD = " + QString::number(BSS824X1DD));
    BSS824X1FF_label->setText("BSS824X1FF = " + QString::number(BSS824X1FF));
    BSS825PR_label->setText("BSS825PR = " + QString::number(BSS825PR));;
    Counter_warmup_label->setText("Counter_warmup = " + QString::number(Counter_warmup));
    POV3dv1_label->setText("POV3dv1 = " + QString::number(POV3dv1));
    POV3dv2_label->setText("POV3dv2 = " + QString::number(POV3dv2));
    POV3dv3_label->setText("POV3dv3 = " + QString::number(POV3dv3));
    POV3dv4_label->setText("POV3dv4 = " + QString::number(POV3dv4));
    S3_3080_label->setText("S3_3080 = " + QString::number(S3_3080));
    S4_3080_label->setText("S4_3080 = " + QString::number(S4_3080));
    S5_3080_label->setText("S5_3080 = " + QString::number(S5_3080));
    S6_3080_label->setText("S6_3080 = " + QString::number(S6_3080));
    Ush1l_label->setText("Ush1l = " + QString::number(Ush1l));
    Ush2l_label->setText("Ush2l = " + QString::number(Ush2l));
    Ush1p_label->setText("Ush1p = " + QString::number(Ush1p));
    Ush2p_label->setText("Ush2p = " + QString::number(Ush2p));

    //layout setting

    QVBoxLayout *layout_airintake_warmup_labels = new QVBoxLayout;
    QHBoxLayout *layout_airintake_warmup_main = new QHBoxLayout;

    layout_airintake_warmup_labels->addWidget(K22_3020_label);
    layout_airintake_warmup_labels->addWidget(K29_3020_label);
    layout_airintake_warmup_labels->addWidget(K40_3020_label);
    layout_airintake_warmup_labels->addWidget(K46_3020_label);
    layout_airintake_warmup_labels->addWidget(K56_3020_label);
    layout_airintake_warmup_labels->addWidget(K57_3020_label);
    layout_airintake_warmup_labels->addWidget(K58_3020_label);
    layout_airintake_warmup_labels->addWidget(K59_3020_label);
    layout_airintake_warmup_labels->addWidget(POB1dv1_label);
    layout_airintake_warmup_labels->addWidget(POB1dv2_label);
    layout_airintake_warmup_labels->addWidget(POB1dv3_label);
    layout_airintake_warmup_labels->addWidget(POB1dv4_label);
    layout_airintake_warmup_labels->addWidget(POB2dv1_label);
    layout_airintake_warmup_labels->addWidget(POB2dv2_label);
    layout_airintake_warmup_labels->addWidget(POB2dv3_label);
    layout_airintake_warmup_labels->addWidget(POB2dv4_label);
    layout_airintake_warmup_labels->addWidget(POB3dv1_label);
    layout_airintake_warmup_labels->addWidget(POB3dv2_label);
    layout_airintake_warmup_labels->addWidget(POB3dv3_label);
    layout_airintake_warmup_labels->addWidget(POB3dv4_label);
    layout_airintake_warmup_labels->addWidget(PONdv1_label);
    layout_airintake_warmup_labels->addWidget(PONdv2_label);
    layout_airintake_warmup_labels->addWidget(PONdv3_label);
    layout_airintake_warmup_labels->addWidget(PONdv4_label);
    layout_airintake_warmup_labels->addWidget(PVOVNA1_label);
    layout_airintake_warmup_labels->addWidget(PVOVNA2_label);
    layout_airintake_warmup_labels->addWidget(PVOVNA3_label);
    layout_airintake_warmup_labels->addWidget(PVOVNA4_label);
    layout_airintake_warmup_labels->addWidget(BSS824X1z_label);
    layout_airintake_warmup_labels->addWidget(BSS824X1BB_label);
    layout_airintake_warmup_labels->addWidget(BSS824X1DD_label);
    layout_airintake_warmup_labels->addWidget(BSS824X1FF_label);
    layout_airintake_warmup_labels->addWidget(BSS825PR_label);;
    layout_airintake_warmup_labels->addWidget(Counter_warmup_label);
    layout_airintake_warmup_labels->addWidget(POV3dv1_label);
    layout_airintake_warmup_labels->addWidget(POV3dv2_label);
    layout_airintake_warmup_labels->addWidget(POV3dv3_label);
    layout_airintake_warmup_labels->addWidget(POV3dv4_label);
    layout_airintake_warmup_labels->addWidget(S3_3080_label);
    layout_airintake_warmup_labels->addWidget(S4_3080_label);
    layout_airintake_warmup_labels->addWidget(S5_3080_label);
    layout_airintake_warmup_labels->addWidget(S6_3080_label);
    layout_airintake_warmup_labels->addWidget(Ush1l_label);
    layout_airintake_warmup_labels->addWidget(Ush2l_label);
    layout_airintake_warmup_labels->addWidget(Ush1p_label);
    layout_airintake_warmup_labels->addWidget(Ush2p_label);

    layout_airintake_warmup_main->addLayout(layout_airintake_warmup_labels);
    wgt_warmup.setLayout(layout_airintake_warmup_main);
    wgt_warmup.setWindowTitle("antiicing system warmup");

}
