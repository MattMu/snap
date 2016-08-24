#ifndef RAND_WALK_H
#define RAND_WALK_H

typedef THash<TInt,TPair<TIntV,TFltV> > TIntIntVFltVPrH;
typedef TNodeEDatNet<TIntIntVFltVPrH, TFlt> TWNet;
typedef TPt<TWNet> PWNet;
typedef TPair<TVec<TInt>, TVec<TFlt> > TIntVFltVPr;

///Preprocesses transition probabilities for random walks. Has to be called once before SimulateWalk calls
void PreprocessTransitionProbs(PWNet& InNet, double& ParamP, double& ParamQ, bool& verbose);
///Simulates one walk and writes it into Walk vector
void SimulateWalk(PWNet& InNet, int StartNId, int& WalkLen, TIntV& Walk);

#endif //RAND_WALK_H
