#include "helpers.h"
#include "SigScan.h"

SIG_SCAN (PseudoDefault, 0x00, "PSEUDO_DEFAULT", "xxxxxxxxxxxxxx");
SIG_SCAN (PseudoSame, 0x00, "PSEUDO_SAME", "xxxxxxxxxxx");
SIG_SCAN (PseudoSwim, 0x00, "PSEUDO_SWIM", "xxxxxxxxxxx");
SIG_SCAN (PseudoSwimS, 0x00, "PSEUDO_SWIM_S", "xxxxxxxxxxxxx");
SIG_SCAN (PseudoMyChara, 0x00, "PSEUDO_MYCHARA", "xxxxxxxxxxxxxx");
SIG_SCAN (Fixed, 0x00, ".fixed", "xxxxxxx");

#ifdef __cplusplus
extern "C" {
#endif
__declspec(dllexport) void init () {
	if (!sigValid) return;
	WRITE_NULL (PseudoDefault(), 1);
	WRITE_NULL (PseudoSame(), 1);
	WRITE_NULL (PseudoSwim(), 1);
	WRITE_NULL (PseudoSwimS(), 1);
	WRITE_NULL (PseudoMyChara(), 1);
	WRITE_NULL (Fixed(), 1);
}
#ifdef __cplusplus
}
#endif
