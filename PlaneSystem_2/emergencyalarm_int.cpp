//#include "emergencyalarm_int.h"

//emergencyalarm_int::emergencyalarm_int(QWidget *parent)
//    : interfacing(parent)
//{
//    emergencyalarm_int::setWindowTitle("emergency_alarm");
//    createLabelClue(&bss_inst.BSS811X1B, "BSS811X1B");
//        createLabelClue(&bss_inst.BSS811X1BB, "BSS811X1BB");
//        createLabelClue(&bss_inst.BSS811X1D, "BSS811X1D");
//        createLabelClue(&bss_inst.BSS811X1DD, "BSS811X1DD");
//        createLabelClue(&bss_inst.BSS811X1E, "BSS811X1E");
//        createLabelClue(&bss_inst.BSS811X1G, "BSS811X1G");
//        createLabelClue(&bss_inst.BSS811X1J, "BSS811X1J");
//        createLabelClue(&bss_inst.BSS811X1L, "BSS811X1L");
//        createLabelClue(&bss_inst.BSS811X1N, "BSS811X1N");
//        createLabelClue(&bss_inst.BSS811X1R, "BSS811X1R");
//        createLabelClue(&bss_inst.BSS811X1T, "BSS811X1T");
//        createLabelClue(&bss_inst.BSS811X1V, "BSS811X1V");
//        createLabelClue(&bss_inst.BSS811X1VV, "BSS811X1VV");
//        createLabelClue(&bss_inst.BSS811X1Y, "BSS811X1Y");
//        createLabelClue(&bss_inst.BSS811X1Z, "BSS811X1Z");
//        createLabelClue(&bss_inst.BSS811X1b, "BSS811X1b");
//        createLabelClue(&bss_inst.BSS811X1d, "BSS811X1d");
//        createLabelClue(&bss_inst.BSS811X1f, "BSS811X1f");
//        createLabelClue(&bss_inst.BSS811X1h, "BSS811X1h");
//        createLabelClue(&bss_inst.BSS811X1j, "BSS811X1j");
//        createLabelClue(&bss_inst.BSS811X1n, "BSS811X1n");
//        createLabelClue(&bss_inst.BSS811X1p, "BSS811X1p");
//        createLabelClue(&bss_inst.BSS811X1r, "BSS811X1r");
//        createLabelClue(&bss_inst.BSS811X1t, "BSS811X1t");
//        createLabelClue(&bss_inst.BSS811X1v, "BSS811X1v");
//        createLabelClue(&bss_inst.BSS811X1x, "BSS811X1x");
//        createLabelClue(&bss_inst.BSS811X1z, "BSS811X1z");
//        createLabelClue(&bss_inst.BSS811X2A, "BSS811X2A");
//        createLabelClue(&bss_inst.BSS811X2B, "BSS811X2B");
//        createLabelClue(&bss_inst.BSS811X2C, "BSS811X2C");
//        createLabelClue(&bss_inst.BSS811X2D, "BSS811X2D");
//        createLabelClue(&bss_inst.BSS811X2E, "BSS811X2E");
//        createLabelClue(&bss_inst.BSS811X2F, "BSS811X2F");
//        createLabelClue(&bss_inst.BSS811X2G, "BSS811X2G");
//        createLabelClue(&bss_inst.BSS811X2H, "BSS811X2H");
//        createLabelClue(&bss_inst.BSS811X2J, "BSS811X2J");
//        createLabelClue(&bss_inst.BSS811X2K, "BSS811X2K");
//        createLabelClue(&bss_inst.BSS811X2L, "BSS811X2L");
//        createLabelClue(&bss_inst.BSS811X2M, "BSS811X2M");
//        createLabelClue(&bss_inst.BSS811X2N, "BSS811X2N");
//        createLabelClue(&bss_inst.BSS811X2P, "BSS811X2P");
//        createLabelClue(&bss_inst.BSS811X2R, "BSS811X2R");
//        createLabelClue(&bss_inst.BSS811X2S, "BSS811X2S");
//        createLabelClue(&bss_inst.BSS811X2T, "BSS811X2T");
//        createLabelClue(&bss_inst.BSS811X2U, "BSS811X2U");
//        createLabelClue(&bss_inst.BSS811X2V, "BSS811X2V");
//        createLabelClue(&bss_inst.BSS811X2W, "BSS811X2W");
//        createLabelClue(&bss_inst.BSS811X2X, "BSS811X2X");
//        createLabelClue(&bss_inst.BSS811X2Y, "BSS811X2Y");
//        createLabelClue(&bss_inst.BSS811X2Z, "BSS811X2Z");
//        createLabelClue(&bss_inst.BSS811X2a, "BSS811X2a");
//        createLabelClue(&bss_inst.BSS811X2b, "BSS811X2b");
//        createLabelClue(&bss_inst.BSS811X2c, "BSS811X2c");
//        createLabelClue(&bss_inst.BSS811X2d, "BSS811X2d");
//        createLabelClue(&bss_inst.BSS811X2e, "BSS811X2e");
//        createLabelClue(&bss_inst.BSS811X2f, "BSS811X2f");
//        createLabelClue(&bss_inst.BSS811X2g, "BSS811X2g");
//        createLabelClue(&bss_inst.BSS811X2h, "BSS811X2h");
//        createLabelClue(&bss_inst.BSS811X2j, "BSS811X2j");
//        createLabelClue(&bss_inst.BSS811X2k, "BSS811X2k");
//        createLabelClue(&bss_inst.BSS811X2l, "BSS811X2l");
//        createLabelClue(&bss_inst.BSS811X2m, "BSS811X2m");
//        createLabelClue(&bss_inst.BSS811X2n, "BSS811X2n");
//        createLabelClue(&bss_inst.BSS811X2p, "BSS811X2p");
//        createLabelClue(&bss_inst.BSS811X2q, "BSS811X2q");
//        createLabelClue(&bss_inst.BSS811X2r, "BSS811X2r");
//        createLabelClue(&bss_inst.BSS811X3A, "BSS811X3A");
//        createLabelClue(&bss_inst.BSS811X3C, "BSS811X3C");
//        createLabelClue(&bss_inst.BSS811X3D, "BSS811X3D");
//        createLabelClue(&bss_inst.BSS811X3E, "BSS811X3E");
//        createLabelClue(&bss_inst.BSS812X5B, "BSS812X5B");
//        createLabelClue(&bss_inst.BSS812X5BB, "BSS812X5BB");
//        createLabelClue(&bss_inst.BSS812X5D, "BSS812X5D");
//        createLabelClue(&bss_inst.BSS812X5DD, "BSS812X5DD");
//        createLabelClue(&bss_inst.BSS812X5E, "BSS812X5E");
//        createLabelClue(&bss_inst.BSS812X5FF, "BSS812X5FF");
//        createLabelClue(&bss_inst.BSS812X5G, "BSS812X5G");
//        createLabelClue(&bss_inst.BSS812X5HH, "BSS812X5HH");
//        createLabelClue(&bss_inst.BSS812X5J, "BSS812X5J");
//        createLabelClue(&bss_inst.BSS812X5KK, "BSS812X5KK");
//        createLabelClue(&bss_inst.BSS812X5L, "BSS812X5L");
//        createLabelClue(&bss_inst.BSS812X5N, "BSS812X5N");
//        createLabelClue(&bss_inst.BSS812X5R, "BSS812X5R");
//        createLabelClue(&bss_inst.BSS812X5T, "BSS812X5T");
//        createLabelClue(&bss_inst.BSS812X5V, "BSS812X5V");
//        createLabelClue(&bss_inst.BSS812X5X, "BSS812X5X");
//        createLabelClue(&bss_inst.BSS812X5Z, "BSS812X5Z");
//        createLabelClue(&bss_inst.BSS812X5b, "BSS812X5b");
//        createLabelClue(&bss_inst.BSS812X5d, "BSS812X5d");
//        createLabelClue(&bss_inst.BSS812X5f, "BSS812X5f");
//        createLabelClue(&bss_inst.BSS812X5h, "BSS812X5h");
//        createLabelClue(&bss_inst.BSS812X5j, "BSS812X5j");
//        createLabelClue(&bss_inst.BSS812X5n, "BSS812X5n");
//        createLabelClue(&bss_inst.BSS812X5p, "BSS812X5p");
//        createLabelClue(&bss_inst.BSS812X5r, "BSS812X5r");
//        createLabelClue(&bss_inst.BSS812X5t, "BSS812X5t");
//        createLabelClue(&bss_inst.BSS812X5v, "BSS812X5v");
//        createLabelClue(&bss_inst.BSS812X5x, "BSS812X5x");
//        createLabelClue(&bss_inst.BSS812X5z, "BSS812X5z");
//        createLabelClue(&bss_inst.BSS812X6A, "BSS812X6A");
//        createLabelClue(&bss_inst.BSS812X6B, "BSS812X6B");
//        createLabelClue(&bss_inst.BSS812X6C, "BSS812X6C");
//        createLabelClue(&bss_inst.BSS812X6D, "BSS812X6D");
//        createLabelClue(&bss_inst.BSS812X6E, "BSS812X6E");
//        createLabelClue(&bss_inst.BSS812X6F, "BSS812X6F");
//        createLabelClue(&bss_inst.BSS812X6G, "BSS812X6G");
//        createLabelClue(&bss_inst.BSS812X6H, "BSS812X6H");
//        createLabelClue(&bss_inst.BSS812X6J, "BSS812X6J");
//        createLabelClue(&bss_inst.BSS812X6K, "BSS812X6K");
//        createLabelClue(&bss_inst.BSS812X6L, "BSS812X6L");
//        createLabelClue(&bss_inst.BSS812X6M, "BSS812X6M");
//        createLabelClue(&bss_inst.BSS812X6N, "BSS812X6N");
//        createLabelClue(&bss_inst.BSS812X6S, "BSS812X6S");
//        createLabelClue(&bss_inst.BSS812X6T, "BSS812X6T");
//        createLabelClue(&bss_inst.BSS812X6U, "BSS812X6U");
//        createLabelClue(&bss_inst.BSS812X6V, "BSS812X6V");
//        createLabelClue(&bss_inst.BSS812X6W, "BSS812X6W");
//        createLabelClue(&bss_inst.BSS812X6X, "BSS812X6X");
//        createLabelClue(&bss_inst.BSS812X6Y, "BSS812X6Y");
//        createLabelClue(&bss_inst.BSS812X6a, "BSS812X6a");
//        createLabelClue(&bss_inst.BSS812X6b, "BSS812X6b");
//        createLabelClue(&bss_inst.BSS812X6c, "BSS812X6c");
//        createLabelClue(&bss_inst.BSS812X6d, "BSS812X6d");
//        createLabelClue(&bss_inst.BSS812X6e, "BSS812X6e");
//        createLabelClue(&bss_inst.BSS812X6f, "BSS812X6f");
//        createLabelClue(&bss_inst.BSS812X6g, "BSS812X6g");
//        createLabelClue(&bss_inst.BSS812X6h, "BSS812X6h");
//        createLabelClue(&bss_inst.BSS812X6i, "BSS812X6i");
//        createLabelClue(&bss_inst.BSS812X6j, "BSS812X6j");
//        createLabelClue(&bss_inst.BSS812X6k, "BSS812X6k");
//        createLabelClue(&bss_inst.BSS812X6m, "BSS812X6m");
//        createLabelClue(&bss_inst.BSS812X6n, "BSS812X6n");
//        createLabelClue(&bss_inst.BSS812X6p, "BSS812X6p");
//        createLabelClue(&bss_inst.BSS812X6q, "BSS812X6q");
//        createLabelClue(&bss_inst.BSS812X6r, "BSS812X6r");
//        createLabelClue(&bss_inst.BSS812_nazhm_rt, "BSS812_nazhm_rt");
//        createLabelClue(&bss_inst.BSS812_vkl_ft, "BSS812_vkl_ft");
//        createLabelClue(&bss_inst.BSS812_vkl_rt, "BSS812_vkl_rt");
//        createLabelClue(&bss_inst.BSS824X1A, "BSS824X1A");
//        createLabelClue(&bss_inst.BSS824X1BB, "BSS824X1BB");
//        createLabelClue(&bss_inst.BSS824X1D, "BSS824X1D");
//        createLabelClue(&bss_inst.BSS824X1DD, "BSS824X1DD");
//        createLabelClue(&bss_inst.BSS824X1E, "BSS824X1E");
//        createLabelClue(&bss_inst.BSS824X1FF, "BSS824X1FF");
//        createLabelClue(&bss_inst.BSS824X1G, "BSS824X1G");
//        createLabelClue(&bss_inst.BSS824X1HH, "BSS824X1HH");
//        createLabelClue(&bss_inst.BSS824X1J, "BSS824X1J");
//        createLabelClue(&bss_inst.BSS824X1KK, "BSS824X1KK");
//        createLabelClue(&bss_inst.BSS824X1M, "BSS824X1M");
//        createLabelClue(&bss_inst.BSS824X1MM, "BSS824X1MM");
//        createLabelClue(&bss_inst.BSS824X1N, "BSS824X1N");
//        createLabelClue(&bss_inst.BSS824X1R, "BSS824X1R");
//        createLabelClue(&bss_inst.BSS824X1T, "BSS824X1T");
//        createLabelClue(&bss_inst.BSS824X1V, "BSS824X1V");
//        createLabelClue(&bss_inst.BSS824X1X, "BSS824X1X");
//        createLabelClue(&bss_inst.BSS824X1Z, "BSS824X1Z");
//        createLabelClue(&bss_inst.BSS824X1b, "BSS824X1b");
//        createLabelClue(&bss_inst.BSS824X1d, "BSS824X1d");
//        createLabelClue(&bss_inst.BSS824X1f, "BSS824X1f");
//        createLabelClue(&bss_inst.BSS824X1h, "BSS824X1h");
//        createLabelClue(&bss_inst.BSS824X1j, "BSS824X1j");
//        createLabelClue(&bss_inst.BSS824X1n, "BSS824X1n");
//        createLabelClue(&bss_inst.BSS824X1p, "BSS824X1p");
//        createLabelClue(&bss_inst.BSS824X1r, "BSS824X1r");
//        createLabelClue(&bss_inst.BSS824X1t, "BSS824X1t");
//        createLabelClue(&bss_inst.BSS824X1v, "BSS824X1v");
//        createLabelClue(&bss_inst.BSS824X1x, "BSS824X1x");
//        createLabelClue(&bss_inst.BSS824X1z, "BSS824X1z");
//        createLabelClue(&bss_inst.BSS824X2A, "BSS824X2A");
//        createLabelClue(&bss_inst.BSS824X2B, "BSS824X2B");
//        createLabelClue(&bss_inst.BSS824X2C, "BSS824X2C");
//        createLabelClue(&bss_inst.BSS824X2D, "BSS824X2D");
//        createLabelClue(&bss_inst.BSS824X2E, "BSS824X2E");
//        createLabelClue(&bss_inst.BSS824X2F, "BSS824X2F");
//        createLabelClue(&bss_inst.BSS824X2G, "BSS824X2G");
//        createLabelClue(&bss_inst.BSS824X2H, "BSS824X2H");
//        createLabelClue(&bss_inst.BSS824X2J, "BSS824X2J");
//        createLabelClue(&bss_inst.BSS824X2L, "BSS824X2L");
//        createLabelClue(&bss_inst.BSS824X2M, "BSS824X2M");
//        createLabelClue(&bss_inst.BSS824X2N, "BSS824X2N");
//        createLabelClue(&bss_inst.BSS824X2P, "BSS824X2P");
//        createLabelClue(&bss_inst.BSS824X2R, "BSS824X2R");
//        createLabelClue(&bss_inst.BSS824X2S, "BSS824X2S");
//        createLabelClue(&bss_inst.BSS824X2T, "BSS824X2T");
//        createLabelClue(&bss_inst.BSS824X2U, "BSS824X2U");
//        createLabelClue(&bss_inst.BSS824X2V, "BSS824X2V");
//        createLabelClue(&bss_inst.BSS824X2W, "BSS824X2W");
//        createLabelClue(&bss_inst.BSS824X2X, "BSS824X2X");
//        createLabelClue(&bss_inst.BSS824X2Y, "BSS824X2Y");
//        createLabelClue(&bss_inst.BSS824X2Z, "BSS824X2Z");
//        createLabelClue(&bss_inst.BSS824X2a, "BSS824X2a");
//        createLabelClue(&bss_inst.BSS824X2b, "BSS824X2b");
//        createLabelClue(&bss_inst.BSS824X2c, "BSS824X2c");
//        createLabelClue(&bss_inst.BSS824X2d, "BSS824X2d");
//        createLabelClue(&bss_inst.BSS824X2e, "BSS824X2e");
//        createLabelClue(&bss_inst.BSS824X2f, "BSS824X2f");
//        createLabelClue(&bss_inst.BSS824X2h, "BSS824X2h");
//        createLabelClue(&bss_inst.BSS824X2i, "BSS824X2i");
//        createLabelClue(&bss_inst.BSS824X2k, "BSS824X2k");
//        createLabelClue(&bss_inst.BSS824X2m, "BSS824X2m");
//        createLabelClue(&bss_inst.BSS824X2n, "BSS824X2n");
//        createLabelClue(&bss_inst.BSS824X2p, "BSS824X2p");
//        createLabelClue(&bss_inst.BSS824X2q, "BSS824X2q");
//        createLabelClue(&bss_inst.BSS824X2r, "BSS824X2r");
//        createLabelClue(&bss_inst.BSS824X3A, "BSS824X3A");
//        createLabelClue(&bss_inst.BSS824X3C, "BSS824X3C");
//        createLabelClue(&bss_inst.BSS824X3E, "BSS824X3E");
//        createLabelClue(&bss_inst.BSS824X3G, "BSS824X3G");
//        createLabelClue(&bss_inst.BSS824X3J, "BSS824X3J");
//        createLabelClue(&bss_inst.BSS824X3L, "BSS824X3L");
//        createLabelClue(&bss_inst.BSS824X3N, "BSS824X3N");
//        createLabelClue(&bss_inst.BSS824X3R, "BSS824X3R");
//        createLabelClue(&bss_inst.BSS824X3T, "BSS824X3T");
//        createLabelClue(&bss_inst.BSS825PR, "BSS825PR");
//        createLabelClue(&bss_inst.BSS825X5A, "BSS825X5A");
//        createLabelClue(&bss_inst.BSS825X5BB, "BSS825X5BB");
//        createLabelClue(&bss_inst.BSS825X5C, "BSS825X5C");
//        createLabelClue(&bss_inst.BSS825X5DD, "BSS825X5DD");
//        createLabelClue(&bss_inst.BSS825X5E, "BSS825X5E");
//        createLabelClue(&bss_inst.BSS825X5FF, "BSS825X5FF");
//        createLabelClue(&bss_inst.BSS825X5G, "BSS825X5G");
//        createLabelClue(&bss_inst.BSS825X5HH, "BSS825X5HH");
//        createLabelClue(&bss_inst.BSS825X5J, "BSS825X5J");
//        createLabelClue(&bss_inst.BSS825X5KK, "BSS825X5KK");
//        createLabelClue(&bss_inst.BSS825X5L, "BSS825X5L");
//        createLabelClue(&bss_inst.BSS825X5MM, "BSS825X5MM");
//        createLabelClue(&bss_inst.BSS825X5N, "BSS825X5N");
//        createLabelClue(&bss_inst.BSS825X5R, "BSS825X5R");
//        createLabelClue(&bss_inst.BSS825X5T, "BSS825X5T");
//        createLabelClue(&bss_inst.BSS825X5V, "BSS825X5V");
//        createLabelClue(&bss_inst.BSS825X5X, "BSS825X5X");
//        createLabelClue(&bss_inst.BSS825X5Z, "BSS825X5Z");
//        createLabelClue(&bss_inst.BSS825X5b, "BSS825X5b");
//        createLabelClue(&bss_inst.BSS825X5d, "BSS825X5d");
//        createLabelClue(&bss_inst.BSS825X5f, "BSS825X5f");
//        createLabelClue(&bss_inst.BSS825X5h, "BSS825X5h");
//        createLabelClue(&bss_inst.BSS825X5j, "BSS825X5j");
//        createLabelClue(&bss_inst.BSS825X5n, "BSS825X5n");
//        createLabelClue(&bss_inst.BSS825X5r, "BSS825X5r");
//        createLabelClue(&bss_inst.BSS825X5t, "BSS825X5t");
//        createLabelClue(&bss_inst.BSS825X5v, "BSS825X5v");
//        createLabelClue(&bss_inst.BSS825X5x, "BSS825X5x");
//        createLabelClue(&bss_inst.BSS825X5z, "BSS825X5z");
//        createLabelClue(&bss_inst.BSS825X6A, "BSS825X6A");
//        createLabelClue(&bss_inst.BSS825X6B, "BSS825X6B");
//        createLabelClue(&bss_inst.BSS825X6C, "BSS825X6C");
//        createLabelClue(&bss_inst.BSS825X6D, "BSS825X6D");
//        createLabelClue(&bss_inst.BSS825X6E, "BSS825X6E");
//        createLabelClue(&bss_inst.BSS825X6F, "BSS825X6F");
//        createLabelClue(&bss_inst.BSS825X6G, "BSS825X6G");
//        createLabelClue(&bss_inst.BSS825X6H, "BSS825X6H");
//        createLabelClue(&bss_inst.BSS825X6J, "BSS825X6J");
//        createLabelClue(&bss_inst.BSS825X6K, "BSS825X6K");
//        createLabelClue(&bss_inst.BSS825X6L, "BSS825X6L");
//        createLabelClue(&bss_inst.BSS825X6M, "BSS825X6M");
//        createLabelClue(&bss_inst.BSS825X6N, "BSS825X6N");
//        createLabelClue(&bss_inst.BSS825X6P, "BSS825X6P");
//        createLabelClue(&bss_inst.BSS825X6R, "BSS825X6R");
//        createLabelClue(&bss_inst.BSS825X6S, "BSS825X6S");
//        createLabelClue(&bss_inst.BSS825X6T, "BSS825X6T");
//        createLabelClue(&bss_inst.BSS825X6U, "BSS825X6U");
//        createLabelClue(&bss_inst.BSS825X6W, "BSS825X6W");
//        createLabelClue(&bss_inst.BSS825X6X, "BSS825X6X");
//        createLabelClue(&bss_inst.BSS825X6Y, "BSS825X6Y");
//        createLabelClue(&bss_inst.BSS825X6Z, "BSS825X6Z");
//        createLabelClue(&bss_inst.BSS825X6a, "BSS825X6a");
//        createLabelClue(&bss_inst.BSS825X6d, "BSS825X6d");
//        createLabelClue(&bss_inst.BSS825X6e, "BSS825X6e");
//        createLabelClue(&bss_inst.BSS825X6f, "BSS825X6f");
//        createLabelClue(&bss_inst.BSS825X6g, "BSS825X6g");
//        createLabelClue(&bss_inst.BSS825X6i, "BSS825X6i");
//        createLabelClue(&bss_inst.BSS825X6j, "BSS825X6j");
//        createLabelClue(&bss_inst.BSS825X6k, "BSS825X6k");
//        createLabelClue(&bss_inst.BSS825X6m, "BSS825X6m");
//        createLabelClue(&bss_inst.BSS825X6n, "BSS825X6n");
//        createLabelClue(&bss_inst.BSS825X6p, "BSS825X6p");
//        createLabelClue(&bss_inst.BSS825X6q, "BSS825X6q");
//        createLabelClue(&bss_inst.BSS825X6r, "BSS825X6r");
//        createLabelClue(&bss_inst.BSS825X7A, "BSS825X7A");
//        createLabelClue(&bss_inst.BSS825X7R, "BSS825X7R");
//        createLabelClue(&bss_inst.BSS825_prog, "BSS825_prog");
//        createLabelClue(&bss_inst.BSS826X1FF, "BSS826X1FF");
//        createLabelClue(&bss_inst.BSS826X1HH, "BSS826X1HH");
//        createLabelClue(&bss_inst.BSS837X1A, "BSS837X1A");
//        createLabelClue(&bss_inst.BSS837X1BB, "BSS837X1BB");
//        createLabelClue(&bss_inst.BSS837X1C, "BSS837X1C");
//        createLabelClue(&bss_inst.BSS837X1DD, "BSS837X1DD");
//        createLabelClue(&bss_inst.BSS837X1E, "BSS837X1E");
//        createLabelClue(&bss_inst.BSS837X1FF, "BSS837X1FF");
//        createLabelClue(&bss_inst.BSS837X1G, "BSS837X1G");
//        createLabelClue(&bss_inst.BSS837X1HH, "BSS837X1HH");
//        createLabelClue(&bss_inst.BSS837X1J, "BSS837X1J");
//        createLabelClue(&bss_inst.BSS837X1KK, "BSS837X1KK");
//        createLabelClue(&bss_inst.BSS837X1L, "BSS837X1L");
//        createLabelClue(&bss_inst.BSS837X1MM, "BSS837X1MM");
//        createLabelClue(&bss_inst.BSS837X1N, "BSS837X1N");
//        createLabelClue(&bss_inst.BSS837X1R, "BSS837X1R");
//        createLabelClue(&bss_inst.BSS837X1T, "BSS837X1T");
//        createLabelClue(&bss_inst.BSS837X1V, "BSS837X1V");
//        createLabelClue(&bss_inst.BSS837X1X, "BSS837X1X");
//        createLabelClue(&bss_inst.BSS837X1Z, "BSS837X1Z");
//        createLabelClue(&bss_inst.BSS837X1b, "BSS837X1b");
//        createLabelClue(&bss_inst.BSS837X1d, "BSS837X1d");
//        createLabelClue(&bss_inst.BSS837X1f, "BSS837X1f");
//        createLabelClue(&bss_inst.BSS837X1h, "BSS837X1h");
//        createLabelClue(&bss_inst.BSS837X1j, "BSS837X1j");
//        createLabelClue(&bss_inst.BSS837X1n, "BSS837X1n");
//        createLabelClue(&bss_inst.BSS837X1p, "BSS837X1p");
//        createLabelClue(&bss_inst.BSS837X1r, "BSS837X1r");
//        createLabelClue(&bss_inst.BSS837X1t, "BSS837X1t");
//        createLabelClue(&bss_inst.BSS837X1v, "BSS837X1v");
//        createLabelClue(&bss_inst.BSS837X1x, "BSS837X1x");
//        createLabelClue(&bss_inst.BSS837X1z, "BSS837X1z");
//        createLabelClue(&bss_inst.BSS837X2A, "BSS837X2A");
//        createLabelClue(&bss_inst.BSS837X2B, "BSS837X2B");
//        createLabelClue(&bss_inst.BSS837X2C, "BSS837X2C");
//        createLabelClue(&bss_inst.BSS837X2D, "BSS837X2D");
//        createLabelClue(&bss_inst.BSS837X2E, "BSS837X2E");
//        createLabelClue(&bss_inst.BSS837X2F, "BSS837X2F");
//        createLabelClue(&bss_inst.BSS837X2G, "BSS837X2G");
//        createLabelClue(&bss_inst.BSS837X2H, "BSS837X2H");
//        createLabelClue(&bss_inst.BSS837X2J, "BSS837X2J");
//        createLabelClue(&bss_inst.BSS837X2K, "BSS837X2K");
//        createLabelClue(&bss_inst.BSS837X2L, "BSS837X2L");
//        createLabelClue(&bss_inst.BSS837X2M, "BSS837X2M");
//        createLabelClue(&bss_inst.BSS837X2N, "BSS837X2N");
//        createLabelClue(&bss_inst.BSS837X2P, "BSS837X2P");
//        createLabelClue(&bss_inst.BSS837X2R, "BSS837X2R");
//        createLabelClue(&bss_inst.BSS837X2S, "BSS837X2S");
//        createLabelClue(&bss_inst.BSS837X2T, "BSS837X2T");
//        createLabelClue(&bss_inst.BSS837X2U, "BSS837X2U");
//        createLabelClue(&bss_inst.BSS837X2V, "BSS837X2V");
//        createLabelClue(&bss_inst.BSS837X2W, "BSS837X2W");
//        createLabelClue(&bss_inst.BSS837X2X, "BSS837X2X");
//        createLabelClue(&bss_inst.BSS837X2Y, "BSS837X2Y");
//        createLabelClue(&bss_inst.BSS837X2Z, "BSS837X2Z");
//        createLabelClue(&bss_inst.BSS837X2a, "BSS837X2a");
//        createLabelClue(&bss_inst.BSS837X2b, "BSS837X2b");
//        createLabelClue(&bss_inst.BSS837X2c, "BSS837X2c");
//        createLabelClue(&bss_inst.BSS837X2d, "BSS837X2d");
//        createLabelClue(&bss_inst.BSS837X2e, "BSS837X2e");
//        createLabelClue(&bss_inst.BSS837X2f, "BSS837X2f");
//        createLabelClue(&bss_inst.BSS837X2g, "BSS837X2g");
//        createLabelClue(&bss_inst.BSS837X2h, "BSS837X2h");
//        createLabelClue(&bss_inst.BSS837X2i, "BSS837X2i");
//        createLabelClue(&bss_inst.BSS837X2j, "BSS837X2j");
//        createLabelClue(&bss_inst.BSS837X2k, "BSS837X2k");
//        createLabelClue(&bss_inst.BSS837X2m, "BSS837X2m");
//        createLabelClue(&bss_inst.BSS837X2n, "BSS837X2n");
//        createLabelClue(&bss_inst.BSS837X2p, "BSS837X2p");
//        createLabelClue(&bss_inst.BSS837X2q, "BSS837X2q");
//        createLabelClue(&bss_inst.BSS837X2r, "BSS837X2r");
//        createLabelClue(&bss_inst.BSS837X3A, "BSS837X3A");
//        createLabelClue(&bss_inst.BSS837X3C, "BSS837X3C");
//        createLabelClue(&bss_inst.BSS837X3E, "BSS837X3E");
//        createLabelClue(&bss_inst.BSS837X3G, "BSS837X3G");
//        createLabelClue(&bss_inst.BSS837X3J, "BSS837X3J");
//        createLabelClue(&bss_inst.BSS837X3L, "BSS837X3L");
//        createLabelClue(&bss_inst.BSS837X3N, "BSS837X3N");
//        createLabelClue(&bss_inst.BSS837X3R, "BSS837X3R");
//        createLabelClue(&bss_inst.BSS837X3T, "BSS837X3T");
//        createLabelClue(&bss_inst.BSS838X5A, "BSS838X5A");
//        createLabelClue(&bss_inst.BSS838X5BB, "BSS838X5BB");
//        createLabelClue(&bss_inst.BSS838X5C, "BSS838X5C");
//        createLabelClue(&bss_inst.BSS838X5DD, "BSS838X5DD");
//        createLabelClue(&bss_inst.BSS838X5E, "BSS838X5E");
//        createLabelClue(&bss_inst.BSS838X5FF, "BSS838X5FF");
//        createLabelClue(&bss_inst.BSS838X5G, "BSS838X5G");
//        createLabelClue(&bss_inst.BSS838X5HH, "BSS838X5HH");
//        createLabelClue(&bss_inst.BSS838X5J, "BSS838X5J");
//        createLabelClue(&bss_inst.BSS838X5KK, "BSS838X5KK");
//        createLabelClue(&bss_inst.BSS838X5L, "BSS838X5L");
//        createLabelClue(&bss_inst.BSS838X5MM, "BSS838X5MM");
//        createLabelClue(&bss_inst.BSS838X5N, "BSS838X5N");
//        createLabelClue(&bss_inst.BSS838X5R, "BSS838X5R");
//        createLabelClue(&bss_inst.BSS838X5T, "BSS838X5T");
//        createLabelClue(&bss_inst.BSS838X5V, "BSS838X5V");
//        createLabelClue(&bss_inst.BSS838X5X, "BSS838X5X");
//        createLabelClue(&bss_inst.BSS838X5Z, "BSS838X5Z");
//        createLabelClue(&bss_inst.BSS838X5b, "BSS838X5b");
//        createLabelClue(&bss_inst.BSS838X5d, "BSS838X5d");
//        createLabelClue(&bss_inst.BSS838X5f, "BSS838X5f");
//        createLabelClue(&bss_inst.BSS838X5h, "BSS838X5h");
//        createLabelClue(&bss_inst.BSS838X5i, "BSS838X5i");
//        createLabelClue(&bss_inst.BSS838X5n, "BSS838X5n");
//        createLabelClue(&bss_inst.BSS838X5p, "BSS838X5p");
//        createLabelClue(&bss_inst.BSS838X5r, "BSS838X5r");
//        createLabelClue(&bss_inst.BSS838X5v, "BSS838X5v");
//        createLabelClue(&bss_inst.BSS838X5x, "BSS838X5x");
//        createLabelClue(&bss_inst.BSS838X5z, "BSS838X5z");
//        createLabelClue(&bss_inst.BSS838X6A, "BSS838X6A");
//        createLabelClue(&bss_inst.BSS838X6B, "BSS838X6B");
//        createLabelClue(&bss_inst.BSS838X6C, "BSS838X6C");
//        createLabelClue(&bss_inst.BSS838X6D, "BSS838X6D");
//        createLabelClue(&bss_inst.BSS838X6E, "BSS838X6E");
//        createLabelClue(&bss_inst.BSS838X6F, "BSS838X6F");
//        createLabelClue(&bss_inst.BSS838X6G, "BSS838X6G");
//        createLabelClue(&bss_inst.BSS838X6H, "BSS838X6H");
//        createLabelClue(&bss_inst.BSS838X6J, "BSS838X6J");
//        createLabelClue(&bss_inst.BSS838X6K, "BSS838X6K");
//        createLabelClue(&bss_inst.BSS838X6L, "BSS838X6L");
//        createLabelClue(&bss_inst.BSS838X6M, "BSS838X6M");
//        createLabelClue(&bss_inst.BSS838X6N, "BSS838X6N");
//        createLabelClue(&bss_inst.BSS838X6P, "BSS838X6P");
//        createLabelClue(&bss_inst.BSS838X6R, "BSS838X6R");
//        createLabelClue(&bss_inst.BSS838X6S, "BSS838X6S");
//        createLabelClue(&bss_inst.BSS838X6T, "BSS838X6T");
//        createLabelClue(&bss_inst.BSS838X6U, "BSS838X6U");
//        createLabelClue(&bss_inst.BSS838X6V, "BSS838X6V");
//        createLabelClue(&bss_inst.BSS838X6W, "BSS838X6W");
//        createLabelClue(&bss_inst.BSS838X6Y, "BSS838X6Y");
//        createLabelClue(&bss_inst.BSS838X6Z, "BSS838X6Z");
//        createLabelClue(&bss_inst.BSS838X6a, "BSS838X6a");
//        createLabelClue(&bss_inst.BSS838X6b, "BSS838X6b");
//        createLabelClue(&bss_inst.BSS838X6c, "BSS838X6c");
//        createLabelClue(&bss_inst.BSS838X6d, "BSS838X6d");
//        createLabelClue(&bss_inst.BSS838X6e, "BSS838X6e");
//        createLabelClue(&bss_inst.BSS838X6f, "BSS838X6f");
//        createLabelClue(&bss_inst.BSS838X6g, "BSS838X6g");
//        createLabelClue(&bss_inst.BSS838X6h, "BSS838X6h");
//        createLabelClue(&bss_inst.BSS838X6i, "BSS838X6i");
//        createLabelClue(&bss_inst.BSS838X6j, "BSS838X6j");
//        createLabelClue(&bss_inst.BSS838X6k, "BSS838X6k");
//        createLabelClue(&bss_inst.BSS838X6m, "BSS838X6m");
//        createLabelClue(&bss_inst.BSS838X6n, "BSS838X6n");
//        createLabelClue(&bss_inst.BSS838X6p, "BSS838X6p");
//        createLabelClue(&bss_inst.BSS838X6q, "BSS838X6q");
//        createLabelClue(&bss_inst.BSS838X6r, "BSS838X6r");
//        createLabelClue(&bss_inst.BSS838X7A, "BSS838X7A");
//        createLabelClue(&bss_inst.BSS838X7C, "BSS838X7C");
//        createLabelClue(&bss_inst.BSS838X7E, "BSS838X7E");
//        createLabelClue(&bss_inst.BSS838X7G, "BSS838X7G");
//        createLabelClue(&bss_inst.BSS838X7J, "BSS838X7J");
//        createLabelClue(&bss_inst.BSS838X7L, "BSS838X7L");
//        createLabelClue(&bss_inst.BSS838X7N, "BSS838X7N");
//        createLabelClue(&bss_inst.BSS838X7R, "BSS838X7R");
//        createLabelClue(&bss_inst.BSS838X7T, "BSS838X7T");
//        createLabelClue(&bss_inst.BSS913X1A, "BSS913X1A");
//        createLabelClue(&bss_inst.BSS913X1BB, "BSS913X1BB");
//        createLabelClue(&bss_inst.BSS913X1C, "BSS913X1C");
//        createLabelClue(&bss_inst.BSS913X1DD, "BSS913X1DD");
//        createLabelClue(&bss_inst.BSS913X1E, "BSS913X1E");
//        createLabelClue(&bss_inst.BSS913X1FF, "BSS913X1FF");
//        createLabelClue(&bss_inst.BSS913X1G, "BSS913X1G");
//        createLabelClue(&bss_inst.BSS913X1HH, "BSS913X1HH");
//        createLabelClue(&bss_inst.BSS913X1J, "BSS913X1J");
//        createLabelClue(&bss_inst.BSS913X1L, "BSS913X1L");
//        createLabelClue(&bss_inst.BSS913X1N, "BSS913X1N");
//        createLabelClue(&bss_inst.BSS913X1R, "BSS913X1R");
//        createLabelClue(&bss_inst.BSS913X1T, "BSS913X1T");
//        createLabelClue(&bss_inst.BSS913X1V, "BSS913X1V");
//        createLabelClue(&bss_inst.BSS913X1X, "BSS913X1X");
//        createLabelClue(&bss_inst.BSS913X1Z, "BSS913X1Z");
//        createLabelClue(&bss_inst.BSS913X1b, "BSS913X1b");
//        createLabelClue(&bss_inst.BSS913X1d, "BSS913X1d");
//        createLabelClue(&bss_inst.BSS913X1f, "BSS913X1f");
//        createLabelClue(&bss_inst.BSS913X1h, "BSS913X1h");
//        createLabelClue(&bss_inst.BSS913X1j, "BSS913X1j");
//        createLabelClue(&bss_inst.BSS913X1n, "BSS913X1n");
//        createLabelClue(&bss_inst.BSS913X1p, "BSS913X1p");
//        createLabelClue(&bss_inst.BSS913X1r, "BSS913X1r");
//        createLabelClue(&bss_inst.BSS913X1t, "BSS913X1t");
//        createLabelClue(&bss_inst.BSS913X1v, "BSS913X1v");
//        createLabelClue(&bss_inst.BSS913X1x, "BSS913X1x");
//        createLabelClue(&bss_inst.BSS913X1z, "BSS913X1z");
//        createLabelClue(&bss_inst.BSS913X2A, "BSS913X2A");
//        createLabelClue(&bss_inst.BSS913X2B, "BSS913X2B");
//        createLabelClue(&bss_inst.BSS913X2C, "BSS913X2C");
//        createLabelClue(&bss_inst.BSS913X2D, "BSS913X2D");
//        createLabelClue(&bss_inst.BSS913X2E, "BSS913X2E");
//        createLabelClue(&bss_inst.BSS913X2F, "BSS913X2F");
//        createLabelClue(&bss_inst.BSS913X2G, "BSS913X2G");
//        createLabelClue(&bss_inst.BSS913X2H, "BSS913X2H");
//        createLabelClue(&bss_inst.BSS913X2J, "BSS913X2J");
//        createLabelClue(&bss_inst.BSS913X2K, "BSS913X2K");
//        createLabelClue(&bss_inst.BSS913X2L, "BSS913X2L");
//        createLabelClue(&bss_inst.BSS913X2M, "BSS913X2M");
//        createLabelClue(&bss_inst.BSS913X2N, "BSS913X2N");
//        createLabelClue(&bss_inst.BSS913X2P, "BSS913X2P");
//        createLabelClue(&bss_inst.BSS913X2R, "BSS913X2R");
//        createLabelClue(&bss_inst.BSS913X2S, "BSS913X2S");
//        createLabelClue(&bss_inst.BSS913X2T, "BSS913X2T");
//        createLabelClue(&bss_inst.BSS913X2U, "BSS913X2U");
//        createLabelClue(&bss_inst.BSS913X2V, "BSS913X2V");
//        createLabelClue(&bss_inst.BSS913X2W, "BSS913X2W");
//        createLabelClue(&bss_inst.BSS913X2X, "BSS913X2X");
//        createLabelClue(&bss_inst.BSS913X2Y, "BSS913X2Y");
//        createLabelClue(&bss_inst.BSS913X2Z, "BSS913X2Z");
//        createLabelClue(&bss_inst.BSS913X2a, "BSS913X2a");
//        createLabelClue(&bss_inst.BSS913X2b, "BSS913X2b");
//        createLabelClue(&bss_inst.BSS913X2c, "BSS913X2c");
//        createLabelClue(&bss_inst.BSS913X2d, "BSS913X2d");
//        createLabelClue(&bss_inst.BSS913X2e, "BSS913X2e");
//        createLabelClue(&bss_inst.BSS913X2h, "BSS913X2h");
//        createLabelClue(&bss_inst.BSS913X2i, "BSS913X2i");
//        createLabelClue(&bss_inst.BSS913X2j, "BSS913X2j");
//        createLabelClue(&bss_inst.BSS913X2k, "BSS913X2k");
//        createLabelClue(&bss_inst.BSS913X2m, "BSS913X2m");
//        createLabelClue(&bss_inst.BSS913X2n, "BSS913X2n");
//        createLabelClue(&bss_inst.BSS913X2p, "BSS913X2p");
//        createLabelClue(&bss_inst.BSS913X3A, "BSS913X3A");
//        createLabelClue(&bss_inst.BSS913X3C, "BSS913X3C");
//        createLabelClue(&bss_inst.BSS913X3E, "BSS913X3E");
//        createLabelClue(&bss_inst.BSS913X3G, "BSS913X3G");
//        createLabelClue(&bss_inst.BSS913X3J, "BSS913X3J");
//        createLabelClue(&bss_inst.BSS913X3L, "BSS913X3L");
//        createLabelClue(&bss_inst.BSS913X3N, "BSS913X3N");
//        createLabelClue(&bss_inst.BSS926X1A, "BSS926X1A");
//        createLabelClue(&bss_inst.BSS926X1BB, "BSS926X1BB");
//        createLabelClue(&bss_inst.BSS926X1C, "BSS926X1C");
//        createLabelClue(&bss_inst.BSS926X1DD, "BSS926X1DD");
//        createLabelClue(&bss_inst.BSS926X1E, "BSS926X1E");
//        createLabelClue(&bss_inst.BSS926X1FF, "BSS926X1FF");
//        createLabelClue(&bss_inst.BSS926X1G, "BSS926X1G");
//        createLabelClue(&bss_inst.BSS926X1HH, "BSS926X1HH");
//        createLabelClue(&bss_inst.BSS926X1J, "BSS926X1J");
//        createLabelClue(&bss_inst.BSS926X1KK, "BSS926X1KK");
//        createLabelClue(&bss_inst.BSS926X1L, "BSS926X1L");
//        createLabelClue(&bss_inst.BSS926X1MM, "BSS926X1MM");
//        createLabelClue(&bss_inst.BSS926X1N, "BSS926X1N");
//        createLabelClue(&bss_inst.BSS926X1R, "BSS926X1R");
//        createLabelClue(&bss_inst.BSS926X1T, "BSS926X1T");
//        createLabelClue(&bss_inst.BSS926X1V, "BSS926X1V");
//        createLabelClue(&bss_inst.BSS926X1X, "BSS926X1X");
//        createLabelClue(&bss_inst.BSS926X1Z, "BSS926X1Z");
//        createLabelClue(&bss_inst.BSS926X1b, "BSS926X1b");
//        createLabelClue(&bss_inst.BSS926X1d, "BSS926X1d");
//        createLabelClue(&bss_inst.BSS926X1f, "BSS926X1f");
//        createLabelClue(&bss_inst.BSS926X1h, "BSS926X1h");
//        createLabelClue(&bss_inst.BSS926X1j, "BSS926X1j");
//        createLabelClue(&bss_inst.BSS926X1n, "BSS926X1n");
//        createLabelClue(&bss_inst.BSS926X1p, "BSS926X1p");
//        createLabelClue(&bss_inst.BSS926X1r, "BSS926X1r");
//        createLabelClue(&bss_inst.BSS926X1t, "BSS926X1t");
//        createLabelClue(&bss_inst.BSS926X1x, "BSS926X1x");
//        createLabelClue(&bss_inst.BSS926X1z, "BSS926X1z");
//        createLabelClue(&bss_inst.BSS926X2A, "BSS926X2A");
//        createLabelClue(&bss_inst.BSS926X2B, "BSS926X2B");
//        createLabelClue(&bss_inst.BSS926X2C, "BSS926X2C");
//        createLabelClue(&bss_inst.BSS926X2D, "BSS926X2D");
//        createLabelClue(&bss_inst.BSS926X2E, "BSS926X2E");
//        createLabelClue(&bss_inst.BSS926X2F, "BSS926X2F");
//        createLabelClue(&bss_inst.BSS926X2G, "BSS926X2G");
//        createLabelClue(&bss_inst.BSS926X2H, "BSS926X2H");
//        createLabelClue(&bss_inst.BSS926X2J, "BSS926X2J");
//        createLabelClue(&bss_inst.BSS926X2K, "BSS926X2K");
//        createLabelClue(&bss_inst.BSS926X2L, "BSS926X2L");
//        createLabelClue(&bss_inst.BSS926X2M, "BSS926X2M");
//        createLabelClue(&bss_inst.BSS926X2N, "BSS926X2N");
//        createLabelClue(&bss_inst.BSS926X2P, "BSS926X2P");
//        createLabelClue(&bss_inst.BSS926X2R, "BSS926X2R");
//        createLabelClue(&bss_inst.BSS926X2S, "BSS926X2S");
//        createLabelClue(&bss_inst.BSS926X2T, "BSS926X2T");
//        createLabelClue(&bss_inst.BSS926X2U, "BSS926X2U");
//        createLabelClue(&bss_inst.BSS926X2V, "BSS926X2V");
//        createLabelClue(&bss_inst.BSS926X2W, "BSS926X2W");
//        createLabelClue(&bss_inst.BSS926X2a, "BSS926X2a");
//        createLabelClue(&bss_inst.BSS926X2b, "BSS926X2b");
//        createLabelClue(&bss_inst.BSS926X2c, "BSS926X2c");
//        createLabelClue(&bss_inst.BSS926X2d, "BSS926X2d");
//        createLabelClue(&bss_inst.BSS926X2e, "BSS926X2e");
//        createLabelClue(&bss_inst.BSS926X2f, "BSS926X2f");
//        createLabelClue(&bss_inst.BSS926X2g, "BSS926X2g");
//        createLabelClue(&bss_inst.BSS926X2h, "BSS926X2h");
//        createLabelClue(&bss_inst.BSS926X2i, "BSS926X2i");
//        createLabelClue(&bss_inst.BSS926X2j, "BSS926X2j");
//        createLabelClue(&bss_inst.BSS926X2k, "BSS926X2k");
//        createLabelClue(&bss_inst.BSS926X2m, "BSS926X2m");
//        createLabelClue(&bss_inst.BSS926X2n, "BSS926X2n");
//        createLabelClue(&bss_inst.BSS926X2p, "BSS926X2p");
//        createLabelClue(&bss_inst.BSS926X2q, "BSS926X2q");
//        createLabelClue(&bss_inst.BSS926X2r, "BSS926X2r");
//        createLabelClue(&bss_inst.BSS926X2s, "BSS926X2s");
//        createLabelClue(&bss_inst.BSS926X2z, "BSS926X2z");
//        createLabelClue(&bss_inst.BSS926X3A, "BSS926X3A");
//        createLabelClue(&bss_inst.BSS926X3C, "BSS926X3C");
//        createLabelClue(&bss_inst.BSS926X3E, "BSS926X3E");
//        createLabelClue(&bss_inst.BSS926X3H, "BSS926X3H");
//        createLabelClue(&bss_inst.BSS926X3J, "BSS926X3J");
//        createLabelClue(&bss_inst.BSS926X3L, "BSS926X3L");
//        createLabelClue(&bss_inst.BSS926X3N, "BSS926X3N");
//        createLabelClue(&bss_inst.BSS926X3R, "BSS926X3R");
//        createLabelClue(&bss_inst.BSS926X3T, "BSS926X3T");
//        createLabelClue(&bss_inst.BSS926X3V, "BSS926X3V");
//        createLabelClue(&bss_inst.BSS926x1, "BSS926x1");
//        createLabelClue(&bss_inst.BSS926x2, "BSS926x2");
//        createLabelClue(&bss_inst.BSS926y1, "BSS926y1");
//        createLabelClue(&bss_inst.BSS926y2, "BSS926y2");
//        createLabelClue(&bss_inst.BSS938X3E, "BSS938X3E");
//        createLabelClue(&bss_inst.BSS939X1B, "BSS939X1B");
//        createLabelClue(&bss_inst.BSS939X1D, "BSS939X1D");
//        createLabelClue(&bss_inst.BSS939X1E, "BSS939X1E");
//        createLabelClue(&bss_inst.BSS939X1G, "BSS939X1G");
//        createLabelClue(&bss_inst.BSS939X1J, "BSS939X1J");
//        createLabelClue(&bss_inst.BSS939X1L, "BSS939X1L");
//        createLabelClue(&bss_inst.BSS939X1N, "BSS939X1N");
//        createLabelClue(&bss_inst.BSS939X2A, "BSS939X2A");
//        createLabelClue(&bss_inst.BSS939X2B, "BSS939X2B");
//        createLabelClue(&bss_inst.BSS939X2C, "BSS939X2C");
//        createLabelClue(&bss_inst.BSS939X2D, "BSS939X2D");
//        createLabelClue(&bss_inst.BSS939X2E, "BSS939X2E");
//        createLabelClue(&bss_inst.BSS939X2F, "BSS939X2F");
//        createLabelClue(&bss_inst.BSS939X2G, "BSS939X2G");
//        createLabelClue(&bss_inst.BSS939X2H, "BSS939X2H");
//        createLabelClue(&bss_inst.BSS939X2J, "BSS939X2J");
//        createLabelClue(&bss_inst.BSS939X2K, "BSS939X2K");
//        createLabelClue(&bss_inst.BSS939X2L, "BSS939X2L");
//        createLabelClue(&bss_inst.V_mala, "V_mala");
//        createLabelClue(&bss_inst.V_velika, "V_velika");
//        createLabelClue(&bss_inst.alpha_fi_ogrnich, "alpha_fi_ogrnich");
//        createLabelClue(&bss_inst.alpha_py_fi_ogrnch, "alpha_py_fi_ogrnch");
//        createLabelClue(&bss_inst.alpha_py_predel, "alpha_py_predel");
//        createLabelClue(&bss_inst.kren_velik, "kren_velik");
//        createLabelClue(&bss_inst.nazhmi_rzv_tormz, "nazhmi_rzv_tormz");
//        createLabelClue(&bss_inst.neytral_kren, "neytral_kren");
//        createLabelClue(&bss_inst.neytral_kurs, "neytral_kurs");
//        createLabelClue(&bss_inst.p_bakov_veliko, "p_bakov_veliko");
//        createLabelClue(&bss_inst.programma, "programma");
//        createLabelClue(&bss_inst.razrezh_veliko, "razrezh_veliko");
//        createLabelClue(&bss_inst.vkl_forsir_torm, "vkl_forsir_torm");
//        createLabelClue(&bss_inst.vkl_rezerv_torm, "vkl_rezerv_torm");
//}
//void emergencyalarm_int::updateLogic()
//{
//    emergencyalarm_1();
//    emergencyalarm_2();
//    emergencyalarm_3();
//    emergencyalarm_4();
//    emergencyalarm_5();
//    emergencyalarm_6();
//    emergencyalarm_7();
//    emergencyalarm_8();
//    emergencyalarm_9();
//}
