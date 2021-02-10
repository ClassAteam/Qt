#include "emergencyalarm_9.h"
#include "algorithms.h"

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

void emergencyalarm_9()
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
}

void yellow(bool* input, bool* output, bool* clue, bool* block_clue, bool* button)
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

void white(bool* input, bool* output)
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
