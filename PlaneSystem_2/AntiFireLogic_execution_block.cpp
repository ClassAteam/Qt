#include "AntiFireLogic_execution_block.h"
#include "QtWidgets"
bool
K1_2610,
K3_2610,
K6_2610,
K9_2610,
K12_2610,
K31_2610,
K32_2610,
K33_2610,
K34_2610,
K35_2610,
K42_2610,
K49_2610,
K67_2610,
PAPDvx6,
F92_2610,
F91_2610,
F101_2610,
F111_2610,
F121_2610,
F181_2610,
F911_2610,
F912_2610,
F913_2610,
F914_2610,
F915_2610,
F916_2610,
F917_2610;
double
Ush2dpl,
Ush2dpp;
int
F9_2610,
F10_2610,
F18_2610,
F11_2610,
F12_2610,
S1_2610,
Counter_EXB;


Antifirelogic_EXB::Antifirelogic_EXB(QWidget* pwgt)
    : QWidget(pwgt)
{
    QWidget wgt;
    //initialization
    K1_2610   = 0;
    K3_2610   = 0;
    K6_2610   = 0;
    K9_2610   = 0;
    K12_2610  = 0;
    K31_2610  = 0;
    K32_2610  = 0;
    K33_2610  = 0;
    K34_2610  = 0;
    K35_2610  = 0;
    K42_2610  = 0;
    K49_2610  = 0;
    K50_2610  = 0;
    K51_2610  = 0;
    K53_2610  = 0;
    K54_2610  = 0;
    K67_2610  = 0;
    PAPDvx6   = 0;
    F92_2610  = 0;
    F91_2610  = 0;
    F101_2610 = 0;
    F111_2610 = 0;
    F121_2610 = 0;
    F181_2610 = 0;
    F911_2610 = 0;
    F912_2610 = 0;
    F913_2610 = 0;
    F914_2610 = 0;
    F915_2610 = 0;
    F916_2610 = 0;
    F917_2610 = 0;
    Ush2dpl   = 0;
    Ush2dpp   = 0;
    F9_2610   = 0;
    F10_2610  = 1;
    F18_2610  = 0;
    F11_2610  = 0;
    F12_2610  = 0;
    S1_2610   = 0;
    Counter_EXB = 0;
   //Labels
    K1_2610_label = new QLabel;
    K3_2610_label = new QLabel;
    K6_2610_label = new QLabel;
    K9_2610_label = new QLabel;
    K12_2610_label = new QLabel;
    K31_2610_label= new QLabel;
    K32_2610_label = new QLabel;
    K33_2610_label = new QLabel;
    K34_2610_label = new QLabel;
    K35_2610_label = new QLabel;
    K42_2610_label = new QLabel;
    K49_2610_label = new QLabel;
    K50_2610_label = new QLabel;
    K51_2610_label = new QLabel;
    K53_2610_label = new QLabel;
    K54_2610_label = new QLabel;
    K67_2610_label = new QLabel;
    PAPDvx6_label = new QLabel;
    F92_2610_label = new QLabel;
    F91_2610_label = new QLabel;
    F101_2610_label = new QLabel;
    F111_2610_label = new QLabel;
    F121_2610_label = new QLabel;
    F181_2610_label = new QLabel;
    F911_2610_label = new QLabel;
    F912_2610_label = new QLabel;
    F913_2610_label = new QLabel;
    F914_2610_label = new QLabel;
    F915_2610_label = new QLabel;
    F916_2610_label = new QLabel;
    F917_2610_label = new QLabel;
    Ush2dpl_label = new QLabel;
    Ush2dpp_label = new QLabel;
    F9_2610_label = new QLabel;
    F10_2610_label = new QLabel;
    F18_2610_label = new QLabel;
    F11_2610_label = new QLabel;
    F12_2610_label = new QLabel;
    S1_2610_label = new QLabel;
    Counter_EXB_label = new QLabel;

}
int Antifirelogic_EXB::logic_EXB()
{
Counter_EXB++;

////				   F91 toggle
//if (Ush1dpl >= 16.0)
//{
//    if (AZSF9 == true)
//    {
//	F91 = true;
//    }
//    else
//    {
//	F91 = false;
//    }
//}
//else
//{
//    F91 = false;
//}
////				   F101 toggle
//if (Ush1dpp >= 16.0)
//{
//    if (AZSF10 == true)
//    {
//	F101 = true;
//    }
//    else
//    {
//	F101 = false;
//    }
//}
////					F181 toggle
//if (Ush1dpl >= 16.0)
//{
//    if (AZSF18 == true)
//    {
//	F181 = true;
//    }
//    else
//    {
//	F181 = false;
//    }
//}
////					F111 toggle
//if (Ush2dpl >= 16.0)
//{
//    if (AZSF11 == true)
//    {
//	F111 = true;
//    }
//    else
//    {
//	F111 = false;
//    }
//}
////					F121 toggle
//if (Ush2dpl >= 16.0)
//{
//    if (AZSF12 == true)
//    {
//	F121 = true;
//    }
//    else
//    {
//	F121 = false;
//    }
//}
////					F92 toggle
//if (F91 == true)
//{
//    if (F101 == true)
//    {
//	F92 = false;
//    }
//    if (F181 == true)
//    {
//	F92 = false;
//    }
//}
//else
//{
//    F92 = true;
//}
////					K1 toggle
//if (F92 == true && S1 == 1)
//{
//    K1 = true;
//}
//else
//{
//    K1 = false;
//}
////					K3 toggle
//if (F92 == true && S1 == 2)
//{
//    K3 = true;
//}
//else
//{
//    K3 = false;
//}
////					K6 toggle
//if (F92 == true && S1 == 3)
//{
//    K6 = true;
//}
//else
//{
//    K6 = false;
//}
////					K9 toggle
//if (F92 == true && S1 == 4)
//{
//    K9 = true;
//}
//else
//{
//    K9 = false;
//}
////					K12 toggle
//if (F92 == true && S1 == 5)
//{
//    K12 = true;
//}
//else
//{
//    K12 = false;
//}
////						F911 toggle
//if (F92 == true && S2 == 1)
//{
//    F911 = true;
//}
//else
//{
//    F911 = false;
//}
////					F912 toggle
//if (F92 == true && S2 == 2)
//{
//    F912 = true;
//}
//else
//{
//    F912 = false;
//}
////					F913 toggle
//if (F92 == true && S2 == 3)
//{
//    F913 = true;
//}
//else
//{
//    F913 = false;
//}
////					F914 toggle
//if (F92 == true && S2 == 4)
//{
//    F914 = true;
//}
//else
//{
//    F914 = false;
//}
////					F915 toggle
//if (F92 == true && S2 == 5)
//{
//    F915 = true;
//}
//else
//{
//    F915 = false;
//}
////					F916 toggle
//if (F92 == true && S2 == 6)
//{
//    F916 = true;
//}
//else
//{
//    F916 = false;
//}
////					F917 toggle
//if (F92 == true && S2 == 7)
//{
//    F913 = true;
//}
//else
//{
//    F913 = false;
//}

////					PPBI toggle
//if (F82 == true)
//{
//    if (F45 == true || P2OBLOP == true || PAPDvh6 == true)
//    {
//	PPBI = true;
//    }
//    else
//    {
//	PPBI = false;
//    }
//}
//else
//{
//    PPBI = false;
//}

////					K2 toggle
//if (PPBI == true)
//{
//    if (K1 == true)
//    {
//	if (F911 == true)
//	{
//	    K2 = true;
//	}
//	else
//	{
//	    if (F912 == true)
//	    {
//		K2 = true;
//	    }
//	    else
//	    {
//		if (F913 == true)
//		{
//		    K2 = true;
//		}
//		else
//		{
//		    if (F917 == true)
//		    {
//			K2 = true;
//		    }
//		    else
//		    {
//			if (pozhar_vsu == true)
//			{
//			    K2 = true;
//			}
//			else
//			{
//			    K2 = false;
//			}
//		    }
//		}
//	    }
//	}
//    }
//    else
//    {
//	if (pozhar_vsu == true)
//	{
//	    K2 = true;
//	}
//	else
//	{
//	    K2 = false;
//	}
//    }
//}
//else
//{
//    K2 = false;
//}
////						K42, K49toggle
//if (F25 || F35 || F45 || F55 || F65 == true)
//{
//    if (F121 == true)
//    {
//	if (S13 == 1)			//!!! non-defined switch, mb need enum type
//	{
//	    K49 = true;
//	}
//	else
//	{
//	    if (S14 == 1)
//	    {
//		K49 = true;
//	    }
//	    else
//	    {
//		K49 = false;
//	    }
//	}
//    }
//    else
//    {
//	K49 = false;
//    }
//}
//else
//{
//    K49 = false;
//    K42 = false;
//}
////					K67 toggle
//if (F101 == true)
//{
//    if (S15 == 1)			//!!! the same here
//    {
//	K67 = true;
//    }
//    else
//    {
//	K67 = false;
//    }
//}
//else
//{
//    K67 = false;
//}
////							K31toggle
//if (F25 == true)
//{
//    if (K67 != true)
//    {
//	if (F135 == true)
//	{
//	    if (failure_automatic == true)
//	    {
//		K31 = false;
//	    }
//	    else
//	    {
//		K31 = true;
//	    }
//	}
//	else
//	{
//	    K31 = false;
//	}
//    }
//    else
//    {
//	K31 = true;
//    }
//}
//else
//{
//    K31 = false;
//}
////							K32toggle
//if (F35 == true)
//{
//    if (K67 != true)
//    {
//	if (F145 == true)
//	{
//	    if (failure_automatic == true)
//	    {
//		K32 = false;
//	    }
//	    else
//	    {
//		K32 = true;
//	    }
//	}
//	else
//	{
//	    K32 = false;
//	}
//    }
//    else
//    {
//	K32 = true;
//    }
//}
//else
//{
//    K32 = false;
//}
////							K33toggle
//if (F45 == true)
//{
//    if (K67 != true)
//    {
//	    if (failure_automatic == true)
//	    {
//		K33 = false;
//	    }
//	    else
//	    {
//		K33 = true;
//	    }
//    }
//    else
//    {
//	K33 = true;
//    }
//}
//else
//{
//    K33 = false;
//}
////							K34toggle
//if (F55 == true)
//{
//    if (K67 != true)
//    {
//	if (F155 == true)
//	{
//	    if (failure_automatic == true)
//	    {
//		K34 = false;
//	    }
//	    else
//	    {
//		K34 = true;
//	    }
//	}
//	else
//	{
//	    K34 = false;
//	}
//    }
//    else
//    {
//	K34 = true;
//    }
//}
//else
//{
//    K34 = false;
//}
////							K35toggle
//if (F65 == true)
//{
//    if (K67 != true)
//    {
//	if (F165 == true)
//	{
//	    if (failure_automatic == true)
//	    {
//		K35 = false;
//	    }
//	    else
//	    {
//		K35 = true;
//	    }
//	}
//	else
//	{
//	    K35 = false;
//	}
//    }
//    else
//    {
//	K35 = true;
//    }
//}
//else
//{
//    K35 = false;
//}
////							K50 toggle
//if (F82 == true)
//{
//    if (K3 == true)
//    {
//	if (F911 == true)
//	{
//	    K50 = true;
//	}
//	else
//	{
//	    if (F912 == true)
//	    {
//		K50 = true;
//	    }
//	    else
//	    {
//		if (F917 == true)
//		{
//		    K50 = true;
//		}
//		else
//		{
//		    if (pozhar_1dv == true)
//		    {
//			K50 = true;
//		    }
//		    else
//		    {
//			K50 = false;
//		    }
//		}
//	    }
//	}
//    }
//    else
//    {
//	if (pozhar_1dv == true)
//	{
//	    K50 = true;
//	}
//	else
//	{
//	    K50 = false;
//	}
//    }
//}
//else
//{
//    K50 = false;
//}
////							K51 toggle
//if (F72 != true)
//{
//    K51 = false;
//}
//else
//{
//    if (K3 == true)
//    {
//	if (pozhar_1dv == true)
//	{
//	    K51 = true;
//	}
//	else
//	{
//	    if (peregrev_1dv == true)
//	    {
//		K51 = true;
//	    }
//	    else
//	    {
//		K51 = false;
//	    }
//	}
//    }
//    else
//    {
//	if (F914 || F915 || F916 || F917 ||  pozhar_1dv || peregrev_1dv)
//	{
//	    K51 = true;
//	}
//	else
//	{
//	    K51 = false;
//	}
//    }
//}
////							K53 toggle
//if (F82 == true)
//{
//    if (K6 == true)
//    {
//	if (F911 == true)
//	{
//	    K53 = true;
//	}
//	else
//	{
//	    if (F912 == true)
//	    {
//		K53 = true;
//	    }
//	    else
//	    {
//		if (F917 == true)
//		{
//		    K53 = true;
//		}
//		else
//		{
//		    if (pozhar_2dv == true)
//		    {
//			K53 = true;
//		    }
//		    else
//		    {
//			K53 = false;
//		    }
//		}
//	    }
//	}
//    }
//    else
//    {
//	if (pozhar_1dv == true)
//	{
//	    K50 = true;
//	}
//	else
//	{
//	    K50 = false;
//	}
//    }
//}
//else
//{
//    K50 = false;
//}
////							K54 toggle
//if (F72 != true)
//{
//    K54 = false;
//}
//else
//{
//    if (K6 == true)
//    {
//	if (pozhar_2dv == true)
//	{
//	    K54 = true;
//	}
//	else
//	{
//	    if (peregrev_2dv == true)
//	    {
//		K54 = true;
//	    }
//	    else
//	    {
//		K54 = false;
//	    }
//	}
//    }
//    else
//    {
//	if (F914 || F915 || F916 || F917 || pozhar_2dv || peregrev_2dv)
//	{
//	    K54 = true;
//	}
//	else
//	{
//	    K54 = false;
//	}
//    }
//}
////							K57 toggle
//if (F72 == true)
//{
//    if (K9 == true)
//    {
//	if (F911 == true)
//	{
//	    K57 = true;
//	}
//	else
//	{
//	    if (F912 == true)
//	    {
//		K57 = true;
//	    }
//	    else
//	    {
//		if (F917 == true)
//		{
//		    K57 = true;
//		}
//		else
//		{
//		    if (pozhar_3dv == true)
//		    {
//			K57 = true;
//		    }
//		    else
//		    {
//			K57 = false;
//		    }
//		}
//	    }
//	}
//    }
//    else
//    {
//	if (pozhar_3dv == true)
//	{
//	    K57 = true;
//	}
//	else
//	{
//	    K57 = false;
//	}
//    }
//}
//else
//{
//    K50 = false;
//}
////							K58 toggle
//if (F72 != true)
//{
//    K58 = false;
//}
//else
//{
//    if (K6 == true)
//    {
//	if (pozhar_2dv == true)
//	{
//	    K58 = true;
//	}
//	else
//	{
//	    if (peregrev_2dv == true)
//	    {
//		K58 = true;
//	    }
//	    else
//	    {
//		K58 = false;
//	    }
//	}
//    }
//    else
//    {
//	if (F914 || F915 || F916 || F917 || pozhar_3dv || peregrev_3dv)
//	{
//	    K58 = true;
//	}
//	else
//	{
//	    K58 = false;
//	}
//    }
//}
////							K60 toggle
//if (F72 == true)
//{
//    if (K12 == true)
//    {
//	if (F911 == true)
//	{
//	    K60 = true;
//	}
//	else
//	{
//	    if (F912 == true)
//	    {
//		K60 = true;
//	    }
//	    else
//	    {
//		if (F917 == true)
//		{
//		    K60 = true;
//		}
//		else
//		{
//		    if (pozhar_4dv == true)
//		    {
//			K60 = true;
//		    }
//		    else
//		    {
//			K60 = false;
//		    }
//		}
//	    }
//	}
//    }
//    else
//    {
//	if (pozhar_4dv == true)
//	{
//	    K60 = true;
//	}
//	else
//	{
//	    K60 = false;
//	}
//    }
//}
//else
//{
//    K60 = false;
//}
////							K61 toggle
//if (F82 != true)
//{
//    K61 = false;
//}
//else
//{
//    if (K6 == true)
//    {
//	if (pozhar_4dv == true)
//	{
//	    K61 = true;
//	}
//	else
//	{
//	    if (peregrev_4dv == true)
//	    {
//		K61 = true;
//	    }
//	    else
//	    {
//		K61 = false;
//	    }
//	}
//    }
//    else
//    {
//	if (F914 || F915 || F916 || F917 || pozhar_4dv || peregrev_4dv)
//	{
//	    K61 = true;
//	}
//	else
//	{
//	    K61 = false;
//	}
//    }
//}
////					PW toggles
//if (PNU = true)
//{
//    PW1och_l = true;
//    PW1och_o = true;
//    PW2och = true;
//    PW3och = true;
//}

//if (K31  || K32 || K34 || K35 || K33 == true)
//{
//	if (F101 == true)
//	{
//	    PW1och_l = false;
//	    if (F181 == true)
//	    {
//		PW1och_o = false;
//	    }
//	}
//}
//if (F111 == true && K42 == true)
//{
//    PW2och = false;
//}
//else
//{
//    if (F121 == true && K49 == true)
//    {
//	PW3och = false;
//    }
//}
    //showing values
    K1_2610_label->setText("K1 = " + QString::number(K1_2610));
    K3_2610_label->setText("K3 = " + QString::number(K3_2610));
    K6_2610_label->setText("K6 = " + QString::number(K6_2610));
    K9_2610_label->setText("K9 = " + QString::number(K9_2610));
    K12_2610_label->setText("K12 = " + QString::number(K12_2610));
    K31_2610_label->setText("K31 = " + QString::number(K31_2610));
    K32_2610_label->setText("K32 = " + QString::number(K32_2610));
    K33_2610_label->setText("K33 = " + QString::number(K33_2610));
    K34_2610_label->setText("K34 = " + QString::number(K34_2610));
    K35_2610_label->setText("K35 = " + QString::number(K35_2610));
    K42_2610_label->setText("K42 = " + QString::number(K42_2610));
    K49_2610_label->setText("K49 = " + QString::number(K49_2610));
    K50_2610_label->setText("K50 = " + QString::number(K50_2610));
    K51_2610_label->setText("K51 = " + QString::number(K51_2610));
    K53_2610_label->setText("K53 = " + QString::number(K53_2610));
    K54_2610_label->setText("K54 = " + QString::number(K54_2610));
    K67_2610_label->setText("K67 = " + QString::number(K67_2610));
    PAPDvx6_label->setText("PAPDvx6 = " + QString::number(PAPDvx6));
    F92_2610_label->setText("F92 = " + QString::number(F92_2610));
    F91_2610_label->setText("F91 = " + QString::number(F91_2610));
    F101_2610_label->setText("F101 = " + QString::number(F101_2610));
    F111_2610_label->setText("F111 = " + QString::number(F111_2610));
    F121_2610_label->setText("F121 = " + QString::number(F121_2610));
    F181_2610_label->setText("F181 = " + QString::number(F181_2610));
    F911_2610_label->setText("F911 = " + QString::number(F911_2610));
    F912_2610_label->setText("F912 = " + QString::number(F912_2610));
    F913_2610_label->setText("F913 = " + QString::number(F913_2610));
    F914_2610_label->setText("F914 = " + QString::number(F914_2610));
    F915_2610_label->setText("F915 = " + QString::number(F915_2610));
    F916_2610_label->setText("F916 = " + QString::number(F916_2610));
    F917_2610_label->setText("F917 = " + QString::number(F917_2610));
    Ush2dpl_label->setText("Ush2dpl = " + QString::number(Ush2dpl));
    Ush2dpp_label->setText("Ush2dpp = " + QString::number(Ush2dpp));
    F9_2610_label->setText("F9 = " + QString::number(F9_2610));
    F10_2610_label->setText("F10 = " + QString::number(F10_2610));
    F18_2610_label->setText("F18 = " + QString::number(F18_2610));
    F11_2610_label->setText("F11 = " + QString::number(F11_2610));
    F12_2610_label->setText("F12 = " + QString::number(F12_2610));
    S1_2610_label->setText("S1 = " + QString::number(S1_2610));
    Counter_EXB_label->setText("Counter_EXB = " + QString::number(Counter_EXB));

//    layout setting
    QVBoxLayout *layout_EXB = new QVBoxLayout;
    layout_EXB->addWidget(K1_2610_label);
    layout_EXB->addWidget(K3_2610_label);
    layout_EXB->addWidget(K6_2610_label);
    layout_EXB->addWidget(K9_2610_label);
    layout_EXB->addWidget(K12_2610_label);
    layout_EXB->addWidget(K31_2610_label);
    layout_EXB->addWidget(K32_2610_label);
    layout_EXB->addWidget(K33_2610_label);
    layout_EXB->addWidget(K34_2610_label);
    layout_EXB->addWidget(K35_2610_label);
    layout_EXB->addWidget(K42_2610_label);
    layout_EXB->addWidget(K49_2610_label);
    layout_EXB->addWidget(K50_2610_label);
    layout_EXB->addWidget(K51_2610_label);
    layout_EXB->addWidget(K53_2610_label);
    layout_EXB->addWidget(K54_2610_label);
    layout_EXB->addWidget(K67_2610_label);
    layout_EXB->addWidget(PAPDvx6_label);
    layout_EXB->addWidget(F92_2610_label);
    layout_EXB->addWidget(F91_2610_label);
    layout_EXB->addWidget(F101_2610_label);
    layout_EXB->addWidget(F111_2610_label);
    layout_EXB->addWidget(F121_2610_label);
    layout_EXB->addWidget(F181_2610_label);
    layout_EXB->addWidget(F911_2610_label);
    layout_EXB->addWidget(F912_2610_label);
    layout_EXB->addWidget(F913_2610_label);
    layout_EXB->addWidget(F914_2610_label);
    layout_EXB->addWidget(F915_2610_label);
    layout_EXB->addWidget(F916_2610_label);
    layout_EXB->addWidget(F917_2610_label);
    layout_EXB->addWidget(Ush2dpl_label);
    layout_EXB->addWidget(Ush2dpp_label);
    layout_EXB->addWidget(F9_2610_label);
    layout_EXB->addWidget(F10_2610_label);
    layout_EXB->addWidget(F18_2610_label);
    layout_EXB->addWidget(F11_2610_label);
    layout_EXB->addWidget(F12_2610_label);
    layout_EXB->addWidget(S1_2610_label);
    layout_EXB->addWidget(Counter_EXB_label);
    wgt_EXB.setLayout(layout_EXB);
    wgt_EXB.show();
}

//    K15_label->show();
//    K16_label->show();
//    K19_label->show();
//    K20_label->show();
//    K23_label->show();
//    K24_label->show();
//    K25_label->show();
//    K26_label->show();
//    K27_label->show();
//    K28_label->show();
//    K50_label->show();
//    K53_label->show();
//    K51_label->show();
//    K54_label->show();
//    K57_label->show();
//    K58_label->show();
//    K60_label->show();
//    K61_label->show();
//    F25_label->show();
//    F35_label->show();
//    F45_label->show();
//    F55_label->show();
//    F65_label->show();
//    F72_label->show();
//    F82_label->show();
//    F132_label->show();
//    F142_label->show();
//    UbusL_label->show();
//    UbusR_label->show();
//    Uacc_label->show();
//    F7_label->show();
//    F8_label->show();
//    S3_label->show();
//    S4_label->show();
//    S5_label->show();
//    S7_label->show();
//    S8_label->show();
//    S9_label->show();





// assign variable values to similar Qobjects




