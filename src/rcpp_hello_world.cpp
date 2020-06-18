#define GLOG_NO_ABBREVIATED_SEVERITIES
#include "ortools/linear_solver/linear_solver.h"
#include <Rcpp.h>

using namespace Rcpp;
using namespace operations_research;

// [[Rcpp::export]]
List rcpp_hello_world() {

    CharacterVector x = CharacterVector::create( "foo", "bar" )  ;
    NumericVector y   = NumericVector::create( 0.0, 1.0 ) ;
    List z            = List::create( x, y ) ;

    return z ;
}

// [[Rcpp::export]]
NumericVector rcpp_test_rortools() {
    MPSolver solver("LinearExample", MPSolver::GLOP_LINEAR_PROGRAMMING);
    const double infinity = solver.infinity();
    MPVariable* const x = solver.MakeNumVar(0.0, infinity, "x");
    MPVariable* const y = solver.MakeNumVar(0.0, infinity, "y");
    MPConstraint* const c0 = solver.MakeRowConstraint(-infinity, 14.0);
    c0->SetCoefficient(x, 1);
    c0->SetCoefficient(y, 2);
    MPConstraint* const c1 = solver.MakeRowConstraint(0.0, infinity);
    c1->SetCoefficient(x, 3);
    c1->SetCoefficient(y, -1);

    MPConstraint* const c2 = solver.MakeRowConstraint(-infinity, 2.0);
    c2->SetCoefficient(x, 1);
    c2->SetCoefficient(y, -1);
    MPObjective* const objective = solver.MutableObjective();
    objective->SetCoefficient(x, 3);
    objective->SetCoefficient(y, 4);
    objective->SetMaximization();
    const MPSolver::ResultStatus result_status = solver.Solve();
    NumericVector answer = NumericVector::create(x->solution_value());
    return answer;
}
