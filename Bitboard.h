#ifndef Bitboard_h_
#define Bitboard_h_
#include <string>
typedef unsigned long long int Bitboard;
using namespace std;
//This is an array containing one bit set in each bitboard corresponding to the index of the array; the square A1 is the first (0th) element
extern Bitboard GeneralBoard[64];
    
extern Bitboard Eigth_Rank_White;//For masking out pawn pushes to the eagth rank for each side--white and black
extern Bitboard Eigth_Rank_Black;//See last comment
extern Bitboard Seventh_Rank_White;//For masking out pawn pushes to the eagth rank for each side--white and black
extern Bitboard Seventh_Rank_Black;//See last comment
extern Bitboard White_Pieces;
extern Bitboard Black_Pieces;
extern Bitboard White_King;
extern Bitboard Black_King;
extern Bitboard White_Queens;
extern Bitboard White_Rooks;
extern Bitboard White_Bishops;
extern Bitboard White_Knights;
extern Bitboard White_Pawns;
extern Bitboard Black_Queens;
extern Bitboard Black_Rooks;
extern Bitboard Black_Bishops;
extern Bitboard Black_Knights;
extern Bitboard Black_Pawns;

//Contains the squares that a knight on a given index can move to. For example, the 0th element has the bits of b3 and c2 set
extern Bitboard Knight_Lookup_Table[64];



//This one is the same as the Knight_Lookup_Table except that this one is for kings
extern Bitboard King_Lookup_Table[64];

 
 extern Bitboard H_Pawn_Mask;//For masking out A and H pawns so that they cannot capture off of the end of the board
 extern Bitboard A_Pawn_Mask;//Same as last comment

//Contains a string representation of the squares of the chess board; for example, the 0th element in the array is "a1"
extern string PlayerMoves[64];



extern bool White_Is_In_Check;
extern bool Black_Is_In_Check;

#endif//Bitboard.h

