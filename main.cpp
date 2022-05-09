#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

#include "RandomBinaryString.h"

#define MAX_GENERATIONS 4   // how many rounds of mutations can occur
#define MAX_DNA_LENGTH  8   // the max string length for binaryString
#define MIN_DNA_LENGTH  4
#define MAX_MUTATORS    3   // max number of mutators
#define MAX_K_LENGTH    9   // max number value for k param in functions

RandomBinaryString *randomGenerator = new RandomBinaryString();

Individual* execute(Individual *indPtr, Mutator* mPtr, int k){
    mPtr->mutate(indPtr, k);
    return indPtr;
}

// dummy debug function
int check_cmdline_params(int argc, char *argv[]){
//    std::cout << "argc = " << argc << std::endl;
//    for(int i = 0; i < argc; i++){
//       std::cout << "argv[" << i << "] = " << argv[i] << std::endl;
//    }
    if(argc != 5){
//        std::cout << "wrong params given" << std::endl;
//        return argc;
        return -1;
    }
    return 0;
}

void testFunc(){
    int len = randomGenerator->getRandomNumber(MAX_DNA_LENGTH - MIN_DNA_LENGTH) + MIN_DNA_LENGTH; // range [MIN_DNA_LENGTH, MAX_DNA_LENGTH]
    std::string dnaStr = randomGenerator->generateString(len);
    auto *indTest1 = new Individual(dnaStr);

    // output DNA string
    std::cout << "Before mutating:  | DNA len = " << len << " | ";
    //std::cout << indTest1->getString_4Bytes() << " | ";
    std::cout << "Max Ones = " << indTest1->getMaxOnes() << std::endl;

    int rounds = randomGenerator->getRandomNumber(MAX_GENERATIONS) + 1;
    for(int round = 0; round < rounds; round++) {
        int k_param = randomGenerator->getRandomNumber(MAX_K_LENGTH) + 1;

        Mutator *mutOption = nullptr;
        int mutator_choice = randomGenerator->getRandomNumber(MAX_MUTATORS);
        switch (mutator_choice) {
            case 0:{
                std::cout << "OPT = BitFlip     | ";
                mutOption = new BitFlip();
                break;
            }
            case 1:{
                // possibility = randomGenerator->getRandomNumber(100) / 100
                std::cout << "OPT = BitFlipProb | ";
                mutOption = new BitFlipProb(randomGenerator->getRandomNumber(100) / 100);
                break;
            }
            case 2:{
                std::cout << "OPT = Reaarange   | ";
                mutOption = new Rearrange();
                break;
            }
            default:
                mutOption = new BitFlip();
        }

        std::cout << "k param = " << k_param << " | ";
        execute(indTest1, mutOption, k_param);
        //std::cout << indTest1->getString_4Bytes() << " | ";
//        std::cout << "k param = " << k_param << " | ";
        std::cout << "Max Ones = " << indTest1->getMaxOnes() << std::endl;
    }
    // output DNA string
//    std::cout << "After round: " << rounds << " | " << indTest1->getString_4Bytes();
    return;
}

int main(int argc, char* argv[]) {

    // debug
    // run test function when no commandline params given
    if(argc == 1){
        testFunc();
        return 0;
    }

    // debug
    // perform commandline error checking
    // dummy function
    if(check_cmdline_params(argc, argv) == -1){
        // if commandline params not in correct format
        // then exit program
        return -1;
    }

    // with commandline params
    // commandline params assumed to be in the correct format
    // no error checking performed
    std::string binarystr1 = argv[1];
    std::string binarystr2 = argv[3];
    int k1 = std::stoi(argv[2]);
    int k2 = std::stoi(argv[4]);

    Individual *mutated;

    Individual *ind1 = new Individual(binarystr1);
    BitFlip *bf = new BitFlip();
    mutated = execute(ind1, bf, k1);
    std::string mutated_str1 = mutated->getString();
    int max1 = mutated->getMaxOnes();

    Individual *ind2 = new Individual(binarystr2);
    Rearrange *ra = new Rearrange();
    mutated = execute(ind2, ra, k2);
    std::string mutated_str2 = mutated->getString();
    int max2 = mutated->getMaxOnes();

    std::cout << mutated_str1 << ' ' << mutated_str2 << ' ' << std::max(max1, max2) << std::endl;


    return 0;
}
