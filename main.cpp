#include<bits/stdc++.h>
// #include"Model/RubiksCube1dArray.cpp"
// #include"Model/RubiksCube3dArray.cpp"
#include"Model/RubiksCubeBitboard.cpp"
// #include"Model/RubiksCube.cpp"
#include "Solver/DFSSolver.h"
#include "Solver/BFSSolver.h"
#include "Solver/IDDFSSolver.h"
#include "Solver/IDAstarSolver.h"
#include "PatternDatabases/CornerPatternDatabase.h"
#include "PatternDatabases/CornerDBMaker.h"



using namespace std;


int main(){
    
    // RubiksCube3dArray o;

    // o.print();
    // o.f();
    // o.u();
    // o.f();
    // o.print();
    // o.fPrime();
    // o.uPrime();
    // o.fPrime();
    // o.print();

    //DFS Solver Testing __________________________________________________________________________________________
    // RubiksCube3dArray cube;
    // cube.print();

    // vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
    // for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";
    // cube.print();

    // DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube, 8);
    // vector<RubiksCube::MOVE> solve_moves = dfsSolver.solve();

    // for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    // cout << "\n";
    // dfsSolver.rubiksCube.print();

    //BFS Solver -----------------------------------------------------------------------------------------------------
//    RubiksCubeBitboard cube;
//    cube.print();

//    vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(5);
//    for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();

//    BFSSolver<RubiksCubeBitboard, HashBitboard> bfsSolver(cube);
//    vector<RubiksCube::MOVE> solve_moves = bfsSolver.solve();

//    for(auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    bfsSolver.rubiksCube.print();

    // IDDFS Solver ----------------------------------------------------------------------------------------------------
//    RubiksCube1dArray cube;
//    cube.print();

//    vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(8);
//    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();

//    IDDFSSolver<RubiksCube1dArray, Hash1d> iddfsSolver(cube, 7);
//    vector<RubiksCube::MOVE> solve_moves = iddfsSolver.solve();

//    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    iddfsSolver.rubiksCube.print();

// IDA* SOLVER ---------------------------------------------------------------------------------------------------
//    RubiksCubeBitboard cube;
//    cube.print();

//    vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(5);
//    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();

//    IDAstarSolver<RubiksCubeBitboard, HashBitboard> idAstarSolver(cube);
//    vector<RubiksCube::MOVE> solve_moves = idAstarSolver.solve();
//    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    idAstarSolver.rubiksCube.print();

// CornerPatternDatabase Testing ---------------------------------------------------------------------------------

//    CornerPatternDatabase cornerDB;
//    RubiksCubeBitboard cube;
//    cube.print();

//    cout << (int)cornerDB.getNumMoves(cube) << "\n";

//    cornerDB.setNumMoves(cube, 5);

//    cout << (int)cornerDB.getNumMoves(cube) << "\n";

//    cube.randomShuffleCube(1);
//    cube.print();
//    cout << (int)cornerDB.getNumMoves(cube) << "\n";

//    cornerDB.setNumMoves(cube, 6);

//    cout << (int)cornerDB.getNumMoves(cube) << "\n";



// CornerDBMaker Testing --------------------------------------------------------------------------
    string fileName = "D:\\codes\\Projects\\RubiksCubeSolver\\Databases\\cornerDepth5V1.txt";

//    Code to create Corner Database
//    CornerDBMaker dbMaker(fileName, 0x99);
//    dbMaker.bfsAndStore();

    RubiksCubeBitboard cube;
    auto shuffleMoves = cube.randomShuffleCube(13);
    cube.print();
    for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
    cout << "\n";

    IDAstarSolver<RubiksCubeBitboard, HashBitboard> idaStarSolver(cube, fileName);
    auto moves = idaStarSolver.solve();

    idaStarSolver.rubiksCube.print();
    for (auto move: moves) cout << cube.getMove(move) << " ";
    cout << "\n";


    return 0;




}