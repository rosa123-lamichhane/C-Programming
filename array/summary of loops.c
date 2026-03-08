// 1. How Many Loops Are Needed?
//Type	Input Loop(s)	Processing Loop(s)	Output Loop(s)	Total Loops
//1D Array	1	1	1	3
//2D Array	2 (nested)	2 (nested)	2 (nested)	3 total blocks (nested)
//3D Array	3 (nested)	3 (nested)	3 (nested)	3 total blocks (nested)
//
// Note: You don’t need 6 or 9 separate loops. You use nested loops (not extra separate ones).
//So for:
//
//2D = 2 nested loops (reused 3 times: input, processing, output).
//
//3D = 3 nested loops.
//
//So, in total, you still follow IPO (Input, Processing, Output),
//but you reuse the same nested loop structure three times — not multiply it.
