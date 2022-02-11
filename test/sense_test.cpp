#include "../include/Sense_Interface.h"
using namespace std;

int main()
{
    Sense_Interface s("breathe", "00001740 29 v 04 breathe 0 take_a_breath 0 respire 0 suspire 3 021 * 00005041 v 0000 * 00004227 v 0000 + 03121972 a 0301 + 00832852 n 0303 + 04087945 n 0301 + 04257960 n 0105 + 00832852 n 0101 ^ 00004227 v 0103 ^ 00005041 v 0103 $ 00002325 v 0000 $ 00002573 v 0000 ~ 00002573 v 0000 ~ 00002724 v 0000 ~ 00002942 v 0000 ~ 00003826 v 0000 ~ 00004032 v 0000 ~ 00004227 v 0000 ~ 00005041 v 0000 ~ 00006697 v 0000 ~ 00007328 v 0000 ~ 00017024 v 0000 02 + 02 00 + 08 00 | draw air into, and expel out of, the lungs; \"I can breathe better when the air is clean\"; \"The patient is respiring\"  ");
    for (auto i: s.fragments)
        cout << i << endl;
    s.previewSenseInterface();
}