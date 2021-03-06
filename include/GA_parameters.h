#ifndef GA_PARAMETERS_H
#define GA_PARAMETERS_H


#define target string("Hello world ! Ici Maxime Aberton, Killian Jaubert et Rafael Cartenet. Quel temps fait-il ?")

#define SIZE target.size()
#define RANDOM (float)(rand()%100+1)/100
#define NBGENE 30000

//Paramètres du GA

#define ELITRATE 0.20
#define CROSSOVERRATE 0.6
#define NBGENOME (SIZE%2==1?SIZE+1:SIZE)

#define MUTERATEMAX 0.04
#define COEFFMUTERATE 1.008
#define DELTAFITNESS 1

static double MUTERATE=0.01;

#endif
