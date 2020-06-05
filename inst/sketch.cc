#include <iostream>
#include <chrono>
#include <fstream>
#include <vector>
#include <string>
#include "ortools/graph/min_cost_flow.h"
#include "ortools/base/logging.h"

namespace operations_research{

    std::vector<int> read_input(std::string filename){
        // Simple function to read in input easily
        int x;
        std::vector<int> test;
        std::string garbage;
        std::ifstream myfile(filename);
        if (!myfile) std::cerr << "Could not find test file" << std::endl;
        myfile >> garbage;
        while( myfile >> x ) {
            test.push_back(x);
        }
        return test;
    }

    int SolveProblem(std::string testname)
    {
        std::string  fname = "/home/arav/optmatchTesting/tests/"+ testname +"/startnodes.csv";
        std::vector<int> startnodes = read_input(fname);
        fname = "/home/arav/optmatchTesting/tests/"+ testname +"/endnodes.csv";
        std::vector<int> endnodes = read_input(fname);
        fname = "/home/arav/optmatchTesting/tests/"+ testname +"/arccosts.csv";
        std::vector<int> costs = read_input(fname);
        fname = "/home/arav/optmatchTesting/tests/"+ testname +"/arccapacity.csv";
        std::vector<int> capacity = read_input(fname);
        fname = "/home/arav/optmatchTesting/tests/"+ testname +"/nodedemand.csv";
        std::vector<int> supplies = read_input(fname);
        auto start = std::chrono::high_resolution_clock::now();
        SimpleMinCostFlow min_cost_flow;
        for (int i = 0; i < (int)startnodes.size(); i++) {
            int arc = min_cost_flow.AddArcWithCapacityAndUnitCost(
                    startnodes[i], endnodes[i], capacity[i], costs[i]
                    );
            if (arc != i) LOG(FATAL) << "Internal error";
        }
        for (int i = 0; i < (int)supplies.size(); ++i){
            min_cost_flow.SetNodeSupply(i+1, supplies[i]);
        } 
        int solve_status = min_cost_flow.SolveMaxFlowWithMinCost();
        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        return duration.count();
        /*
           if (solve_status == MinCostFlow::OPTIMAL) {
           LOG(INFO) << "Minimum cost flow: " << min_cost_flow.OptimalCost();
           LOG(INFO) << "";
           LOG(INFO) << " Arc   Flow / Capacity  Cost";
           for (int i = 0; i < min_cost_flow.NumArcs(); ++i) {
           int64 cost = min_cost_flow.Flow(i) * min_cost_flow.UnitCost(i);
           LOG(INFO) << min_cost_flow.Tail(i) << " -> " << min_cost_flow.Head(i)
           << "  " << min_cost_flow.Flow(i) << "  / "
           << min_cost_flow.Capacity(i) << "       " << cost;
           }} else {
           LOG(INFO) << "Solving the min cost flow problem failed. Solver status: "
           << solve_status;
           }
           */
    }
}

void test(std::string testname) {
double duration = 0.0;
    int iterations = 100;
    double max = 0.0;
    double min = std::numeric_limits<double>::max();
    std::string test_name = testname;
    for(int j = 0; j < iterations; j++){
    double test = (float)operations_research::SolveProblem(test_name);
    duration+= test;
    if(test > max) max = test;
    if(test < min) min = test;
    }
    duration /= (double)iterations;
    double range = 0.5*(max - min);
    std::cout << test_name << " took, over 10 tests, about: " << duration <<  " +/- " << range << " microseconds." << std::endl; 
}

int main() {
    test("small");
    test("medium");
    test("large");
    return 0;
}
