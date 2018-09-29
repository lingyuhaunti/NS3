#include "statics.h"
using namespace std;
ofstream output_file("ns3-fct-output.txt");
statics m_static[60000];
bool Array_P2W[64];
bool Array_W2P[64];
bool Array_PSend[4];
bool Array_WSend[16];
uint16_t flowc_count = 0;